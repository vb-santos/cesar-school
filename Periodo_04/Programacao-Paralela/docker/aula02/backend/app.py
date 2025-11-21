from flask import Flask, request, jsonify
import os
import psycopg2
from psycopg2.extras import RealDictCursor

app = Flask(__name__)

DB_HOST = os.getenv("DATABASE_HOST", "db")
DB_PORT = os.getenv("DATABASE_PORT", 5432)
DB_NAME = os.getenv("DATABASE_NAME", "meubanco")
DB_USER = os.getenv("DATABASE_USER", "admin")
DB_PASS = os.getenv("DATABASE_PASSWORD", "1234")

def get_conn():
    return psycopg2.connect(
        host=DB_HOST,
        port=DB_PORT,
        dbname=DB_NAME,
        user=DB_USER,
        password=DB_PASS
    )

def init_db():
    conn = get_conn()
    cur = conn.cursor()
    cur.execute("""
    CREATE TABLE IF NOT EXISTS usuarios (
        id SERIAL PRIMARY KEY,
        nome TEXT NOT NULL,
        email TEXT NOT NULL
    );
    """)
    conn.commit()
    cur.close()
    conn.close()

@app.before_first_request
def startup():
    init_db()

@app.route('/usuarios', methods=['POST'])
def criar_usuario():
    data = request.get_json()
    nome = data.get('nome')
    email = data.get('email')
    if not nome or not email:
        return jsonify({"error": "nome e email são obrigatórios"}), 400

    conn = get_conn()
    cur = conn.cursor()
    cur.execute("INSERT INTO usuarios (nome, email) VALUES (%s, %s) RETURNING id;", (nome, email))
    user_id = cur.fetchone()[0]
    conn.commit()
    cur.close()
    conn.close()
    return jsonify({"id": user_id, "nome": nome, "email": email}), 201

@app.route('/usuarios', methods=['GET'])
def listar_usuarios():
    conn = get_conn()
    cur = conn.cursor(cursor_factory=RealDictCursor)
    cur.execute("SELECT id, nome, email FROM usuarios ORDER BY id;")
    rows = cur.fetchall()
    cur.close()
    conn.close()
    return jsonify(rows), 200

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
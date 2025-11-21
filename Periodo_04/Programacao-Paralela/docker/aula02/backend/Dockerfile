FROM python:3.9-slim

WORKDIR /app
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt

COPY app.py .

EXPOSE 5000

# Usamos gunicorn em produção; para desenvolvimento, o Flask dev server também funciona.
CMD ["gunicorn", "--bind", "0.0.0.0:5000", "app:app", "--workers", "1"]
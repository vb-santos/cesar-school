import threading
import random
import time

contador = 0
lock = threading.Lock()  # Objeto de lock para sincronização
threads = []

def incrementar():
    global contador
    time.sleep(random.uniform(0, 0.1))  # Espera aleatória entre 0 e 100ms
    with lock:  # Usando o lock para garantir acesso seguro ao contador
        contador += 1

# Criando e iniciando 1000 threads
for _ in range(1000):
    t = threading.Thread(target=incrementar)
    threads.append(t)
    t.start()

# Esperando todas as threads terminarem
for t in threads:
    t.join()

print(contador)  # Deve imprimir 1000
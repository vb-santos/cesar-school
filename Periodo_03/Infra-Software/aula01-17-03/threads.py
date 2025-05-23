import threading
import random
import time

contador = 0

def incrementar():
    global contador
    time.sleep(random.randint(0, 100) / 1000)  # Convertendo para segundos
    contador += 1

threads = []
for i in range(1000):
    t = threading.Thread(target=incrementar)
    threads.append(t)
    t.start()

for t in threads:
    t.join()

print(contador)
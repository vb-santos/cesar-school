import threading
import time

# Configuração inicial
bathroom = threading.Semaphore(3)  # Capacidade máxima de 3 pessoas
lock = threading.Lock()            # Objeto de lock para sincronização
inside_count = 0                   # Pessoas atualmente no banheiro
used_count = 0                     # Total de pessoas que já usaram
total_people = 6                   # Total de pessoas que tentarão usar

def use_bathroom(person_id):
    global inside_count, used_count
    
    print(f"Pessoa {person_id} chegou e quer usar o banheiro.")
    
    # Tenta entrar no banheiro (aguarda se estiver cheio)
    bathroom.acquire()
    
    with lock:
        inside_count += 1
        print(f"Pessoa {person_id} entrou. {inside_count} usando agora.")
    
    # Simula o uso do banheiro
    time.sleep(2)
    
    with lock:
        used_count += 1
        inside_count -= 1
        print(f"Pessoa {person_id} saiu. {inside_count} lá dentro agora.")
    
    # Libera a vaga no banheiro
    bathroom.release()

# Cria e inicia as threads
threads = []
for i in range(total_people):
    t = threading.Thread(target=use_bathroom, args=(i,))
    threads.append(t)
    t.start()

# Aguarda todas as threads terminarem
for t in threads:
    t.join()

print(f"\nTotal de pessoas: {total_people}, já usaram: {used_count}")
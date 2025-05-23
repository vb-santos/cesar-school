int ledVerde = 4;
int ledAmarela = 5;
int ledVermelha = 6;

void setup() {
  // Onde colocamos códigos de incialização:
  pinMode(ledVerde, OUTPUT); // configura o pino digital 4 como saída
  pinMode(ledAmarela, OUTPUT); // configura o pino digital 5 como saída
  pinMode(ledVermelha, OUTPUT); // configura o pino digital 6 como saída
}

void loop() {
  // Onde colocamos códigos que sempre serão executados:
  // Pino ledVerde

  digitalWrite(ledVerde, HIGH); // Ativa o pino digital 4
  delay(5000); // espera por um segundo

  digitalWrite(ledVerde, LOW); // desativa o pino digital 4
  delay(100); // espera por um segundo

  // Pino 5

  digitalWrite(ledAmarela, HIGH); // Ativa o pino digital 5
  delay(500); // espera por um segundo

  digitalWrite(ledAmarela, LOW); // desativa o pino digital 5
  delay(100); // espera por um segundo

  // Pino 6

  digitalWrite(ledVermelha, HIGH); // Ativa o pino digital 6
  delay(5000); // espera por um segundo

  digitalWrite(ledVermelha, LOW); // desativa o pino digital 6
  delay(100); // espera por um segundo
}
int potPin = A2;
int value; // Recebe o valor lido do potenciômetro

void setup() {
  Serial.begin(9600); // Inicializa a comunicação inicial com 9600 bits por segundo
}

void loop() {
  value = analogRead(potPin); // Lê um valor da porta analógica e armazena na variável value

  Serial.println(value); // Exibe o valor lido na Serial
  delay(1000);
}

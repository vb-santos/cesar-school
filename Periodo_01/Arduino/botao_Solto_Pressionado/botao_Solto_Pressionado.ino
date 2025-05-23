int vermPin = 9;
int verdPin = 8;
int btnPin = 2;
bool btnStatus;

void setup() {
  Serial.begin(9600);
 
  pinMode(vermPin, OUTPUT);
  pinMode(verdPin, OUTPUT);
  pinMode(btnPin, INPUT);
}

void loop() {
  btnStatus = digitalRead(btnPin);
 
  if(btnStatus == HIGH) {
    digitalWrite(vermPin, HIGH);
    digitalWrite(verdPin, LOW);
    Serial.println("Botao pressionado!");
  } else {
    digitalWrite(vermPin, LOW);
    digitalWrite(verdPin, HIGH);
    Serial.println("Botao solto!");
  }
}

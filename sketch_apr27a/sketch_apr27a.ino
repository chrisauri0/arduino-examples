int LED = 3;

void setup() {

  pinMode(LED, OUTPUT);
  Serial.begin(9600); //para ver los valores
}

void loop() {
   digitalWrite(LED, HIGH);
   delay(1000);
   digitalWrite(LED,LOW);
   delay(1000);
}

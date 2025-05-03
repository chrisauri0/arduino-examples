int TRIG = 10;
int ECO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); //para ver los valores
}

void loop() {
  digitalWrite(TRIG, 1);
  delay(1);
  digitalWrite(TRIG, 0);
  DURACION = pulseIn(ECO, 1);
  DISTANCIA = DURACION / 58.2;
  Serial.println(DISTANCIA);
  delay(200);
  if (DISTANCIA <= 20 && DISTANCIA >= 0) {
    digitalWrite(LED, 1);
    delay(DISTANCIA * 30);
    digitalWrite(LED, 0);
  }
}

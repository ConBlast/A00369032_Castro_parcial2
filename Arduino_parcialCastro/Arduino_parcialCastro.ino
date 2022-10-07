//Spawn de leds
const int LED1 = 4;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 7;
const int LED5 = 8;

//Sensor de humedad
int TEMP;
float TEMP_PORCENT;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  TEMP = analogRead(A0);
  //TEMP_PORCENT = ((TEMP/539.00)*100);
  Serial.print("TEMPERATURE :");
  Serial.print(TEMP);
  
  tone(3, 220, 110);
  
  if (TEMP >= 0) {
  digitalWrite(LED1, HIGH);
}
  if (TEMP >= 20) {
  digitalWrite(LED2, HIGH);
}
  if (TEMP >= 144) {
  digitalWrite(LED3, HIGH);
}
  if (TEMP >= 600) {
  digitalWrite(LED4, HIGH);
}
  if (TEMP >= 800) {
  digitalWrite(LED5, HIGH);
}
  delay(2000); // Espera 1 seg encendido
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  delay(1000); // ESpera 1 seg apagado
}

int blue = 5;
int pmeter = A0;

int sensorVal = 0;
int outputVal = 0;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

sensorVal = analogRead(pmeter);

Serial.print("sensor = ");
Serial.print(sensorVal);
Serial.print("light value = ");
Serial.print(outputVal);

outputVal = map(sensorVal, 0, 1023, 0, 255);

analogWrite(blue, outputVal);

delay(2);


}

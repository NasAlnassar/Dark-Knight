#define sensor1 A0
#define sensor2 A1
#define sensor3 A2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // start the serial port
}

void loop() {
  // put your main code here, to run repeatedly:
  // 5v
  float volts1 = analogRead(sensor1)*0.0048828125;  // value from sensor * (5/1024)
  Serial.print("Sensor 1: ");
  Serial.println(volts1);
  float volts2 = analogRead(sensor2)*0.0048828125;  // value from sensor * (5/1024)
  Serial.print("Sensor 2: ");
  Serial.println(volts2);
  float volts3 = analogRead(sensor3)*0.0048828125;  // value from sensor * (5/1024)
  Serial.print("Sensor 3: ");
  Serial.println(volts3);
  delay(3000);
}

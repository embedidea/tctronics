int a;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
randomSeed(analogRead(1));
}

void loop() {
  // put your main code here, to run repeatedly:
a = random(1000,9999);
Serial.print("OTP is:");
Serial.println(a);
delay(10000);
}

int rPin = 3;
int gPin = 5;
int bPin = 6;
int potPin = A0;
int potVal;
int delt = 50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);

  while (potVal<=102) {
    potVal = analogRead(potPin);
    analogWrite(rPin,255);
    analogWrite(gPin,0);
    analogWrite(bPin,0);
    delay(delt);
  }

  while (potVal<=204 && potVal>=103) {
    potVal = analogRead(potPin);
    analogWrite(rPin,255);
    analogWrite(gPin,150);
    analogWrite(bPin,0);
    delay(delt);
  }

  while (potVal<=306 && potVal>=205) {
    potVal = analogRead(potPin);
    analogWrite(rPin,255);
    analogWrite(gPin,255);
    analogWrite(bPin,0);
    delay(delt);
  }

  while (potVal<=408 && potVal>=307) {
    potVal = analogRead(potPin);
    analogWrite(rPin,0);
    analogWrite(gPin,255);
    analogWrite(bPin,0);
    delay(delt);
  }

  while (potVal<=409 && potVal>=510) {
    potVal = analogRead(potPin);
    analogWrite(rPin,0);
    analogWrite(gPin,255);
    analogWrite(bPin,255);
    delay(delt);
  }

  while (potVal<=511 && potVal>=612) {
    potVal = analogRead(potPin);
    analogWrite(rPin,0);
    analogWrite(gPin,0);
    analogWrite(bPin,255);
    delay(delt);
  }

  while (potVal<=714 && potVal>=613) {
    potVal = analogRead(potPin);
    analogWrite(rPin,130);
    analogWrite(gPin,0);
    analogWrite(bPin,255);
    delay(delt);
  }

  while (potVal<=816 && potVal>=715) {
    potVal = analogRead(potPin);
    analogWrite(rPin,255);
    analogWrite(gPin,0);
    analogWrite(bPin,255);
    delay(delt);
  }

  while (potVal<=918 && potVal>=817) {
    potVal = analogRead(potPin);
    analogWrite(rPin,255);
    analogWrite(gPin,0);
    analogWrite(bPin,120);
    delay(delt);
  }

  while (potVal<=1023 && potVal>=919) {
    potVal = analogRead(potPin);
    analogWrite(rPin,80);
    analogWrite(gPin,0);
    analogWrite(bPin,150);
    delay(delt);
  }
}

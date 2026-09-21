const int ledPin = 3;
void setup() {
  pinMode(ledPin, OUTPUT);

} 

void loop() {
  for (int bn = 255; bn >= -255; bn--){
    int realBn = 255 - abs(bn);
    analogWrite(ledPin,realBn);
    delay(10);
  }

}

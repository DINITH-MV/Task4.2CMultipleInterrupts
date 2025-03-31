const int switchPin = 2;
const int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(switchPin);  // Read switch state

    if (switchState == HIGH) {
        digitalWrite(ledPin, HIGH);  // Turn LED ON
    } else {
        digitalWrite(ledPin, LOW);   // Turn LED OFF
    }


}

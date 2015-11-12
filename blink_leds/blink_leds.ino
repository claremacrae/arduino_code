// Wire up Arduino to breadboard, as per
// http://video.mit.edu/watch/arduino-tutorial-1-10950/

int pin = 12;
int pause_in_msecs = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delay(pause_in_msecs); // 1 second
  digitalWrite(pin, LOW);
  delay(pause_in_msecs);
}

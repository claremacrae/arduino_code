// Wire up Arduino to breadboard, as per
// http://video.mit.edu/watch/arduino-tutorial-1-10950/

int max_pin = 12;
int min_pin = 8;

int pause_in_msecs = 250;

void setup() {
  // put your setup code here, to run once:
  for ( int i = min_pin; i <= max_pin; ++i )
    pinMode(i, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for ( int i = min_pin; i <= max_pin; ++i )
  {
    digitalWrite(i, HIGH);
    delay(pause_in_msecs);
    digitalWrite(i, LOW);
    delay(pause_in_msecs);
  }
}


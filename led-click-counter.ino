int BUTTON = 2;

int RED_LED = 4;
int YELLOW_LED = 5;
int GREEN_LED = 6;

int BUTTON_PRESS;
int COUNTER = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() { 
  BUTTON_PRESS = digitalRead(BUTTON);
  
  if (BUTTON_PRESS == HIGH) {
      if (COUNTER == 0) {
      digitalWrite(RED_LED, HIGH);
      COUNTER++;

    } else if (COUNTER == 1) {
      digitalWrite(YELLOW_LED, HIGH);
      COUNTER++;

    } else if (COUNTER == 2) {
      digitalWrite(GREEN_LED, HIGH);
      COUNTER++;

    } else if (COUNTER == 3) {
      digitalWrite(RED_LED, LOW);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(GREEN_LED, LOW);
      COUNTER = 0;

    }

    delay(250);
  }
}

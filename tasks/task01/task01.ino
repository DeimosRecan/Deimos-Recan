const int LED_PIN_1 = 3;
const int LED_PIN_2 = 5;
const int LED_PIN_3 = 6;
const int LED_PIN_4 = 9;
const int LED_PIN_5 = 10;

bool LED_STATE_1 = false;
bool LED_STATE_2 = false;
bool LED_STATE_3 = false;
bool LED_STATE_4 = false;
bool LED_STATE_5 = false;

unsigned long prev_micros_1 = 0;
unsigned long prev_micros_2 = 0;
unsigned long prev_micros_3 = 0;
unsigned long prev_micros_4 = 0;
unsigned long prev_micros_5 = 0;

const long INTERVAL_1 = 50;
const long INTERVAL_2 = 100;
const long INTERVAL_3 = 500;
const long INTERVAL_4 = 1000;
const long INTERVAL_5 = 10000;

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(LED_PIN_4, OUTPUT);
  pinMode(LED_PIN_5, OUTPUT);
}

void loop() {
  unsigned long current_micros = micros();
  
  if (current_micros - prev_micros_1 >= INTERVAL_1) {
    prev_micros_1 = current_micros;
    LED_STATE_1 = !LED_STATE_1;
    digitalWrite(LED_PIN_1, LED_STATE_1);
  }
  
  if (current_micros - prev_micros_2 >= INTERVAL_2) {
    prev_micros_2 = current_micros;
    LED_STATE_2 = !LED_STATE_2;
    digitalWrite(LED_PIN_2, LED_STATE_2);
  }
  
  if (current_micros - prev_micros_3 >= INTERVAL_3) {
    prev_micros_3 = current_micros;
    LED_STATE_3 = !LED_STATE_3;
    digitalWrite(LED_PIN_3, LED_STATE_3);
  }
  
  if (current_micros - prev_micros_4 >= INTERVAL_4) {
    prev_micros_4 = current_micros;
    LED_STATE_4 = !LED_STATE_4;
    digitalWrite(LED_PIN_4, LED_STATE_4);
  }
  
  if (current_micros - prev_micros_5 >= INTERVAL_5) {
    prev_micros_5 = current_micros;
    LED_STATE_5 = !LED_STATE_5;
    digitalWrite(LED_PIN_5, LED_STATE_5);
  }
}
#include <TaskManagerIO.h>; 
const int LED_PIN_3 = 3;   
const int LED_PIN_5 = 5;   
const int LED_PIN_6 = 6;   
const int LED_PIN_9 = 9;   
const int LED_PIN_10 = 10;   
 
 
const int INTERVAL_3 = 10000;   
const int INTERVAL_5 = 1000;   
const int INTERVAL_6 = 500;   
const int INTERVAL_9 = 100;   
const int INTERVAL_10 = 50; 
 
 
int LED_STATE_3 = LOW; 
int LED_STATE_5 = LOW; 
int LED_STATE_6 = LOW; 
int LED_STATE_9 = LOW; 
int LED_STATE_10 = LOW; 
 
 
void toggleLed(int pin, int &ledState) { 
   if (ledState == LOW) 
      { 
         ledState = HIGH; 
      } 
      else  
      { 
         ledState = LOW; 
      } 
      digitalWrite(pin, ledState); 
} 
 
 
void setup() { 
  pinMode(LED_PIN_3, OUTPUT); 
  pinMode(LED_PIN_5, OUTPUT); 
  pinMode(LED_PIN_6, OUTPUT); 
  pinMode(LED_PIN_9, OUTPUT); 
  pinMode(LED_PIN_10, OUTPUT); 
 
  taskManager.scheduleFixedRate(INTERVAL_3, [] { 
    toggleLed(LED_PIN_3, LED_STATE_3); 
 }, TIME_MICROS); 
 
  taskManager.scheduleFixedRate(INTERVAL_5, [] { 
    toggleLed(LED_PIN_5, LED_STATE_5); 
 }, TIME_MICROS); 
 
  taskManager.scheduleFixedRate(INTERVAL_6, [] { 
    toggleLed(LED_PIN_6, LED_STATE_6); 
 }, TIME_MICROS); 
 
  taskManager.scheduleFixedRate(INTERVAL_9, [] { 
    toggleLed(LED_PIN_9, LED_STATE_9); 
 }, TIME_MICROS); 
 
  taskManager.scheduleFixedRate(INTERVAL_10, [] { 
    toggleLed(LED_PIN_10, LED_STATE_10); 
 }, TIME_MICROS); 
} 
 
 
void loop() { 
  taskManager.runLoop(); 
}
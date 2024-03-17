#include "BluetoothSerial.h" 

// init Class:
BluetoothSerial ESP_BT; 

// init PINs: assign any pin on ESP32
int servo_pin_1 = 4;
int servo_pin_2 = 0;
int servo_pin_3 = 2;     // On some ESP32 pin 2 is an internal LED, mine did not have one
int servo_pin_4 = 16;
int servo_pin_5 = 17;
int servo_pin_6 = 21;

// Parameters for Bluetooth interface
int incoming;

void setup() {
  Serial.begin(19200);
  ESP_BT.begin("ESP32_Control"); //Name of your Bluetooth interface -> will show up on your phone

  pinMode (servo_pin_1, OUTPUT);
  pinMode (servo_pin_2, OUTPUT);
  pinMode (servo_pin_3, OUTPUT);
  pinMode (servo_pin_4, OUTPUT);
  pinMode (servo_pin_5, OUTPUT);
  pinMode (servo_pin_6, OUTPUT);

  digitalWrite(servo_pin_1, LOW);
  digitalWrite(servo_pin_2, LOW);
  digitalWrite(servo_pin_3, LOW);
  digitalWrite(servo_pin_4, LOW);
  digitalWrite(servo_pin_5, LOW);
  digitalWrite(servo_pin_6, LOW);

}

void loop() {
  
  // -------------------- Receive Bluetooth signal ----------------------
  if (ESP_BT.available()) 
  {
    incoming = ESP_BT.read(); //Read what we receive 

    // separate button ID from button value -> button ID is 10, 20, 30, etc, value is 1 or 0
    int button = floor(incoming / 10);
    int value = incoming % 10;
    
    switch (button) {
      case 1:  
        Serial.print("Button 1:"); Serial.println(value);
        digitalWrite(servo_pin_1, value);
        break;
      case 2:  
        Serial.print("Button 2:"); Serial.println(value);
        digitalWrite(servo_pin_2, value);
        break;
      case 3:  
        Serial.print("Button 3:"); Serial.println(value);
        digitalWrite(servo_pin_3, value);
        break;
      case 4:  
        Serial.print("Button 4:"); Serial.println(value);
        digitalWrite(servo_pin_4, value);
        break;
      case 5:  
        Serial.print("Button 5:"); Serial.println(value);
        digitalWrite(servo_pin_5, value);
        break;
      case 6:  
        Serial.print("Button 6:"); Serial.println(value);
        digitalWrite(servo_pin_6, value);
        break;
    }
  }
}
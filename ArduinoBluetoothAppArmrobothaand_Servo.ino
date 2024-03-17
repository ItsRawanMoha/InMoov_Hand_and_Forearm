#include <Servo.h>

int servo_pin_1 = 8;
int servo_pin_2 = 9;
int servo_pin_3 = 10;     
int servo_pin_4 = 11;
int servo_pin_5 = 12;
int servo_pin_6 = 13;

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

int pos = 0; 

int m1_trigger = 0;
int m2_trigger = 0;
int m3_trigger = 0;
int m4_trigger = 0;
int m5_trigger = 0;
int m6_trigger = 0;

int buttonState = 0;

const int buttonPin = 7;  
const int ledPin = A1;  


void setup() {
  Serial.begin(9600); // Set the baud rate to 9600
  
  pinMode (servo_pin_1, INPUT);
  pinMode (servo_pin_2, INPUT);
  pinMode (servo_pin_3, INPUT);
  pinMode (servo_pin_4, INPUT);
  pinMode (servo_pin_5, INPUT);
  pinMode (servo_pin_6, INPUT);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  myservo1.attach(6);
  myservo2.attach(3);
  myservo3.attach(2);
  myservo4.attach(5);
  myservo5.attach(4);

  myservo1.write(90); 
  myservo2.write(90); 
  myservo3.write(90); 
  myservo4.write(90); 
  myservo5.write(90); 

}

void loop() {

  if (digitalRead(servo_pin_1) == HIGH && m1_trigger == 0) {
    Serial.println("s1_high");
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo1.write(pos);              
      delay(15);                       
    }
    m1_trigger = 1;
   delay(300); 

  }
  if (digitalRead(servo_pin_1) == LOW && m1_trigger == 1) {
    Serial.println("s1_L");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo1.write(pos);              
      delay(15);                       
    }
    m1_trigger = 0;
    delay(300); 
  }
  
  if (digitalRead(servo_pin_2) == HIGH && m2_trigger == 0) {
    Serial.println("s2_h");
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo2.write(pos);              
      delay(15);                       
    }
    m2_trigger = 1;
    delay(300); 
  } 
  if (digitalRead(servo_pin_2) == LOW && m2_trigger == 1)  {
    Serial.println("s2_l");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo2.write(pos);              
      delay(15);                       
    }
    m2_trigger = 0;
   delay(300); 
  }

  if (digitalRead(servo_pin_3) == HIGH && m3_trigger == 0) {
    Serial.println("s3_h");
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo3.write(pos);              
      delay(15);                       
    }
    m3_trigger = 1;
    delay(300); 
  } 
  if (digitalRead(servo_pin_3) == LOW && m3_trigger == 1)  {
    Serial.println("s3_l");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo3.write(pos);              
      delay(15);                       
    }
    m3_trigger = 0;
    delay(300); 
  }

  if (digitalRead(servo_pin_4) == HIGH && m4_trigger == 0) {
    Serial.println("s4_h");
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo4.write(pos);              
      delay(15);                       
    }
    m4_trigger = 1;
    delay(300); 
  } 

  if (digitalRead(servo_pin_4) == LOW && m4_trigger == 1)  {
    Serial.println("s4_l");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo4.write(pos);              
      delay(15);                       
    }
    m4_trigger = 0;
    delay(300); 
  }

  if (digitalRead(servo_pin_5) == HIGH  && m5_trigger == 0) {
    Serial.println("s5_high");
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo5.write(pos);              
      delay(15);                       
    }
    m5_trigger = 1;
    delay(300); 
  } 
  if (digitalRead(servo_pin_5) == LOW && m5_trigger == 1)  {
    Serial.println("s5_l");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo5.write(pos);              
      delay(15);                       
    }
    m5_trigger = 0;
    delay(300); 
  }

  if (digitalRead(servo_pin_6) == HIGH && m6_trigger == 0) {
    Serial.println("s6_high"); 
    for (pos = 90; pos >= 0; pos -= 1) {
      
      myservo1.write(pos); 
      myservo2.write(pos);
      myservo3.write(pos);
      myservo4.write(pos);
      myservo5.write(pos);             
      delay(15);                       
    }
    m6_trigger = 1;
    delay(300); 
  } 
  if (digitalRead(servo_pin_6) == LOW && m6_trigger == 1)  {
    Serial.println("s6_l");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo1.write(pos); 
      myservo2.write(pos);
      myservo3.write(pos);
      myservo4.write(pos);
      myservo5.write(pos);              
      delay(15);                       
    }
    m6_trigger = 0;
    delay(300); 
  }

if (digitalRead(servo_pin_1) == LOW && m1_trigger == 1) {
    Serial.println("s1_L");
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo1.write(pos);              
      delay(15);                       
    }
    m1_trigger = 0;
    delay(300); 
  }

 if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    for (pos = 90; pos >= 0; pos -= 1) {
      myservo1.write(pos); 
      myservo2.write(pos);
      
      myservo4.write(pos);
      myservo5.write(pos);             
      delay(15);                       
    }
    delay(1000);
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo5.write(pos);              
      delay(15);                       
    }
    delay(1000);
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo4.write(pos);              
      delay(15);                       
    }
    for (pos = 90; pos >= 0; pos -= 1) { 
      myservo5.write(pos);              
      delay(15);                       
    }
    delay(1000);
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo1.write(pos);  
      myservo2.write(pos);
      myservo5.write(pos);              
      delay(15);                       
    }
    digitalWrite(ledPin, LOW);
  }
}
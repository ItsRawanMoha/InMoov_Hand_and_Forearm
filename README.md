## Introduction:
Welcome to the InMoov Hand and Forearm project! This is an open-source initiative aimed at creating a functional robotic hand and forearm using 3D printing and readily available electronic components. This README provides detailed instructions on assembling the hand and forearm components and integrating them with the MIT App Inventor for controlling the robotic hand via a mobile application.

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/FinalReveal.jpeg" alt="Alt text" width="400" height="550">  <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Grip.jpeg" alt="Alt text" width="400" height="550">  

### Features:
- Fully articulated fingers and wrist
- Ability to grasp and manipulate objects
- Customizable design for individual preferences
- Open-source hardware and software

## Step 1: Getting Files from InMoov Website

I've visited the InMoov website and downloaded all the necessary files for the hand and forearm project. These files include the 3D models for printing and the assembly instructions.

### Resources:
- Official InMoov website: https://inmoov.fr/
- InMoov GitHub repository: https://github.com/InMoov/InMoov
- MIT App Inventor: https://appinventor.mit.edu/


## Step 2: Slicing Files using Creality Slicer

I opened Creality Slicer and importing the 3D models I downloaded. I adjusted the slicing settings such as layer height, infill density, and support structures to ensure optimal printing quality. Once the settings are adjusted, I sliced the models into printable layers.

## Step 3: Printing Parts on Ender 3D Printer

1. Obtain the 3D Model:
- Visit the InMoov project website or other online repositories where the 3D model files for the robot hand are available.
- Download the STL files for each component of the hand, including fingers, palm, joints, and tendon routing parts.
2. Prepare the 3D Model for Printing:
- Import the STL files into your preferred slicing software (e.g., Creality Slicer).
- Arrange the components on the build plate and orient them for optimal printing, considering factors such as support structures and print quality.
- Adjust slicing settings such as layer height, infill density, and print speed based on your printer's capabilities and the desired balance between print quality and printing time.
3. Slice the Model and Generate G-code:
- Slice the 3D model using the chosen slicing software to generate the G-code instructions required for 3D printing.
- Review the sliced model to ensure that support structures are appropriately placed and that there are no errors or inconsistencies in the slicing process.
4. Load Filament and Start Printing:
- Load the filament of your choice into your 3D printer, ensuring that it is compatible with the printer's specifications.
- Transfer the generated G-code file to the printer either via USB or SD card.
- Start the printing process and monitor the progress periodically, ensuring that the print adheres to the bed and that there are no issues such as filament jams or warping.

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p1.jpeg" alt="Alt text" width="300" height="450">  <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p2.jpeg" alt="Alt text" width="300" height="450">  <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p3.gif" alt="Alt text" width="300" height="450">  
<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p4.gif" alt="Alt text" width="300" height="450">  <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p5.gif" alt="Alt text" width="300" height="450">  <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/p6.gif" alt="Alt text" width="300" height="450">  

## Step 4: Gathering Electronics

While the parts are printing, I gathered all the necessary electronic components for the project. This includes servo motors, Arduino board, wires, breadboard, power supply, and any other sensors or modules required for the hand and forearm assembly.

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/DD.jpg)

## Step 5: Mechanical Assembly and Connection

inspecting all 3D printed robot parts to verify their completion and adherence to specifications. Ensuring the accuracy and quality of these components was essential for the overall performance and durability of the robotic system. I also connected the servo motors and other mechanical components as per the wiring diagram provided by InMoov.

1. Post-Processing and Assembly:
- Once the printing is complete, carefully remove the printed components from the build plate, taking care not to damage delicate parts.
- Perform any necessary post-processing steps such as removing support structures, sanding rough surfaces, and cleaning the parts with isopropyl alcohol.
-  Assemble the printed components according to the assembly instructions provided by the InMoov project, using screws, nuts, and other fasteners as required
-  Weld to minimize servo connection to Arduino.

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/DonePrinting.jpeg" alt="Alt text" width="300" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/ro.jpeg" alt="Alt text" width="300" height="450"> 
<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/ro.gif" alt="Alt text" width="300" height="450">
<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/S.jpeg" alt="Alt text" width="300" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/S1.jpeg" alt="Alt text" width="300" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/wD.jpg" alt="Alt text" width="300" height="450">


## Step 6: Programming the servo Motors

Now that the mechanical assembly is complete, it's time to write the code to control the servo motors using Arduino IDE. I configured the servo angles and movements to mimic hand gestures. This involves writing code to move each finger and the wrist in response to commands.

The adjustment of five motors for the InMoov robot hand. This process required careful calibration and optimization to ensure precise movements and coordination. Through hands-on experience, I deepened my understanding of motor control and the nuances involved in fine-tuning parameters such as speed and torque.

## Step 7: Testing

I tested each servo motor individually to ensure they are responding correctly to commands from the Arduino board. I also checked the mechanical assembly for any issues or constraints that may hinder movement.

I tested all 5 servos with Arduino and initialize them at 90 degrees.

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Smm.jpg" alt="Alt text" width="400" height="350"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Servo.jpeg" alt="Alt text" width="300" height="350"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/smTest.gif" alt="Alt text" width="200" height="350">

## Step 8: Fine-Tuning

After initial testing, I fine-tuned the servo motor movements and mechanical assembly as needed to improve performance and accuracy. This may involve adjusting servo angles and mechanical linkages to achieve the desired hand movements.

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/DoneParts.jpeg" alt="Alt text" width="500" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/FingersDone.jpeg" alt="Alt text" width="300" height="450"> 

<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Servo%20and%20forearm.jpeg" alt="Alt text" width="400" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/HandDoneOnly.jpeg" alt="Alt text" width="400" height="450"> 

## Step 9: Integrating with MIT App Inventor

With the hardware functioning correctly, I designed and developed a mobile application using MIT App Inventor to remotely control the hand and forearm project. I'm implementing communication protocols such as Bluetooth or Wi-Fi to send commands for hand movements from the mobile app to the Arduino board.

I embarked on developing an application using MIT App Inventor to control the movement of InMoov hand robot fingers. This involved designing intuitive user interfaces and implementing functionality to send commands to the robot hand based on user inputs. Throughout the week, I encountered challenges such as compatibility issues and network configurations, which provided valuable learning opportunities in troubleshooting and problem-solving.

### - Create MIT App Inventor Project:
Log in to your MIT App Inventor account.
Create a new project and start coding.

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/MITcode.png)

### - Design User Interface:
Design the user interface of your mobile application. Include buttons or sliders for controlling the robotic hand movements.

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/MITAppIn.png)

MIT app inventor where the user can control each finger alone by pressing the button, or it can grip by using all fingers. Also, we added a pushbutton with an led connected to it, when the user press it, it says ILY (I Love You) in sign language.

### - Connect to Arduino:
Add the Bluetooth Client component to your project.
Configure the Bluetooth Client to connect to the Bluetooth module on your Arduino.

### - Send Commands to Arduino:
Implement event handlers for the user interface components (e.g., buttons).
When a user interacts with a component, send the corresponding command to the Arduino via Bluetooth.

ESP32 code

```
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
```

### - Arduino Code:
Modify the Arduino sketch to interpret commands received from the MIT App Inventor.
Implement logic to control the servo motors based on the received commands.

Arduino code

```
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
```

### - Testing:
Test the integration by running the MIT App Inventor application on your mobile device and checking if the commands are successfully transmitted to the Arduino.

## Step 10: Final Testing and Calibration

I performed comprehensive testing of the entire system, including mechanical movement, electronic control, and mobile app integration. I'm calibrating servo motors and adjusting code parameters for optimal performance.

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/TestingHandC.gif) ![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Servo%2520and%2520forearmD.gif)
![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/TestingD.gif) ![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/TestingD1.gif) 
<img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/base2.jpeg" alt="Alt text" width="500" height="450"> <img src="https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/base.jpeg" alt="Alt text" width="500" height="450">

## Step 11: Documentation 

Finally, I documented the entire process, including assembly instructions, code snippets, wiring diagrams, and troubleshooting tips. I prepared a demonstration to showcase the functionality of the InMoov Hand and Forearm project.

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/FinalD.gif)

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/finalHand.gif) ![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/ButtonShowcase.gif)

![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/Grip.gif) ![screen-gif](https://github.com/ItsRawanMoha/InMoov_Hand_and_Forearm/blob/main/GripCloser.gif)

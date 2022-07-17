#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial BTSerial (2,3);

#define echoPin 2 
#define trigPin 3 


long duration; 
int distance; 

char value;
int left_a = 4;
int left_b = 5;
int right_a = 6;
int right_b = 7;

Servo myservo;


void setup() {
  Serial.begin(9600);
  Serial.println("Enter AT Commands");
  BTSerial.begin(9600);
  myservo.attach(9);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
}

void loop() {
  
  
  if(BTSerial.available()){
    value = BTSerial.read();
    Serial.println(value);
    //Serial.write(BTSerial.read());
    if(value == 'X'){
      if(distance() <
    }else if(value == '0'){
      digitalWrite(led, LOW);
      delay(1000);
    }
  }
//  if(Serial.available()){
//    BTSerial.write(Serial.read());
//    //BTSerial.write(fake_sensor);
//    
//  }

}
int distance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}
void forward(){
  
}
void backwards(){
  
}
void left(){
  
}
void right(){
  
}
void forward_left(){
  
}
void forward_right(){
  
}
void backward_left(){
  
}
void backward_right(){
  
}

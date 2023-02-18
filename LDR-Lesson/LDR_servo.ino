// Adding Servo library into the code
#include <Servo.h>

// Creating an instance of Servo
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT); // Setting up pin A0 to recieve inputs
  myservo.attach(9); // Telling the servo to list to input from pin 9
  Serial.begin(9600); // We are using a baud size of 9600

}

void loop() {
  // put your main code here, to run repeatedly:
  int LDR = analogRead(A0); // Reading the value of recieved from the A0 
  Serial.println(LDR);  // Print to the Serial Monitor

 if(LDR > 400){
    myservo.write(90);
  }else{
    myservo.write(0);    
  }
  
  
}

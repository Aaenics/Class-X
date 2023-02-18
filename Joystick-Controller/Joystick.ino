// Definig variables for pin being used
#define joyX A0 
#define joyY A1
#define switchpin 2

// Defining variables to register change in both axis
int xValue;
int yValue;

void setup() {
  // Basic setup
  pinMode(switchpin,INPUT);
  digitalWrite(switchpin,HIGH);
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:

  // Reading values from the control 
  xValue = analogRead(joyX);
  yValue = analogRead(joyY);
 
  //print the values with to plot or view
  Serial.print(xValue);
  Serial.print("\t");
  Serial.println(yValue);
  Serial.print("\t");
  Serial.print(digitalRead(switchpin));
  Serial.print("\t");
  

}
void setup() {
  // put your setup code here, to run once:
  
  pinMode(A0,INPUT); // We are using AnalogPin Zero and setting it up to recieve input
  Serial.begin(9600); // We are using a baud size of 9600
}

void loop() {
  // put your main code here, to run repeatedly:

  int LDR = analogRead(A0); // Storing the value of values in a variable LDR
  Serial.println(LDR);
}

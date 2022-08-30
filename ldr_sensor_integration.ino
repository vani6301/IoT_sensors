void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(A0,INPUT);
   pinMode(6,OUTPUT);
   
   
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.println(val);
  if(val<700)
  {
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }
}

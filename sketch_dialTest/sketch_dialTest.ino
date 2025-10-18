void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
  Serial.print("test");
}

void loop() {
  //put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    Serial.print("two");
  }  
  if(digitalRead(4) == HIGH){
    Serial.print("four");
  }
}
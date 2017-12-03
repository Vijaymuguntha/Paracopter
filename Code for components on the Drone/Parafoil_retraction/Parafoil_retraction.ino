
byte SLP = 2;
byte MS1 = 3;
byte PFD = 4;
byte RST = 5;
byte MS2 = 6;
byte ENABLE = 7;
byte STEP = 11;
byte DIR = 12;

void setup() {
  // put your setup code here, to run once:

  pinMode(SLP,OUTPUT);
  pinMode(MS1,OUTPUT);
  pinMode(PFD,OUTPUT);
  pinMode(RST,OUTPUT);
  pinMode(MS2,OUTPUT);
  pinMode(ENABLE,OUTPUT);
  pinMode(STEP,OUTPUT);
  pinMode(DIR,OUTPUT);

 digitalWrite(SLP,HIGH);
 digitalWrite(MS1,LOW);
 digitalWrite(PFD,HIGH);
 digitalWrite(RST,HIGH);
 digitalWrite(MS2,LOW);
 digitalWrite(ENABLE,LOW);
 digitalWrite(DIR,HIGH);
 
}

void loop() {
  // put your main code here, to run repeatedly:

   digitalWrite(DIR,HIGH);

  for(int i=0; i<16*10; i++){
  digitalWrite(STEP,LOW);
  delay(8);
  digitalWrite(STEP,HIGH);
  delay(8);}

  digitalWrite(DIR,LOW);

  for(int i=0; i<16*10; i++){
  digitalWrite(STEP,LOW);
  delay(8);
  digitalWrite(STEP,HIGH);
  delay(8);}

}

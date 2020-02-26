int button = 12;
int p;
int a =0;
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
 p = digitalRead(button);
 if(p==HIGH){
  delay(300);
  a = !a;
  }
  if(a==0){
    digitalWrite(8,0);
    digitalWrite(10,1);
    delay(35);
    digitalWrite(8,1);
    digitalWrite(10,0);
    delay(35);
    }
    if(a==1){
    digitalWrite(8,1);
    digitalWrite(10,0);
    delay(200);
    digitalWrite(8,0);
    digitalWrite(10,1);
    delay(200);
    } 
  

  
}

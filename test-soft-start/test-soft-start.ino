int s1 = 2;
int s2 = 3;
int s3 = 6;
int s4 = 7;
int s5 = 8;
int s6 = 9;
int btn = 20;
int pot = A1;
int dl = 0;
int on = 0;
int i2;
int i3;
int i4;
int t1;
int t2;
int t3;
int t4;

void (*rst) () = 0;

void start()
{
dl =  (  (analogRead(pot))/17.06) ;
for(int i = 1 ; i <= dl; i++){  
for(int ti = 1; ti <= 2; ti++){
clockwise(i);
}
}
on = 1;
}

void stop()
{
dl =  (  (analogRead(pot))/17.06) ;
for(int i = dl; i >= 1; i--){  
for(int ti = 1; ti <= 2; ti++){
clockwise(i);
}
}
on = 0;
reset();
delay(5);
rst();
}

void botao(){
  static unsigned long abc;
  if((millis() - abc) > 100){
    abc = millis();
if(on == 0){
start();
}
else if(on == 1){
 stop();
}
}
}

void reset()
{
  digitalWrite(s1, LOW); 
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  digitalWrite(s6, LOW); 
}

  void s000()
{
  digitalWrite(s1, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s5, LOW);
  delayMicroseconds(1); 
  digitalWrite(s2, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s6, HIGH); 
}

 void s111()
 {
  digitalWrite(s2, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(1);
  digitalWrite(s1, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s5, HIGH);
}

void s100()
{ 
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s5, LOW);
  delayMicroseconds(1);  
  digitalWrite(s1, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s6, HIGH);
}
  
void s110()
{
  digitalWrite(s2, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  delayMicroseconds(1);
  digitalWrite(s1, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s6, HIGH);
}
  
void s010()
{
  digitalWrite(s1, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  delayMicroseconds(1);
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s6, HIGH);
}
  
void s011()
{
  digitalWrite(s1, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(1);
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s5, HIGH);
}
  
void s001()
{
  digitalWrite(s1, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(1);
  digitalWrite(s2, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s5, HIGH);
}
  
void s101()
{
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(1);
  digitalWrite(s1, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s5, HIGH);
}

void tim2(int b2){
    int c = b2;
    switch (c) {
    case (1):
  
       s111();
      break;
    case (2):
 
       s000();
      break;
      
    }
  }

void tim(int b){
    int c = b;
    switch (c) {
    case (1):
     s001();
     break;

    case (2):
      s011();
      break;

    case (3):
      s010();
      break;

    case (4):
      s110();
      break;

    case (5):
      s100();
      break;

    case (6):
      s101();
      break;
    }
  }


  void clockwise(int freq){
  int tn = (1600/(160* freq));
  int vc = (60 - freq);

   for (int i = 1; i <= 6; i++) {

    if(i2 < 7){i2 = i + 1;}
    if(i2 >= 7 ){i2 = 1;}

   
    for (int i3 = 1; i3 <= tn; i3++){
    float port = (i3/tn);
    float port2 =(1-port);

    t1 = (10 + ((80 * port2)-vc));
    t2 = (10 + ((20 * port2)+vc));
    t3 = (10 + ((80 * port)-vc)); 
    t4 =  (10 + ((20 * port)+vc));    
    tim(i);
    delayMicroseconds(t1);
    tim2(i3);
    delayMicroseconds(t2);
    tim(i2);
    delayMicroseconds(t3);
    tim2(i4);
    delayMicroseconds(t4);

  
      }
      if(i4 == 2)
      {i3 = 2;
      i4 =1;}else{i3 = 1;
      i4 = 2;}
    }

  }
void setup(){
 pinMode(rst ,OUTPUT);
 digitalWrite(rst, HIGH);
 pinMode(s1 ,OUTPUT);
 pinMode(s2, OUTPUT);
 pinMode(s3, OUTPUT);
 pinMode(s4, OUTPUT);
 pinMode(s5, OUTPUT);
 pinMode(s6, OUTPUT);
 pinMode(btn, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(btn), botao, RISING);
}

void loop(){
if(on == 1){
dl =  (( analogRead(pot))/17.06) ;
for(int iloop = 0; iloop <= 5; iloop++){
  clockwise(dl);
 
}

}
dl =  (( analogRead(pot))/17.06) ;
 
}
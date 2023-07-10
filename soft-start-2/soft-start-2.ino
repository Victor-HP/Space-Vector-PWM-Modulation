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
  if((millis() - abc) > 200){
    abc = millis();
if(on == 0){
start();
}
else if(on == 1){
 stop();
}
}
}
void sector1()
{
  s000();
  delayMicroseconds(t2);
  s100();
  delayMicroseconds(t1);
  s110();
  delayMicroseconds(t3);
  s111();
  delayMicroseconds(t4);
  s110();
  delayMicroseconds(t3);
  s100();
  delayMicroseconds(t1);
  s000();
  delayMicroseconds(t2);
}
void sector2()
{
  s000();
  delayMicroseconds(t4);
  s010();
  delayMicroseconds(t3);
  s110();
  delayMicroseconds(t1);
  s111();
  delayMicroseconds(t2);
  s110();
  delayMicroseconds(t1);
  s010();
  delayMicroseconds(t3);
  s000();
  delayMicroseconds(t4);
}
void sector3()
{
  s000();
  delayMicroseconds(t2);
  s010();
  delayMicroseconds(t1);
  s011();
  delayMicroseconds(t3);
  s111();
  delayMicroseconds(t4);
  s011();
  delayMicroseconds(t3);
  s010();
  delayMicroseconds(t1);
  s000();
  delayMicroseconds(t2);
}
void sector4()
{
  s000();
  delayMicroseconds(t4);
  s001();
  delayMicroseconds(t3);
  s011();
  delayMicroseconds(t1);
  s111();
  delayMicroseconds(t2);
  s011();
  delayMicroseconds(t1);
  s001();
  delayMicroseconds(t3);
  s000();
  delayMicroseconds(t4);
}
void sector5()
{
  s000();
  delayMicroseconds(t2);
  s001();
  delayMicroseconds(t1);
  s101();
  delayMicroseconds(t3);
  s111();
  delayMicroseconds(t4);
  s101();
  delayMicroseconds(t3);
  s001();
  delayMicroseconds(t1);
  s000();
  delayMicroseconds(t2);
}
void sector6()
{
  s000();
  delayMicroseconds(t4);
  s100();
  delayMicroseconds(t3);
  s101();
  delayMicroseconds(t1);
  s111();
  delayMicroseconds(t2);
  s101();
  delayMicroseconds(t1);
  s100();
  delayMicroseconds(t3);
  s000();
  delayMicroseconds(t4);
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



void tim(int b){
    int c = b;
    switch (c) {
    case (1):
     sector1();
     break;

    case (2):
      sector2();
      break;

    case (3):
      sector3();
      break;

    case (4):
      sector4();
      break;

    case (5):
      sector5();
      break;

    case (6):
      sector6();
      break;
    }
  }


  void clockwise(int freq){
  int tf = (61 - freq);

    for (int i = 1; i <= 6; i++) {

    for (int i3 = 1; i3 <= 20; i3++){
    float port = (i3/20);
    float port2 = (1-port);
    t1 = ((97 * port2) * freq);
    t2 = ((40 * port2) * tf);
    t3 = ((97 * port) * freq);
    t4 = ((40 * port) * tf);   
    tim(i);
      }
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
  Serial.println(dl);
}

}
dl =  (( analogRead(pot))/17.06) ;
 Serial.println(dl);
}
int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 6;
int s6 = 7;
int tm = 0;
int mn = 100;
int pot = A0;
int pot2 = A1;
int hz = 0;
int dl = 7;
long times = 166;
int lp;
void reset()
{
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(5);
  }

void s100()
{
  digitalWrite(s1, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s6, HIGH);
  
  }

  
void s110()
{
  digitalWrite(s1, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s6, HIGH);
  
  }

  
void s010()
{
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s6, HIGH);
  
  }

  
void s011()
{
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  digitalWrite(s5, HIGH);
  
  }

  
void s001()
{
  digitalWrite(s2, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s5, HIGH);
  
  }
  
void s101()
{
  digitalWrite(s1, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s5, HIGH);
  
  }


void setup() {

 pinMode(s1 ,OUTPUT);
 pinMode(s2, OUTPUT);
 pinMode(s3, OUTPUT);
 pinMode(s4, OUTPUT);
 pinMode(s5, OUTPUT);
 pinMode(s6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
dl = mn + analogRead(pot)*2 ;
lp =7;

  //lp1
  for (int i = 1; i <= lp; i++) {
   reset();
   s100();
    delayMicroseconds(dl);
  }
  //lp2
    for (int i = 1; i <= lp; i++) {
   reset();
   s110();
    delayMicroseconds(dl);
  }
  //lp3
  for (int i = 1; i <= lp; i++) {
   reset();
   s010();
    delayMicroseconds(dl);
  }
  //lp4
  for (int i = 1; i <= lp; i++) {
   reset();
   s011();
    delayMicroseconds(dl);
  }
  //lp5
  for (int i = 1; i <= lp; i++) {
   reset();
   s001();
    delayMicroseconds(dl);
  }
  //lp6
  for (int i = 1; i <= lp; i++) {
   reset();
   s101();
    delayMicroseconds(dl);
  }   
}

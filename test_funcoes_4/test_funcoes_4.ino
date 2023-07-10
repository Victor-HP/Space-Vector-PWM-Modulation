int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 6;
int s6 = 7;
int mn = 250;
int pot1 = A0;
int pot2 = A1;
int freq = 60;
int clock = 0;
int clock2;
int passo = 150;
int i =1;
void reset(){
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  digitalWrite(s6, LOW);
 
  }
  void s000(){
    
  digitalWrite(s2, HIGH);
  digitalWrite(s4, HIGH);
  digitalWrite(s6, HIGH);
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


  void tim(int b){
    int c = b;
    switch (c) { 
    case (1):
  
       s100();
      break;
    case (2):
 
       s110();
      break;
    case (3):

       s010();
      break;
    case (4):
  
       s011();
      break;
    case (5):
   
       s001();
      break;
    case (6):
 
       s101();
      break;
  }

  }
  void clockwise(int freq){
  clock = clock + 1;
  clock2 = passo/freq;

   if(clock >= clock2)
   { i++;
     clock = 0;
if(i > 6)
   {
     i=1;  
   }    
   }
   reset();
     delayMicroseconds(1);
       s000();
       delayMicroseconds(10);
       reset();
     delayMicroseconds(1);
   tim(i);
  }
  
void setup(){

 pinMode(s1 ,OUTPUT);
 pinMode(s2, OUTPUT);
 pinMode(s3, OUTPUT);
 pinMode(s4, OUTPUT);
 pinMode(s5, OUTPUT);
 pinMode(s6, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  freq =  analogRead(pot1)/17;
clockwise(freq);
delayMicroseconds(100000/100);
}
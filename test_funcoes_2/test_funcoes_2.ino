int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 6;
int s6 = 7;
int mn = 1;
int pot = A0;
int dl = 0;
int lp;
int i2;
int w = 7;
int fo = 1;
void reset(){
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  digitalWrite(s4, LOW);
  digitalWrite(s5, LOW);
  digitalWrite(s6, LOW);
  delayMicroseconds(1);
 
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


  void clockwise(int t){
  int a = t;

  int lp = 6;
   for (int i = 1; i <= lp; i++) {
   
    if(i2 < 7){i2 = i + 1;}
    if(i2 >= 7 ){i2 = 1;}
   fo = 1;
    for (int i3 = 1; i3 <= 5; i3++){   
   int f2 = a/4;
   int fat = 5 - i3;
   int fat2 = -1 + i3;
   int t1 = f2 * fat;
   int t2 = f2 * fat2;
   if(fo == 1){
 for (int i4 = 1; i4 <= w; i4++){
     reset();
     s000();
     reset();
   tim(i);
    delayMicroseconds(t1);
    
 }
   }
 fo = 0;
 reset();
 s000();
   reset();
   tim(i);
    delayMicroseconds(t1);
    reset();
   tim(i2);
    delayMicroseconds(t2);
  
      }
    }
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
dl = mn + analogRead(pot);

clockwise(dl);
}

int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 6;
int s6 = 7;
int tm = 100; 
int pm = 1;


void setup() {

 pinMode(s1 ,OUTPUT);
 pinMode(s2, OUTPUT);
 pinMode(s3, OUTPUT);
 pinMode(s4, OUTPUT);
 pinMode(s5, OUTPUT);
 pinMode(s6, OUTPUT);
}

void loop() {


  

     //SECTOR 1

 
 
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);



       //SECTOR 2



digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);



      // SECTOR 3





digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);




        // SECTOR 4




digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);



              //SECTOR 5




digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);




         // SECTOR 6




digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s6, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);

digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);

digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);

digitalWrite(s5, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);

digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
              
}

int s1 = 2;
int s2 = 3;
int s3 = 4;
int s4 = 5;
int s5 = 6;
int s6 = 7;
int tm = 0; 
int pm = 0;
int mn = 100;
int pot = A0;
int pot2 = A1;
int dad = 0;


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
tm = mn + analogRead(pot);
dad = analogRead(pot2)*10;

  

                       //SECTOR 1

      
delayMicroseconds(dad);

//1 
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);




                        //SECTOR 2


delayMicroseconds(dad);

//1
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s5, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);





                        // SECTOR 3
      

delayMicroseconds(dad);

//1
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s4, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s6, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s3, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);

                       // SECTOR 4


delayMicroseconds(dad);

//1
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s2, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s2, LOW);
digitalWrite(s3, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s1, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s3, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);



                        //SECTOR 5


delayMicroseconds(dad);

//1
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s6, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s2, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s4, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s1, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s5, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s5, LOW);
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);



                        // SECTOR 6


delayMicroseconds(dad);

//1
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//2
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//3
digitalWrite(s6, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//4
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//5
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//6
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//7
digitalWrite(s5, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//8
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//9
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//10
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//11
digitalWrite(s6, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//12
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//13
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//14
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//15
digitalWrite(s5, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//16
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);
//17
digitalWrite(s2, HIGH);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//18
digitalWrite(s2, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s6, HIGH);
delayMicroseconds(pm);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//19
digitalWrite(s6, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s5, HIGH);
delayMicroseconds(tm);
//20
digitalWrite(s4, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s3, HIGH);
delayMicroseconds(tm);
//21
digitalWrite(s5, HIGH);
digitalWrite(s3, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(tm);
//22
digitalWrite(s3, LOW);
digitalWrite(s5, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s4, HIGH);
delayMicroseconds(tm);
//23
digitalWrite(s5, LOW);
digitalWrite(s4, HIGH);
digitalWrite(s1, HIGH);
delayMicroseconds(pm);
digitalWrite(s6, HIGH);
delayMicroseconds(tm);
//24
digitalWrite(s1, LOW);
digitalWrite(s6, HIGH);
digitalWrite(s4, HIGH);
delayMicroseconds(pm);
digitalWrite(s2, HIGH);
delayMicroseconds(tm);


              
}

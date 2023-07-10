int keys[6] = {2, 3, 6, 7, 8, 9};
bool state = false;
int button = 20;
int pot = A1;
int dl = 0;
int time1;
int time2;
float angc[] = {0.0785, 0.2334, 0.3827, 0.5225, 0.6494, 0.7604, 0.8526, 0.9239, 0.9724, 0.9969,
                0.9877, 0.9511, 0.9239, 0.8526, 0.7604, 0.6494, 0.5225, 0.3827, 0.2334, 0.0785};

int setkeys[6][6] = {{0, 2, 5, 1, 3, 4}, {0, 3, 5, 1, 2, 4}, {0, 3, 4, 1, 2, 5}, {1, 3, 4, 0, 2, 5}, {1, 2, 4, 0, 3, 5}, {1, 2, 5, 0, 3, 4}};

void (*rst)() = 0;

int frequency()
{
  return (analogRead(pot) / 17.06);
}

void start()
{
  int i2 = frequency();
  for (int i = 1; i <= i2; i++)
  {
    for (int t = 1; t <= 2; t++)
    {
      clockwise(i);
    }
  }
  state = 1;
}

void stop()
{
  int i2 = frequency();
  for (int i = i2; i >= 1; i--)
  {
    for (int ti = 1; ti <= 2; ti++)
    {
      clockwise(i);
    }
  }
  state = 0;
  reset();
  delay(5);
  rst();
}

void botao()
{
  static unsigned long abc;
  if ((millis() - abc) > 100)
  {
    abc = millis();

    state == 0 ? start() : stop();
  }
}

void reset()
{
  digitalWrite(keys[0], LOW);
  digitalWrite(keys[1], LOW);
  digitalWrite(keys[2], LOW);
  digitalWrite(keys[3], LOW);
  digitalWrite(keys[4], LOW);
  digitalWrite(keys[5], LOW);
}

void clockwise(int freq)
{

  float time = 20000 / freq;
  float incrementVoltage = (0.1 + (freq * 0.015));
  for (int i = 0,  i2; i <= 5; i++)
  {
    i2 = i<5 ? i+1: 0;

    time = (time * incrementVoltage);

    for (int i3 = 0, i4= 19; i3 < 20; i3++, i4--)
    {
      time1 = ((time * angc[i3]));
      time2 = ((time * angc[i3]));

      digitalWrite(keys[setkeys[i][0]], LOW);
      digitalWrite(keys[setkeys[i][1]], LOW);
      digitalWrite(keys[setkeys[i][2]], LOW);
      delayMicroseconds(1);
      digitalWrite(keys[setkeys[i][3]], HIGH);
      digitalWrite(keys[setkeys[i][4]], HIGH);
      digitalWrite(keys[setkeys[i][5]], HIGH);
      delayMicroseconds(time1);
      digitalWrite(keys[setkeys[i2][0]], LOW);
      digitalWrite(keys[setkeys[i2][1]], LOW);
      digitalWrite(keys[setkeys[i2][2]], LOW);
      delayMicroseconds(1);
      digitalWrite(keys[setkeys[i2][3]], HIGH);
      digitalWrite(keys[setkeys[i2][4]], HIGH);
      digitalWrite(keys[setkeys[i2][5]], HIGH);
      delayMicroseconds(time2);
    }
  }
}
void setup()
{
  pinMode(rst, OUTPUT);
  digitalWrite(rst, HIGH);
  pinMode(keys[0], OUTPUT);
  pinMode(keys[1], OUTPUT);
  pinMode(keys[2], OUTPUT);
  pinMode(keys[3], OUTPUT);
  pinMode(keys[4], OUTPUT);
  pinMode(keys[5], OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(button), botao, RISING);
}

void loop()
{
  if (state == true)
  {
    dl = frequency();
    for (int iloop = 0; iloop <= 5; iloop++)
    {
      clockwise(dl);
    }
  }
  dl = frequency();
}
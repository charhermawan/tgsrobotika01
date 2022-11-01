
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int led = 4;
int b = 9;
int a = 10;
int f = 11;
int g = 12;
int dp = 5;
int c = 6;
int d = 7;
int e = 8;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  Serial.begin(9600);
  digitalWrite(dp, LOW);
}

void loop()
{
  digitalWrite(led, HIGH);
  Serial.println("LED NYALA 0,8 DETIK");
  
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  
  delay(800);
  digitalWrite(led, LOW);
  Serial.println("LED MATI 0,5 DETIK");

    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
   
  delay(500);

}

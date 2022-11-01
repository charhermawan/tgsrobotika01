
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int led = 3;
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
  Serial.println("LED NYALA 0,45 DETIK");
  
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  
  delay(450);
  digitalWrite(led, LOW);
  Serial.println("LED MATI 1,2 DETIK");

    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
   
  delay(1200);

}

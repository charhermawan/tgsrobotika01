
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int led = 4;
int cs = 11;

void setup()
{
	pinMode(led, OUTPUT);
	pinMode(cs, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	digitalWrite(led, HIGH);
	Serial.println("LED NYALA 0,8 DETIK");
	digitalWrite(cs, LOW);
	delay(800);
	digitalWrite(led, LOW);
	Serial.println("LED MATI 0,5 DETIK");
	delay(500);

}


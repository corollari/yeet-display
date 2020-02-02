// Define pin connections & motor's steps per revolution
const int dirPin = 6;
const int stepPin = 3;
const int enablePin = 8;
const int stepsPerRevolution = 600;
int k = 400;

void setup()
{
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, LOW);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  digitalWrite(dirPin, HIGH);
}
void loop()
{
  if(k>280){
	  for(int x = 0; x < stepsPerRevolution; x++)
	  {
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(k);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(k);
	  }
	  k-=4;
  } else {
	digitalWrite(stepPin, HIGH);
    delayMicroseconds(k);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(k);
  }
}

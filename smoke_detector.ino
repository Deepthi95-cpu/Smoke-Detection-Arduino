//Topic: Smoke Detection
//Name(Rollno): Deepthi Mushini (30)
//Branch: ENC   Sem: 5
// C++ code
const int smokeRef = 50;
int smoke = 0;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  smoke = map(((analogRead(A0)-20)*3.04),0,1023,-50,125);
  Serial.print("Smoke value: ");
  Serial.println(smoke);
  
  if(smokeRef<=smoke)
  {
  digitalWrite(7, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  } 
  else
  {
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(11, LOW);
  }    
}
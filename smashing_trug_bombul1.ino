// C++ code
//

int trigPIn=10;
int echoPin=9;
long time;
long distance;

void setup()
  //this loop repeats only once
{
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
  //this loop repeats continuously
{
  digitalWrite(10, LOW);
  delayMicroseconds(2); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delayMicroseconds(10); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
   
  //calculating the distance
  time=pulseIn(9,HIGH);
  distance=time*0.034/2;
  
  //printing the distance
  Serial.print("Distance:");
  Serial.print(distance);

  
}
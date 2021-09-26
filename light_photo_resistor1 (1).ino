// C++ code
//
int photosensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(9, OUTPUT);
}

void loop()
{
  photosensor = analogRead(A0);
  Serial.println(photosensor);
  analogWrite(9, map(photosensor, 0, 1023, 0, 255));
  delay(100); // Wait for 100 millisecond(s)
}
int motionDetected = LOW;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int value;
  value = digitalRead(7);
  Serial.println(value);
  if(value == HIGH)
  {
    motionDetected = HIGH;
    digitalWrite(13,HIGH);
    Serial.println("Motion Detected.");
  }
  else
  {
    motionDetected = LOW;
    digitalWrite(13,LOW);
    Serial.println("No Motion Detected");
  }
}

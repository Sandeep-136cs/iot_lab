// C++ code
//
void setup()
{
  int led[]={2,3,4,5,6};
  for(int i=0;i<=5;i++){
    pinMode(led[i],OUTPUT);
}
}
void loop()
{
  for(int i=0;i<=5;i++){
  digitalWrite(i,HIGH);
  delay(100);//ait for 1000 millisecond(s)
  digitalWrite(i,LOW);
  delay(100);
  }
}

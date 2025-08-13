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
  for(int i=1;i<=5;i++){
    if(i%2!=0){
  digitalWrite(i,HIGH);
  delay(250);
  digitalWrite(i,LOW);
  delay(250);
  }
  }
}

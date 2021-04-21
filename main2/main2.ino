int Amber =3;
int Green =1;
int Red=2;

void setup()
{
  
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  pinMode(AMBER,OUTPUT);
  
}
    
void loop(){
  int j=1;
       while(j<=5)
      
     {
      digitalWrite(Red,HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
     delay(1000);
      j++;
       }
      int k=1;
      while( k<=3)    
      {
         
      digitalWrite(GREEN,HIGH);
      delay(1000);
      digitalWrite(GREEN,LOW);
          delay(1000); k++;
      }
       int C=1;
       while( C<=3)
      {
            
      digitalWrite(Amber,HIGH);
      delay(1000);
      digitalWrite(Amber,LOW);
      delay(1000);
      C++;}  
  
      }    

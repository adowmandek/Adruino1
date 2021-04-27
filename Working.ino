 #include <Servo.h>


int red = 1;
int blue = 2;
int green=3;

 
Servo myservo;
int potPin=0;
int val;
 



void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  myservo.attach(10);
  
}

void loop()
{
  val=analogRead(potPin);
  val= map(val,0,1023,0,180);
    myservo.write(val);

   
  digitalWrite(red, HIGH);
  delay(1000); 
  digitalWrite(red, LOW);
  delay(1000); 


digitalWrite(blue, HIGH);
  delay(1000); 
 digitalWrite(blue, LOW);
delay(1000); 


 digitalWrite(green, HIGH);
  delay(1000); 
  digitalWrite(green, LOW);
  delay(1000);
  delay(15);
    
for(val=0; val< 60; val +=1)
{
 myservo.write(val);
delay(15);
}

  
for(val=0; val< 120; val +=1) 
  {
myservo.write(val);
delay(15);
}

for(val=0; val< 180; val +=1) 
  {
myservo.write(val);
delay(15);
}
}



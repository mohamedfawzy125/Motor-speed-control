// C++ code
char trigPin =10 ;
char echoPin =9 ;
int duration =0 ;
int distance =0;
void setup()
{  pinMode(11, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT); 

 
}

void loop()
{
  digitalWrite(trigPin,0) ;
  delayMicroseconds(2);
   digitalWrite(trigPin,1) ;
  delayMicroseconds(10);
  digitalWrite(trigPin,0) ;
 duration = pulseIn(echoPin ,HIGH);
 distance = duration*.0343/2 ;
  if (  distance<=200) {
    analogWrite(11,-distance);
  }
  
  else if ( distance>200 ){
    
     
    analogWrite(11,0);
  }
    
    
  
    

}
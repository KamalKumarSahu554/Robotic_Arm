
char Incoming_value = 0;                //Variable for storing Incoming_value
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud rate) for serial data transmission
  pinMode(13, OUTPUT);        //Sets digital pin 13 as output pin
}
void loop()
{ 
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      //Read the incoming data and store it into variable Incoming_value
    
    if(Incoming_value == 'A')            //Checks whether value of Incoming_value is equal to A
      digitalWrite(13, HIGH);  
    else if(Incoming_value == 'B')
      digitalWrite(13, LOW);   
  }                            
 
}                 

#include<SoftwareSerial.h>
SoftwareSerial Communication(10,11);// Rx,Tx
int LED1 = 13;
int LED2 = 12;
void setup() {
  // put your setup code here, to run once:
  Communication.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Communication.available()>0) // check for incoming data
  {
    int data = Communication.read(); //Read Data
    if(data==1)
      digitalWrite(LED1,HIGH); //Turn ON LED1
    else if(data==2)
      digitalWrite(LED1,LOW);  //Turn OFF LED1
    else if(data==3)
      digitalWrite(LED2,HIGH); //Turn ON LED2
    else if(data==4)
      digitalWrite(LED2,LOW);  //Turn OFF LED2
  }
  delay(100);
}

/**
 * Rodrigo Eduardo Delgadillo Rojas
 * 02/11/23
 * Interface with Arduino
 * Module 2: Ligh an LED
 * Intructions:
 * Build a circuit that lights an LED when it is sufficently dark in a room.
 * Demonstrate the circuit by covering the photoresistor to simulate darkness.
**/

//Let´s define the constants for this program
const int LED = 13;
const int photoresistor = A0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(photoresistor, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (analogRead(photoresistor) <= 15)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED,LOW);
  }
}

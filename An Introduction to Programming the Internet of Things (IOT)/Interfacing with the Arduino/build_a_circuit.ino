/**
 * Rodrigo Eduardo Delgadillo Rojas
 * 13/03/23
 * Interfaceing woth the Arduino
 * Module 1: Build a circuit
 * 
 * Instructions:
 * Build a circuit that contains two push buttons, an LED, and any other basic components you think you need. 
 * The LED should turn on when either the first button or the second button is pressed. 
 * Only use your Arduino for power and ground.
 */

// Define the digital pins we are going to use for the program
int led = 6;
int push_button_1 = 2;
int push_button_2 = 4;

// Define the state of the push button
int button_state_1 = 0;
int button_state_2 = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(push_button_1, INPUT);
  pinMode(push_button_2, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  
  button_state_1 = digitalRead(push_button_1);
  button_state_2 = digitalRead(push_button_2);

  if(button_state_1 == HIGH || button_state_2 == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}

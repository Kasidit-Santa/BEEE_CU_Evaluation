int ledPinRed = 12;  
int ledPinGreen = 13; 
int buttonPin1 = 11; 
int buttonPin2 = 10;   
int buttonState1 = 0;  
int buttonState2 = 0;



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

// the loop function runs over and over again forever
void loop() {
int a=0,b=0;
int n = digitalRead(buttonPin1);
int m = digitalRead(buttonPin2);
while(n == 1)
{
  a = 1;
  break;
}
while(m == 1)
{
  b = 1;
  break;
}
int sum = a+b;
if(sum == 2)
{
  digitalWrite(ledPinGreen, HIGH);
  digitalWrite(ledPinRed, LOW);
}
else if(sum == 1)
{
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinRed, HIGH);
}
else {
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinRed, LOW);
}
}

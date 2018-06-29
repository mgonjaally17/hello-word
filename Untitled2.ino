int Led= 13; // dfine pin 13 is the pin connected to LED
void setup() {
  // put your setup code here, to run once:
pinMode(Led,OUTPUT); // define pin 13 is the output pin 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (Led,HIGH); // define if is Hihg LED blink
delay (5000);

digitalWrite (Led, LOW); // define if is Low LED shutdown
delay (5000);

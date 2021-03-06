      /*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.

  To upload to your Gemma or Trinket:
  1) Select the proper board from the Tools->Board Menu
  2) Select USBtinyISP from the Tools->Programmer
  3) Plug in the Gemma/Trinket, make sure you see the green LED lit
  4) For windows, install the USBtiny drivers
  5) Press the button on the Gemma/Trinket - verify you see
     the red LED pulse. This means it is ready to receive data
  6) Click the upload button above within 10 seconds
*/
 
//int builtinled = 13; // blink 'digital' pin 1 - AKA the built in red LED
int buledin = 4;
int buledr = 13;
bool isbuled = false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
//  pinMode(builtinled, OUTPUT);
  pinMode(buledin, INPUT);
  pinMode(buledr, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
//    digitalWrite(led, HIGH); 
//    delay(2000);
//    digitalWrite(led, LOW);
//    delay(1500);

  isbuled = digitalRead(buledin);
  if(isbuled){
    digitalWrite(buledr, HIGH);
  }else{
    digitalWrite(buledr, LOW);
  }
}
    

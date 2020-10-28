#include <Bounce.h>

// This code turns a led on/off through a debounced button
// Build the circuit indicated here: http://arduino.cc/en/Tutorial/Button

#define BUTTON1 14
#define BUTTON2 15
#define BUTTON3 16

#define LED1 21
#define LED2 22
#define LED3 23

// Instantiate a Bounce object with a 5 millisecond debounce time
Bounce bouncer1 = Bounce( BUTTON1,5 ); 
Bounce bouncer2 = Bounce( BUTTON2,5 ); 
Bounce bouncer3 = Bounce( BUTTON3,5 ); 

void setup() {
  pinMode(BUTTON1,INPUT_PULLUP);
  pinMode(BUTTON2,INPUT_PULLUP);
  pinMode(BUTTON3,INPUT_PULLUP);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);

  bool state1 = false;
}

void loop() {
 // Update the debouncer
  bouncer1.update ( );
  bouncer2.update ( );
  bouncer3.update ( );
 
 // Get the update value
 int value1 = bouncer1.read();
 int value2 = bouncer2.read();
 int value3 = bouncer3.read();
 
 // Turn on or off the LED
 if ( value1 == LOW) {
   digitalWrite(LED1, HIGH );
   Keyboard.print("1");
 } else {
   digitalWrite(LED1, LOW );
 }
 
}

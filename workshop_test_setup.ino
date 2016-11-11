/* 
  an even simpler version of this program can be found here:
  also see: https://www.arduino.cc/en/tutorial/blink
*/

void setup() {
  
  // setup LED pin as an output device
  pinMode( LED_BUILTIN, OUTPUT );

  // setup serial communication with the programmer
  Serial.begin( 9600 );
  while (!Serial) {
    ; // this waits for serial port to connect on newer arduino models 
      // (not needed for the Uno -- but needed for the Leonardo, etc.)
  }
  // print to the programmer
  Serial.println( "Arduino has finised setup - starting the loop()" );
  
} // setup() block is over -- now on to the loop()


// the loop function repeats forever -- does the "Action"
void loop() {
  
  // turn on the LED (send the LED pin ~ +5 Volts)
  digitalWrite( LED_BUILTIN, HIGH );
  Serial.println( "LED ON" );
  // wait 2 seconds with the LED ON
  delay( 2000 );
  
  // now turn OFF the LED -- set the output to LOW (~ 0 Volts)
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println( "LED OFF" );
  // wait for a second (with the LED OFF)
  delay(1000);
  
}  // go back to the beginning of the loop() code



#include <IRremote.h> // IR library
#include <Servo.h>

IRrecv irrecv(2); // IR Pin
decode_results results;
Servo servo_8;

void setup(){
   servo_8.attach(8);
   irrecv.enableIRIn();  // start receiving the infrared signal
   Serial.begin(9600); 

   pinMode(12, OUTPUT);
   pinMode(2, INPUT);
}

void loop() {
   if (irrecv.decode(&results)) // if the data has arrived, execute the commands
   {
      Serial.println(results.value); // send the received data to the port
        
      if (results.value == 16601263) // adjust the value to the desired button
         servo_8.write(90);

      if (results.value == 16584943) // adjust the value to the desired button
         servo_8.write(0);

      irrecv.resume(); // receive the next signal on the IR receiver
   }
}
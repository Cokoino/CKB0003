#include <IRremote.h>
int RECV_PIN = 11; //Define the number port 11
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
 { 
 Serial.begin(9600); //Set the serial port baud rate
 irrecv.enableIRIn(); // Enable infrared reception
 }
void loop() 
{
if (irrecv.decode(&results)) 
{ 
Serial.println(results.value, HEX); //data display
irrecv.resume();
}
}

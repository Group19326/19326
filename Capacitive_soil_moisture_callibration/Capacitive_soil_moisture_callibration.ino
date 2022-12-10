void setup() {
  Serial.begin(9600);//This starts serial communication, so that the ESP32 can send out data through the USB connection.

}

void loop() {
int val= analogRead(36);// store the capacitive soil moisture readings in variable val.
Serial.print(val);// rints data to the serial port.
delay(500); //stop for 500 milliseconds. 
}

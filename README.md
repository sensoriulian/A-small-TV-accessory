# A small TV accessory with arduino

  What does it matter: an ultrasonic distance sensor, an arduino mini (you can use arduino mega, uno, nano, mini) and a 5v controlled relay. when the children approach less than one meter away (can be changed in the code), it cuts off the TV power supply for 10 seconds (can be changed in the code).

 The sensor HC-SR04 has 4 pins. VCC and GND go to 5V and GND pins on the Arduino, and the Trig and Echo go to any digital Arduino pin. Using the Trig pin we send the ultrasound wave from the transmitter, and with the Echo pin we listen for the reflected signal.

 For example i used pins digital 8, 9 and 10 pin 8 for the relay, (Trig Pin 9) and (Echo Pin 10). Other pins can be used but must be modified in the code.

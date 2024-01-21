#include <Wire.h>
#include <KeyboardController.h>
USBHost usb;
KeyboardController keyboard(usb);

unsigned long jikan;
int delay_chophep = 10;
int pass_time;

/* ---------------------------------------------------------------------------------------------------- */
int kpr_nole = 0, krl_nole = 0;
int last_kpr = 9999;
int last_krl = 9999;

void keyPressed() {
  Serial.println("Pressed:  "); 
  kpr_nole = keyboard.getOemKey();
  Wire.beginTransmission(1);
  Wire.write(kpr_nole);
  Wire.write(krl_nole);
  Wire.endTransmission();
}
void keyReleased() {
 Serial.println("Released: "); 
  krl_nole = keyboard.getOemKey();
  kpr_nole = 0;
  Wire.beginTransmission(1);
  Wire.write(kpr_nole);
  Wire.write(krl_nole);
  Wire.endTransmission();
  krl_nole = 0;
}
/* ---------------------------------------------------------------------------------------------------- */

void setup() {
  Serial.begin(9600);
  Wire.begin();
}
  
void loop() {
  usb.Task();
}

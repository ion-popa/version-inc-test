#include <Arduino.h>
#include "version.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Serial.print("Version: ");
  Serial.println(VERSION_STRING);
}

void loop() {
  // put your main code here, to run repeatedly:
}


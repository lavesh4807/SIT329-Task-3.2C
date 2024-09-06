#include "GPIO_DEAKIN.h"
#include <Arduino.h>

GPIO_DEAKIN gpio;

void setup() {
    Serial.begin(9600);

    char pins[6] = {20,18,6,4,5,7};
    gpio.Config_GPIO_Group('A', pins, 'O');  

    gpio.Run_Lights('A', pins, 500); 
}

void loop() {
   
}

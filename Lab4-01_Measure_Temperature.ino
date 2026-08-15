#include "src/HeptaSat.h"

HeptaCdh    cdh;
HeptaEps    eps;
HeptaSensor sensor;

void setup() {
  cdh.begin();
  eps.init();
  sensor.begin();
}

void loop() {
  float temp = sensor.get_temperature();
  cdh.printf("Temperature: %.2f [deg C]\r\n", temp);
  delay(1000);
}

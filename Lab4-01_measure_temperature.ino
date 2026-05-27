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
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" [deg C]");
  delay(1000);
}

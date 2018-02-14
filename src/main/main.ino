#include "Solenoid.h"
#include "SensorTask.h"

void setup() {

  solenoid_init(SOLENOID1);
  solenoid_init(SOLENOID2);
  
  sensor_init();

}

void loop() {

  solenoid_open(SOLENOID1);
  solenoid_open(SOLENOID2);

  sensor_task();

  solenoid_close(SOLENOID1);
  solenoid_close(SOLENOID2);

  delay(1000);

}

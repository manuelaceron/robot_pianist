
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h> 
#include <SPI.h>


void estrellita(double n){

  DO_1(n); DO_1(n); SOL_1(n); SOL_1(n); LA_1(n); LA_1(n); SOL_1(n);
  delay(n);
  FA_1(n); FA_1(n); MI_1(n); MI_1(n); RE_1(n); RE_1(n); DO_1(n);
  delay(n);
  SOL_1(n); SOL_1(n); FA_1(n); FA_1(n); MI_1(n); MI_1(n); RE_1(n);
  delay(n);
  SOL_1(n); SOL_1(n); FA_1(n); FA_1(n); MI_1(n); MI_1(n); RE_1(n);
  delay(n);
  DO_1(n); DO_1(n); SOL_1(n); SOL_1(n); LA_1(n); LA_1(n); SOL_1(n);
  delay(n);
  FA_1(n); FA_1(n); MI_1(n); MI_1(n); RE_1(n); RE_1(n); DO_1(n);

}


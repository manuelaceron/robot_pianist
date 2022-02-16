
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h> 
#include <SPI.h>


void cumpleanos(double n){
  
  //DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n);
  //DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n); DO_1(n);
  
  DO_1(n/2); DO_1(n/2); RE_1(2*n); DO_1(n); FA_1(n); MI_1(2*n);
  delay(n/2);
  DO_1(n/2); DO_1(n/2); RE_1(2*n); DO_1(n); SOL_1(n); FA_1(2*n);
  delay(n/2);
  DO_1(n/2); DO_1(n/2); DO_2(2*n); LA_1(n); FA_1(n); MI_1(n); RE_1(n);
  delay(n/2);
  SI_1(n/2); SI_1(n/2); LA_1(2*n); FA_1(n); SOL_1(n); FA_1(n);


}


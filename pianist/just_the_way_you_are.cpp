
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void justTheWayYouAre(double n){

  LA_S1(n/4); DO_2(n/4);

  delay(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/4); DO_2(n/4);
  DO_2(n/2); DO_2(n/4); delay(n/4); LA_1(n/4); delay(n/4); DO_2(n/2); RE_2(n/2); LA_1(n/2); LA_1(n/2);
  delay(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2);
  DO_2(n/2); LA_S1(n/4); DO_2(n/2); LA_S1(n/4); delay(n/4); DO_2(n/2); RE_2((n/2)+(n/4)); LA_1(n/2); LA_1(n/2);
  delay(n); LA_S1(n/4); LA_1(n/2); LA_S1(n/2); LA_1(n/2); LA_1(n/2); LA_1(n);
  delay(n+(n/2)); LA_S1((n/8)+(n/8)); delay(n/4); LA_S1(n/2); LA_1(n/2); delay(n/4); LA_S1((n/2)+(n/2));  LA_1((n/2)+(n/4)+(n/2));
  SOL_1(n/4); LA_1((n/4)+(n)+(n/2)); 
  delay((n/2)+n+(2*n)+(n/2)); DO_2((n/2)+(n/2)+(n/4));  delay((n/4)+(n/2));
  DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/4); LA_S1(n/4);
  DO_2(n/2); LA_S1(n/4); DO_2((n/4)+(n/4)); DO_2(n/2); LA_S1(n/4); DO_2(n/2); RE_2(n/2); LA_1(n/2); LA_1(n/2);
  delay(n/4); LA_1(n/4); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/4); LA_S1(n/4);
  DO_2(n/2); LA_S1(n/4); DO_2((n/4)+(n/4)); LA_1(n/2); DO_2((n/4)+(n/4)); RE_2((n/2)+(n/4)); LA_1(n/2); LA_1(n/2);
  delay((n/2)+(n/4)); LA_1(n/4); LA_S1(n/4); LA_1(n/2); LA_S1((n/4)+(n/4)); LA_1(n/2); LA_S1((n/4)+(n/4)); LA_1(n/4); delay(n/4); DO_2((n/4)+(n/4));
  FA_1(n/2); FA_1((n/4)+(n/4)); FA_1(n/2); FA_1(n/4); SOL_1(n/2); delay(n/2); FA_1(n/4); SOL_1((n/2)+(n/4));
  LA_1((2*n)+(n)); delay(n);

  //Coro
  delay(n); DO_2(n/2); DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));//24
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n/2); delay(n/2); LA_2((n/2)+(n/2));
  SOL_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n/2));
  delay(n); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2((n/2)+(n/2));
  SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2)); //33
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2(n/2);
  SOL_2(n/2); SOL_2(n); FA_2((n/2)+(n/2)); FA_2(n/2); SOL_2(n/2); FA_2((n/2)+(n));
  delay(n/2); DO_2(n/2); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2(n/2);
  SOL_2(n/2); SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(2*n));
  delay((2*n)+(n)+(n/2));//39

  SOL_2(n/4); LA_2((n/4)+(n/2)); SOL_2(n/4); LA_2((n/4)+(n/2)); delay((n/2)+(n/2));

  DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/4); LA_S1(n/4);//41
  DO_2(n/2); LA_1(n/4); DO_2((n/4)+(n/4)); LA_1(n/2); DO_2((n/4)+(n/4)); RE_2((n/2)+(n/4)); LA_1(n/2); LA_1(n/2);
  delay(n/2); DO_2(n/2); DO_2(n/2); LA_1(n/2); DO_2(n/2); DO_2(n/2); LA_1((n/2)+(n/4)); LA_1(n/4);
  DO_2(n/2); LA_S1(n/4); DO_2(n/4); DO_2((n/4)+(n/4)); LA_S1(n/2); DO_2((n/4)+(n/4)); RE_2((n/2)+(n/4)); LA_1(n/2); LA_1(n/2);
  delay(n); LA_S1(n/4); LA_1(n/2); LA_S1((n/4)+(n/4)); LA_1(n/2); LA_1((n/4)+(n)+(n/2));//45
  delay((n/2)+(n/2)); LA_S1(n/4); LA_1(n/4); LA_S1(n/4); LA_1(n/4); delay(n/4); LA_S1((n/4)+(n/2)); DO_2((n/2)+(n/2));//46
  delay(n/2); LA_1(n/4); SOL_1((n/4)+(n/4)+(2*n));//47
  delay((2*n)+(n/2)); FA_2(n); FA_2(n/2);
  FA_2(n/2); MI_2(n/2); MI_2(n/2); RE_2(n/2); RE_2(n/2); DO_2(n/2); DO_2(n/2); LA_S1(n/2);
  LA_1(n/2); LA_S1(n/2); DO_2(n/2); FA_1((n/2)+(n/2)+(n/4)); delay((n/4)+(n/2)); FA_2(n/2);
  FA_2(n/2); MI_2(n/2); MI_2(n/2); RE_2(n/2); RE_2(n/2); DO_2(n/2); DO_2(n/2); LA_S1(n/2);
  LA_1(n/2); LA_S1(n/2); DO_2(n/2); FA_1((n/2)+(n)); delay(n/2); DO_2((n/2)+(n/4));
  LA_1(n/2); LA_S1(n/4); DO_2(n/4); LA_1(n/2); DO_2((n/4)+(n/4)); LA_1(n/2); DO_2((n/4)+(n/4)); LA_1(n/2); DO_2((n/4)+(n/4));
  DO_2(n/2); RE_2((n/4)+(n/4)); FA_2(n/2); SOL_2((n/4)+(n/4)); delay(n/4); FA_2(n/4); LA_S2(n/4); DO_3((n/2)+(n/4));
  LA_2((n)+(n/2)); SOL_2(n/4); FA_2((n/4)+(n)+(n/2)); SOL_2(n/4); LA_2(n/4);//55

  //Coro
  delay(n); DO_2(n/2); DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));//56
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n/2); delay(n/2); LA_2((n/2)+(n/2));
  SOL_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n/2));
  delay(n); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2((n/2)+(n/2));
  SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2(n/2);
  SOL_2(n/2); SOL_2(n); FA_2((n/2)+(n/2)); FA_2(n/2); SOL_2(n/2); FA_2((n/2)+(n));
  delay(n/2); DO_2(n/2); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2(n/2);
  SOL_2(n/2); SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(2*n));
  delay(2*n);//71

  delay(n); FA_2(n/2); SOL_2((n/2)+(n/2)); FA_2(n/2); DO_3((n/2)+(2*n));
  //73
  delay(n); FA_2(n/2); SOL_2((n/2)+(n/2)); FA_2(n); DO_3((n/2)+(n)+(n/2));
  LA_2((n/2)+(2*n));
  delay(2*n); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2((n/2)+(n/2));
  SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(n));

  //Coro
  delay(n); DO_2(n/2); DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));//80
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n/2); delay(n/2); LA_2((n/2)+(n/2));
  SOL_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n/2));
  delay(n); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2((n/2)+(n/2));
  SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2(n/2);
  SOL_2(n/2); SOL_2(n); FA_2((n/2)+(n/2)); FA_2(n/2); SOL_2(n/2); FA_2((n/2)+(n));
  delay(n/2); DO_2(n/2); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2(n/2);
  SOL_2(n/2); SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));//95

  LA_2((n/2)+(n/2)); SOL_2(n/4); LA_2(n/4); LA_2(n/2); delay((n/2)+(4*n));


}

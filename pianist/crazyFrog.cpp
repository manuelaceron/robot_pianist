
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void crazyFrog(double n){
/*https://musescore.com/user/21524786/scores/4112431*/
/*1*/   MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*2*/   MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*3*/   MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1(n/2);MI_1((n/2)+(2*n));//FA_1((n/2)+(2*n)); 
/*4*/   delay(2*n);
/*5*/   MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*6*/   MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*7*/   MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1((n/2)); MI_1((n/2)+(2*n));
/*8*/   delay(2*n);
/*9*/   MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*10*/  MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*11*/  MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1((n/2)); MI_1((n/2)+(2*n)); 
/*12*/  delay(2*n);
/*13*/  MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*14*/  MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*15*/  MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1((n/2)); MI_1((n/2)+(2*n));
/*16*/  delay(2*n);
/*17*/ // delay(4*n);
/*18*/  MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*19*/  MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*20*/  MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1((n/2)); MI_1((n/2)+(2*n));
/*21*/  delay(2*n);
/*22*/  MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*23*/  MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*24*/  MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1((n/2)); MI_1((n/2)+(2*n));
/*25*/  delay(2*n);

}

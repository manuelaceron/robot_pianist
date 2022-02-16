
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void marioMain(double n){


/*1*/   MI_2(n/4);MI_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_2(n/4);MI_2(n/2);SOL_2(n/2);delay(n/2);SOL_1(n/2);delay(n/2);
/*2*/   DO_2(n/4);delay(n/2);SOL_1(n/4);delay(n/2);MI_1(n/2);delay(n/2);LA_1(n/4);delay(n/4);SI_1(n/4);delay(n/4);LA_S1(n/4);LA_1(n/4);delay(n/4);
/*3*/   SOL_1(n/4);delay(n/2);MI_2(n/4);SOL_2(n/2);LA_2(n/4);delay(n/4);FA_2(n/4);SOL_2(n/2);MI_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);SI_1(n/4);delay(n/2);
/*4*/   DO_2(n/4);delay(n/2);SOL_1(n/4);delay(n/2);MI_1(n/4);delay(n/2);LA_1(n/4);delay(n/4);SI_1(n/4);delay(n/4);LA_S1(n/4);LA_1(n/4);delay(n/4);
/*5*/   SOL_1(n/2);MI_2(n/2);SOL_2(n/2);LA_2(n/4);delay(n/4);FA_2(n/4);SOL_2(n/2);MI_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);SI_1(n/4);delay(n/2);

/*6*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);SOL_S1(n/4);LA_1(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);DO_2(n/4);RE_2(n/4);
/*7*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_3(n/4);delay(n/4);DO_3(n/4);delay(n/4);SOL_1(n/4);delay(n/4);
/*8*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);SOL_S1(n/4);LA_1(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);DO_2(n/4);RE_2(n/4);
/*9*/   delay(n/2);RE_S2(n/4);delay(n/2);RE_2(n/4);delay(n/2);MI_2(n/4);delay(n/2);SOL_1(n/4);SOL_1(n/4);delay(n/4);DO_1(n/4);delay(n/4);

///*BIS*/
///*6*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);SOL_S1(n/4);LA_1(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);DO_2(n/4);RE_2(n/4);
///*7*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_3(n/4);delay(n/4);DO_3(n/4);delay(n/4);SOL_1(n/4);delay(n/4);
///*8*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);SOL_S1(n/4);LA_1(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);DO_2(n/4);RE_2(n/4);
///*9*/   delay(n/2);RE_S2(n/4);delay(n/2);RE_2(n/4);delay(n/2);MI_2(n/4);delay(n/2);SOL_1(n/4);SOL_1(n/4);delay(n/4);DO_1(n/4);delay(n/4);
//
/*10*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);SOL_1(n/4);delay((n/2)+(n/4));
/*11*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/2);DO_1(n/4);delay(n/2);DO_1(n/4);delay(n/4);
/*12*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);SOL_1(n/4);delay((n/2)+(n/4));
/*13*/  MI_2(n/4);MI_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_2(n/4);MI_2(n/2);SOL_2(n/2);delay(n/2);SOL_1(n/2);delay(n/2);
}

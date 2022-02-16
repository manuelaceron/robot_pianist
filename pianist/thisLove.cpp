
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void thisLove(double n){

/*9*/   delay(n/2);SI_1(n/4);SI_1(n/2);SI_1((n/2)+(n/4));SI_1(n/2);SI_1(n/4);SI_1(n/2);SI_1(n/2);DO_2(n/4);
/*10*/  DO_2(n/2);DO_2(n/2);delay(n);DO_2(n/2);DO_2(n/4);RE_2(n/2);RE_S2((n/2)+(n/4));
/*11*/  RE_S2(n/4);RE_2(n/2);RE_S2(n/2);delay((n/2)+(n/4));DO_2(n/2);DO_2(n/4);DO_2(n/2);DO_2(n/2);DO_2((n/4)+(n/4));
/*12*/  /*Lig_DO_2(n)*/SI_1(n/4);SI_1((n/2)+(n/4));delay((n/4)+(2*n)+(n/2));
/*13*/  /*Lig_delay(n)*/SI_1(n/4);SI_1(n/2);SI_1((n/2)+(n/4));SI_1(n/2);SI_1(n/4);SI_1(n/2);SI_1(n/2);DO_2(n/4);
/*14*/  DO_2(n/2);DO_2(n/2);delay(n);DO_2(n/2);DO_2(n/4);RE_2(n/2);RE_S2((n/2)+(n/4));
/*15*/  RE_S2(n/4);RE_2(n/2);RE_S2(n/2);delay((n/2)+(n/4));DO_2(n/2);DO_2(n/4);DO_2(n/2);DO_2(n/2);SI_1((n/4)+(n/2));
/*16*/  /*Lig_SI_1(n)*/delay(2*n);SOL_2(n/2);delay((n/2)+(n));

/*Coro*/
/*17*/  /*Lig_delay(n)*/SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*18*/  SOL_2(n/2);RE_S2(n/2);SOL_2(n/2);RE_S2(n/2);delay(n/2);SOL_2((n/2)+(n/4));RE_S2((n/2)+(n/4));delay(n/4);
/*19*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*20*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2(n/2);delay((n/2)+(n/2)+(n/4)+(n/4)+(n/2));
/*21*/  /*Lig_delay(n)*/;RE_S2(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*22*/  SOL_2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n);RE_S2(n/2);FA_2(n/2);delay(n/2);
/*23*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*24*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2(n/2);RE_S2(n/2);RE_2(n/2);DO_2(n/2);
/*25*/  SI_1(n);delay((n/2)+(n));SI_1((n/2)+(n/4));RE_2((n/2)+(n/4));
/*26*/  DO_2(n);delay((n)+(n/2));SOL_2((n/2)+(n/4));FA_S2(n/2);
/*27*/  FA_2(n);delay((n/2)+(n/4));FA_2((n/2)+(n/4));RE_S2(n/2);

/*Verso2*/
/*28*/  RE_2(n/2);DO_2(n/4);RE_2(n/2);delay((n/4)+(n)+(n/2)+(n/2));
/*29*/  /*Lig_delay(n)*/SI_1(n/4);SI_1(n/2);SI_1((n/2)+(n/4));SI_1(n/4);delay(n/4);SI_1(n/4);SI_1(n/2);SI_1(n/2);DO_2(n/4);
/*30*/  DO_2(n/2);DO_2(n/2);delay(n);DO_2(n/2);DO_2(n/4);RE_2(n/2);RE_S2(n/2);
/*31*/  RE_S2(n/4);RE_2(n/2);delay(n/2);DO_2(n/4);DO_2(n/2);DO_2(n/4);DO_2(n/2);DO_2(n/2);DO_2(n/2);
/*32*/  /*Lig_DO(n)*/SI_1(n/2);SI_1((n/2)+(n/4));delay((n)+(n/2));SOL_2(n/2);delay((n/2)+(n/4));
/*33*/  /*Lig_delay(n)*/SOL_2(n/2);FA_2(n/2);RE_S2(n/2);SOL_2(n/2);delay(n/4);SOL_2(n/2);FA_2(n/2);RE_S2(n/4);FA_2(n/2);
/*34*/  /*Lig_FA(n)*/RE_S2(n/4);DO_2(n);DO_2(n/2);LA_S2((n/2)+(n/4));LA_S2(n/2);FA_S2(n/2);FA_2(n/2);
/*35*/  /*Lig_FA_2(n)*/RE_S2(n/4);FA_2(n/2);delay(n);DO_2(n/2);DO_2(n/4);DO_2(n/2);RE_S2(n/2);RE_2(n/2);
/*36*/  /*Lig_RE_2(n)*/DO_2(n/4);RE_2(n/2);delay((n)+(n/2));SOL_2(n/4);FA_2(n/2);RE_S2(n/2);delay(n/4);

/*Coro*/
/*37*/  /*Lig_delay(n)*/SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*38*/  SOL_2(n/2);RE_S2(n/2);SOL_2(n/2);RE_S2(n/2);delay(n/2);SOL_2((n/2)+(n/4));RE_S2((n/2)+(n/4));delay(n/4);
/*39*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*40*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2(n/2);delay((n/2)+(n/2)+(n/4)+(n/4)+(n/2));
/*41*/  /*Lig_delay(n)*/;RE_S2(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*42*/  SOL_2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n);RE_S2(n/2);FA_2(n/2);delay(n/2);
/*43*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*44*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2(n/2);RE_S2(n/2);RE_2(n/2);DO_2(n/2);
/*45*/  SI_1(n);delay((n/2)+(n));SI_1((n/2)+(n/4));RE_2((n/2)+(n/4));
/*46*/  DO_2(n);delay((n)+(n/2));SOL_2((n/2)+(n/4));FA_S2(n/2);
/*47*/  FA_2(n);delay((n/2)+(n/4));FA_2((n/2)+(n/4));RE_S2(n/2);
/*48*/  RE_2(n/2);DO_2(n/4);RE_2((n)+(n/2));delay((n/4)+(n)+(n/2));

/*Bridge*/
/*49*/  /*Lig_delay(n)*/FA_2(n/2);SOL_2(n/4);SOL_2(n/2);FA_2(n/2);FA_2(n/2);RE_S2(n/4);FA_2((n)+(n/2));
/*50*/  /*Lig_delay(n)*/SOL_2(n/4);SOL_2(n/2);FA_2(n/2);FA_2(n/2);RE_S2(n/4);FA_2(n);delay(n/2);
/*51*/  /*Lig_delay(n)*/SOL_2(n/4);SOL_2(n/2);FA_2(n/2);FA_2(n/2);RE_S2(n/2);RE_S2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);
/*52*/  RE_S2((n)+(n/2));delay(n);RE_S2(n/4);FA_2(n/2);RE_S2((n/2)+(n/4));
/*53*/  delay(n/2);SOL_2(n/4);SOL_2(n/2);FA_2(n/2);FA_2(n/2);RE_S2(n/4);FA_2((n)+(n/2));
/*54*/  delay(n/2);SOL_2(n/4);SOL_2(n/2);FA_2(n/2);FA_2(n/2);RE_S2(n/4);FA_2(n/2);delay((n/2)+(n/4));FA_2(n/4);
/*55*/  SOL_2(n/4);SOL_2(n/2);SOL_2(n/4);delay(n/4);SOL_2(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/4);SOL_2(n/2);SI_2((n/4)+(n/4));
/*56*/  /*Lig_SI_2(n)*/SOL_2(n/2);SOL_2(n/2);FA_2(n/2);SOL_2(n/2);SOL_2(n/2);FA_2(n/2);DO_2((n/2)+(n/4));

/*Coro*/
/*57*/  delay(n/2);RE_2(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*58*/  SOL_2(n/2);RE_S2(n/2);SOL_2(n/2);RE_S2(n/2);delay(n/2);SOL_2(n/2);RE_S2((n/2)+(n/4));delay(n/4);
/*59*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*60*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2(n/2);RE_S2(n/2);RE_2(n/2);DO_2(n/2);
/*61*/  delay(n/2);RE_S2(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);SOL_2(n/2);delay(n/2);
/*62*/  SOL_2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n/2);RE_S2(n/2);FA_2(n/2);delay(n/2);
/*63*/  SOL_2(n/2);RE_S2(n/2);delay(n/4);SOL_2(n/2);RE_S2((n/2)+(n/4));delay((n/2)+(n/4));SOL_2(n/2);
/*64*/  FA_2(n/4);FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n/2);FA_2(n/2);RE_S2(n/2);RE_2(n/2);
/*65*/  delay(n);SOL_2(n/2);delay(n/2);SOL_2(n);RE_S2(n);
/*66*/  SOL_2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n);RE_S2(n/2);FA_2(n/4);delay((n/2)+(n/4));
/*67*/  SOL_2((n/2)+(n/4));RE_S2(n/2);DO_2(n/2);RE_S2((2*n)+(n/4));SOL_2(n/2);
/*68*/  FA_2(n/2);RE_S2(n/2);RE_S2(n/2);FA_2(n/2);RE_S2((n/2)+(n/4));delay((n/4)+(n));
/*69*/  delay(n/2);RE_S2(n/2);LA_S2(n);SOL_2(n);SOL_2(n);
/*70*/  SOL_2(n/2);RE_S2(n/2);FA_2(n/2);SOL_2(n);RE_S2(n/2);FA_2(n/2);delay(n/2);
/*71*/  SOL_2(n/2);RE_S2(n);RE_S2(n/2);RE_2((n)+(n/2));SOL_2(n/2);
/*72*/  FA_2(n/2);RE_2(n/2);RE_2(n/2);FA_2(n/2);SOL_2(n/2);SOL_S2(n/2);SOL_2(n/2);SOL_S2(n/2);
/*73*/  SOL_2(n/2);FA_2(n/2);RE_S2((n/2)+(2*n));RE_S2(n);
/*74*/  /*Lig_RE_S2*/FA_2(n);SOL_2(n);LA_S2(n);LA_S2((4*n)+(n/2));
/*75*/  /*Lig_FA_S2(n)*/

}

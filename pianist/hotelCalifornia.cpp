
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void california(double n){

/*1*/  delay(2*n);
/*2*/  delay(2*n);
/*3*/  FA_2(n/2); LAin_S1(n/4); DOin_S2(n/2); LAout_S1(n/2); DOout_S2(0); LAin_S1(n/2); FAin_2(n/2); DOin_S2(n/4); LAout_S1(n/2); LAin_S1(n/2); DOout_S2(n/2); LAout_S1(0); FAout_2(n*0); DO_S2(n/2); delay(n/4); //Revisar n*0
/*4*/  LAin_1(n/2); DOin_2(n/4); DOout_2(0); LAout_1(0); FA_2(n/4); LAin_1(n/4); DOin_2(n/2); FAin_2((n/2)+(n/4)); LAout_1(0); DOout_2(n/2); FAout_2(0); delay(n/4);
/*5*/  SOL_S1(n/2); RE_S2(n/4); LA_S1(n/2); RE_S2(n/4); DOin_2(0); REin_S2(n/2); SOL_S1(n/4); delay(n/4); DOout_2(0); REout_S2(0); LA_S1(n/4); REin_S2(n/4); SOLin_S1(n/4); REout_S2(0); SOLout_S1(0); delay(n/4); //El delay debe ser cero para que se quiten los dos al tiermpo?
/*6*/  SOLin_1(n/2); LA_S1(n/4); REin_S2(0); SOLout_1(0); LAin_S1(n/4); REout_S2(0); SOLin_1(n/2); REin_S2(n); SOLout_1(0); LAout_S1(n/2); REout_S2(0); delay((n/2)+(n/4));
/*7*/  FA_S1(n/2); DO_S2(n/4); SOL_S1(n/2); DOin_S2(n/4); LAin_S1(n/4); DOout_S2((n/2)+(n/4)); LAout_S1(0); DO_S2(n/2); SOL_S1(n/4); DO_S2(n/4); FA_S1(n/4); delay(n/4);
/*8*/  FAin_1(n/2); DOin_S2(n/4); FAout_1(0); SOLin_S1((n/2)+(n/4)); SOLout_S1(0); DOout_S2(0); RE_S1(n/4); delay(n/4); DO_S1((n)+(n/2)+(n/4)); delay(n/4);
/*9*/  REin_S1(n/2); LA_S1(n/4); FAin_S1(n/2); REout_S1(0); LAin_S1(n/4); REin_S1(n/2); LAout_S1(n/4); FAout_S1(n/4); REout_S1(0); LAin_S1(n/4); FAin_S1(n/4); REin_S1(n/2); FAout_S1(0); LAout_S1(n/4); REout_S1(0); delay(n/4);

/*10*/  FAin_1(n/2); DOin_2(n/4); LAin_1(n/4); DOout_2(n/4); FAout_1(0); LAout_1(0); DOin_2(n/4); FAin_1(n/2); FAin_2((n)+(n/2)); FAout_1(0); DOout_2(0); delay(n/2);

/*11*/  FA_2(n/2); LAin_S1(n/4); DOin_S2(n/4); LAout_S1(n/4); DOout_S2(0); LAin_S1(n/4); FAin_2(n); DOin_S2(n/4); LAout_S1(n/4); LAin_S1(n/4); DOout_S2(n/2); LAout_S1(0); FAout_2(0); DO_S2(n/4); delay(n/4); //Revisar Lain:S1(? )7 atras
/*12*/  LAin_1(n/2); DOin_2(n/4); LAout_1(0); DOout_2(0); FA_2(n/2); LAin_1(n/4); DOin_2(n/2); FAin_2((n/2)+(n/4)); LAout_1(0); DOout_2(n/4); FAout_2(0); delay(n/4);
/*13*/  SOL_S1(n/2); RE_S2(n/4); LA_S1(n/2); RE_S2(n/4); DOin_2(n/2); REin_S2(n/2); SOL_S1(n/4); delay(n/4); DOout_2(0); REout_S2(0); LA_S1(n/4); REin_S2(n/4); SOLin_S1(n/4); REout_S2(0); SOLout_S1(0); delay(n/4);
/*14*/  delay(n/2); SOLin_1(0); LAin_S1(n/4); LAout_S1(0); REin_S2(n/2); SOLout_1(0); LAin_S1(n/4); REout_S2(0); SOLin_1(n/2); REin_S2(n); SOLout_1(0); LAout_S1((n/4)+(n/8)); REout_S2(0); delay(n/4);
/*15*/  FA_S1(n/2); DO_S2(n/4); SOL_S1(n/2); DOin_S2(n/4); LAin_S1(n/4); DOout_S2((n/2)+(n/4)); LAout_S1(0); DO_S2(n/2); SOL_S1(n/4); DO_S2(n/4); FA_S1(n/4); delay(n/4);
/*16*/  FAin_1(n/2); DOin_S2(n/4); FAout_1(0); SOLin_S1(((n/2)+(n/4))); SOLout_S1(0); DOout_S2(0); RE_S1(n/4); delay(n/4); DO_S1((n)+(n/2)+(n/4)); delay(n/4);
/*17*/  REin_S1(n/2); LA_S1(n/4); FAin_S1(n/2); REout_S1(0); LAin_S1(n/4); REin_S1(n/2); LAout_S1(n/4); FAout_S1(n/4); REout_S1(0); LAin_S1(n/4); FAin_S1(n/4); REin_S1(n/4); FAout_S1(0); LAout_S1(n/2); REout_S1(0); delay(n/4);
/*18*/  FAin_1(n/2); DOin_2(n/4); LAin_1(n/4); DOout_2(n/4); FAout_1(0); LAout_1(0); DOin_2(n/4); FAin_1(n/2); FAin_2((n)+(n/2)); FAout_1(0); DOout_2(0); FAout_2(0); delay(n/2);

/*19*/  FA_2(n/2); LAin_S1(n/4); DOin_S2(n/4); LAout_S1(n/4); DOout_S2(0); LAin_S1(n/4); FAin_2(n); DOin_S2(n/4); LAout_S1(n/4); LAin_S1(n/4); DOout_S2(n/4); LAout_S1(0); FAout_2(0); DO_S2(n/4); DO_1(n/4);
/*20*/  LAin_1(n/2); DOin_2(n/4); LAout_1(0); DOout_2(0); FA_2(n/2); LAin_1(n/4); DOin_2(n/2); FAin_2((n)+(n/4)); LAout_1(0); DOout_2(n/2); FAout_2(0); delay(n/4);
/*21*/  SOL_S1(n); RE_S2(n); LA_S1(n); RE_S2(n); DOin_2(n); REin_S2(n); SOL_S1(n); DOout_2(n); REout_S2(n); LA_S1(n); REin_S2(n); SOLin_S1(n); REout_S2(0); SOLout_S1(n); delay(200);
/*22*/  SOLin_1(n/2); LAin_S1(n/4); LAout_S1(0); REin_S2(n/2); SOLout_1(0); LAin_S1(n/4); REout_S2(0); SOLin_1(n/2); REin_S2(n); SOLout_1(0); LAout_S1((n/2)+(n/4)); REout_S2(0); delay(n/4);
/*23*/  FA_S1(n/2); DO_S2(n/4); SOL_S1(n/2); DOin_S2(n/4); LAin_S1(n/4); DOout_S2((n/2)+(n/4)); LAout_S1(0); DO_S2(n/2); SOL_S1(n/4); DO_S2(n/4); FA_S1(n/4); delay(n/4);
/*24*/  FAin_1(n/2); DOin_S2(n/4); FAout_1(0); SOLin_S1((n/2)+(n/4)); SOLout_S1(0); DOout_S2(0); RE_S1(n/4); delay(n/4); DO_S1((n)+(n/2)); delay(n/4);
/*25*/  REin_S1(n/2); LA_S1(n/4); FAin_S1(n/2); REout_S1(0); LAin_S1(n/4); REin_S1(n/2); LAout_S1(n/4); FAout_S1(n/4); REout_S1(0); LAin_S1(n/4); FAin_S1(n/4); REin_S1(n/4); FAout_S1(0); LAout_S1(n/4); REout_S1(0); delay(n/4);
/*26*/  FAin_1(n/2); DOin_2(n/4); LAin_1(n/4); DOout_2(n/4); FAout_1(0); LAout_1(0); DOin_2(n/4); FAin_1(n/2); FAin_2((n)+(n/2)); FAout_1(0); DOout_2(0); FAout_2(0); delay(n/2);

/*27*/  FA_2(n/2); LAin_S1(n/4); DOin_S2(n/4); LAout_S1(n/4); DOout_S2(0); LAin_S1(n/4); FAin_2(n); DOin_S2(n/4); LAout_S1(n/4); LAin_S1(n/4); DOout_S2(n/4); LAout_S1(0); FAout_2(0); DO_S2(n/4); delay(n/4);
/*28*/  LAin_1(n/2); DOin_2(n/4); LAout_1(0); DOout_2(0); FA_2(n/2); LAin_1(n/4); DOin_2(n/2); FAin_2((n)+(n/4)); LAout_1(0); DOout_2(n/2); FAout_2(0); delay(n/4);
/*29*/  SOL_S1(n/2); RE_S2(n/4); LA_S1(n/2); RE_S2(n/4); DOin_2(n/2); REin_S2(n/2); SOL_S1(n/2); delay(n/4); DOout_2(0); REout_S2(0); LA_S1(n/4); REin_S2(n/4); SOLin_S1(n/4); REout_S2(0); SOLout_S1(0); delay(n/4);
/*30*/  SOLin_1(n/2); LAin_S1(n/4); LAout_S1(0); REin_S2(n/2); SOLout_1(0); LAin_S1(n/4); REout_S2(0); SOLin_1(n/2); REin_S2(n); SOLout_1(0); LAout_S1((n/2)+(n/4)); REout_S2(0); delay(n/4);
/*31*/  FA_S1(n/2); DO_S2(n/4); SOL_S1(n/2); DOin_S2(n/4); LAin_S1(n/4); DOout_S2((n/2)+(n/4)); LAout_S1(0); DO_S2(n/2); SOL_S1(n/4); DO_S2(n/4); FA_S1(n/4); delay(n/4);
/*32*/  FAin_1(n/2); DOin_S2(n/2); FAout_1(0); SOLin_S1((n/2)+(n/4)); SOLout_S1(0); DOout_S2(0); RE_S1(n/4); delay(n/4); DO_S1((n)+(n/2)+(n/4)); delay(n/4);
/*33*/  REin_S1(n/2); LA_S1(n/4); FAin_S1(n/2); REout_S1(0); LAin_S1(n/4); REin_S1(n/2); LAout_S1(n/4); FAout_S1(n/4); REout_S1(0); LAin_S1(n/4); FAin_S1(n/4); REin_S1(n/2); FAout_S1(0); LAout_S1(n/4); REout_S1(0); delay(n/4);
/*34*/  FAin_1(n/2); DOin_2(n/4); LAin_1(n/4); DOout_2(n/4); FAout_1(0); LAout_1(0); DOin_2(n/4); FAin_1(n/2); FAin_2((n/2)+(n/4)); FAout_1(0); DOout_2(0); FAout_2(0); delay(n/2); DO_1(n/4); DO_S1(n/4); FA_1(n/4);

///Modificación reemplazo nota por DO_1
/*35*/  DOin_1(n/4); DOin_S1(n/4); FAin_S1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/2); FAin_S1(n/4); DOout_1(0); LAout_S1(n/4); DOin_S1(0); DOin_1(n/4); DOout_S1(0); FAout_S1(n/4); DOin_S1(n/4); DOout_1(0); FAin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/4); FAin_S1(n/4); LAout_S1(0); DOin_S1(n/4); DOout_1(0); FAout_S1(n/4); DOout_S1(n);
/*36*/  DOin_1(n/4); DO_S1(n/4); FA_1(n/4); SOLin_S1(n/2); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); SOLout_S1(0); DOin_1(n/4); DOout_S1(0); FAout_1(n/4); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); DOout_S1(0); FAout_1(0); DOin_1(n/4); FAin_1(n/4); DOin_S1(n/2); DOout_1(0); DOout_S1(0); FAout_1(0); delay(n/2);
/*37*/  DOin_1(0); REin_S1(n/4); DOin_2(n/4); DOout_1(0); FAin_1(n/4); DOout_2(0); DOin_1(n/4); DOout_1(0); FAout_1(0); DOin_2(n/4); REout_S1(0); DOin_1(n/4); DOout_2(0); FAin_1(n/4); DOout_1(0); DOin_2(n/4); DOout_2(0); DOin_1(n/4); FAout_1(0); DOin_2(n/4); DOout_1(0); DOout_2(0); FA_1(n/4); DOin_1(0); RE_S1(n/4); DO_2(n/4); REin_S1(n/4); DOout_1(0); FAin_S1(n/4); REout_S1(0); FAout_1(0); DO_2(n/4);
/*38*/  DOin_2(0); DOin_1(n/4); DOout_2(0); FAin_1(n/4); DOout_1(0); LAin_S1(n/4); DOout_S1(0); FAout_1(0); LAout_S1(0); DOin_1(n/4); DOin_S1(n/4); FAin_1(n/4); DOout_1(0); LAin_S1(n/4); DOout_S1(0); FAout_1(0); LAout_S1(0); DOin_1(n/4); DOin_S1(n/4); FAin_1(n/4); DOout_1(0); DOout_S1(0); FAout_1(0); LA_S1(n/4); DO_1(n/4); DO_S1(n/4); DO_1(n/4); DO_S1(n/4);
/*39*/  DOin_1(n/4); DOin_S1(n/4); FAin_S1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/2); FAin_S1(n/4); DOout_1(0); LAout_S1(0); DOin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(n/4); DOin_S1(n/4); DOout_1(0); FAin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/4); FAin_S1(n/4); LAout_S1(0); DOin_S1(n/4); DOout_1(0); FAout_S1(n/4);
/*40*/  DOin_1(n/4); DO_S1(n/4); FA_1(n/4); SOLin_S1(n/2); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); SOLout_S1(0); DOin_1(n/4); DOout_S1(0); FAout_1(n/4); FAin_1(n/4); DOin_S1(0); DOout_1(n/4); DOout_S1(0); FAout_1(0); DOin_1(n/4); FAin_1(n/4); DOin_S1(n/2); DOout_1(0); FAout_1(0); DOout_S1(0); delay(n/4);
/*41*/  REin_S1(n/4); LAin_S1(n/4); FAin_S1(n/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1(n/4); LAin_S1(n/4); FAin_S1(n/4); FAout_S1(0); REin_S1(n/4); DOout_1(0); FAin_S1(n/4); FAout_S1(0); LAout_S1(0); DOin_1(n/4); LAin_S1(n/4); REout_S1(0); FAin_S1(n/4); FAout_S1(0); LAout_S1(0); REin_S1(n/4); LAin_S1(n/4); REout_S1(0); FAin_S1(n/4); DOout_1(0); REin_S1(n/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1(n/4);
/*42*/  DOin_1(0); LAin_1(n/4); FAin_1(n/4); LAout_1(0); FAout_1(0); RE_S1(n/4); LAin_1(n/4); FAin_1(n/4); DOout_1(0); FAout_1(0); REin_S1(n/4); LAout_1(0); DOin_1(n/4); LAin_1((n/2)+(n/4)); REout_S1(n/4); REin_S1(0); FAin_1(0); DOin_2(n/4); REout_S1(0); FAout_1(0); DOout_2(n/4); DOout_1(0); LAout_1(0); REin_S1(0); FAin_1(0); DOin_2(n/4); REout_S1(0); FAout_1(0); DOout_2(0); delay(n/4);

/*43*/  FA_2(n/2); LAin_S1(n/4); DOin_S2(n/4); LAout_S1(n/4); DOout_S2(0); LAin_S1(n/4); FAin_2(n); DOin_S2(n/4); LAout_S1(n/4); LAin_S1(n/4); DOout_S2(n/4); LAout_S1(0); FAout_2(0); DO_S2(n/4); delay(n/4);
/*44*/  LAin_1(n/2); DOin_2(n/4); LAout_1(0); DOout_2(0); FA_2(n/2); LAin_1(n/4); DOin_2(n/2); FAin_2((n)+(n/4)); LAout_1(0); DOout_2(n/4); FAout_2(0); delay(n/4);
/*45*/  SOL_S1(n/2); RE_S2(n/4); LA_S1(n/2); RE_S2(n/4); DOin_2(n/2); REin_S2(n/2); SOL_S1(n/4); delay(n/4); DOout_2(0); REout_S2(0); LA_S1(n/4); REin_S2(n/4); SOLin_S1(n/4); REout_S2(0); SOLout_S1(0); delay(n/4);
/*46*/  SOLin_1(n/2); LAin_S1(n/4); LAout_S1(0); REin_S2(n/2); SOLout_1(0); LAin_S1(n/4); REout_S2(0); SOLin_1(n/2); REin_S2(n); SOLout_1(0); LAout_S1((n/2)+(n/4)); REout_S2(0); delay(n/4);
/*47*/  FA_S1(n/2); DO_S2(n/4); SOL_S1(n/2); DOin_S2(n/4); LAin_S1(n/4); DOout_S2(0); LAout_S1((n/2)+(n/4)); DO_S2(n/2); SOL_S1(n/4); DO_S2(n/4); FA_S1(n/4); delay(n/4);
/*48*/  FAin_1(n/2); DOin_S2(n/4); FAout_1(0); SOLin_S1((n/2)+(n/4)); SOLout_S1(0); DOout_S2(0); RE_S1(n/4); delay(n/4); DO_S1((n)+(n/2)+(n/4)); delay(n/4);
/*49*/  REin_S1(n/2); LA_S1(n/4); FAin_S1(n/2); REout_S1(0); LAin_S1(n/4); REin_S1(n/2); LAout_S1(n/4); FAout_S1(n/4); REout_S1(0); LAin_S1(n/4); FAin_S1(n/4); REin_S1(n/2); FAout_S1(0); LAout_S1(n/4); REout_S1(0); delay(n/4);
/*50*/  FAin_1(n/2); DOin_2(n/4); LAin_1(n/4); DOout_2(n/4); FAout_1(0); LAout_1(0); DOin_2(n/4); FAin_1(n/2); FAin_2((n)+(n/2)); FAout_1(0); DOout_2(0); FAout_2(0); delay(n/2);

//Igual que de líneas 35 a 42
/*35*/  DOin_1(n/4); DOin_S1(n/4); FAin_S1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/2); FAin_S1(n/4); DOout_1(0); LAout_S1(n/4); DOin_S1(0); DOin_1(n/4); DOout_S1(0); FAout_S1(n/4); DOin_S1(n/4); DOout_1(0); FAin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/4); FAin_S1(n/4); LAout_S1(0); DOin_S1(n/4); DOout_1(0); FAout_S1(n/4); DOout_S1(n);
/*36*/  DOin_1(n/4); DO_S1(n/4); FA_1(n/4); SOLin_S1(n/2); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); SOLout_S1(0); DOin_1(n/4); DOout_S1(0); FAout_1(n/4); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); DOout_S1(0); FAout_1(0); DOin_1(n/4); FAin_1(n/4); DOin_S1(n/2); DOout_1(0); DOout_S1(0); FAout_1(0); delay(n/2);
/*37*/  DOin_1(0); REin_S1(n/4); DOin_2(n/4); DOout_1(0); FAin_1(n/4); DOout_2(0); DOin_1(n/4); DOout_1(0); FAout_1(0); DOin_2(n/4); REout_S1(0); DOin_1(n/4); DOout_2(0); FAin_1(n/4); DOout_1(0); DOin_2(n/4); DOout_2(0); DOin_1(n/4); FAout_1(0); DOin_2(n/4); DOout_1(0); DOout_2(0); FA_1(n/4); DOin_1(0); RE_S1(n/4); DO_2(n/4); REin_S1(n/4); DOout_1(0); FAin_S1(n/4); REout_S1(0); FAout_1(0); DO_2(n/4);
/*38*/  DOin_2(0); DOin_1(n/4); DOout_2(0); FAin_1(n/4); DOout_1(0); LAin_S1(n/4); DOout_S1(0); FAout_1(0); LAout_S1(0); DOin_1(n/4); DOin_S1(n/4); FAin_1(n/4); DOout_1(0); LAin_S1(n/4); DOout_S1(0); FAout_1(0); LAout_S1(0); DOin_1(n/4); DOin_S1(n/4); FAin_1(n/4); DOout_1(0); DOout_S1(0); FAout_1(0); LA_S1(n/4); DO_1(n/4); DO_S1(n/4); DO_1(n/4); DO_S1(n/4);
/*39*/  DOin_1(n/4); DOin_S1(n/4); FAin_S1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/2); FAin_S1(n/4); DOout_1(0); LAout_S1(0); DOin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(n/4); DOin_S1(n/4); DOout_1(0); FAin_S1(n/4); DOin_1(n/4); DOout_S1(0); FAout_S1(0); LAin_S1(n/4); FAin_S1(n/4); LAout_S1(0); DOin_S1(n/4); DOout_1(0); FAout_S1(n/4);
/*40*/  DOin_1(n/4); DO_S1(n/4); FA_1(n/4); SOLin_S1(n/2); FAin_1(n/4); DOout_1(0); DOin_S1(n/4); SOLout_S1(0); DOin_1(n/4); DOout_S1(0); FAout_1(n/4); FAin_1(n/4); DOin_S1(0); DOout_1(n/4); DOout_S1(0); FAout_1(0); DOin_1(n/4); FAin_1(n/4); DOin_S1(n/2); DOout_1(0); FAout_1(0); DOout_S1(0); delay(n/4);
/*41*/  REin_S1(n/4); LAin_S1(n/4); FAin_S1(n/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1(n/4); LAin_S1(n/4); FAin_S1(n/4); FAout_S1(0); REin_S1(n/4); DOout_1(0); FAin_S1(n/4); FAout_S1(0); LAout_S1(0); DOin_1(n/4); LAin_S1(n/4); REout_S1(0); FAin_S1(n/4); FAout_S1(0); LAout_S1(0); REin_S1(n/4); LAin_S1(n/4); REout_S1(0); FAin_S1(n/4); DOout_1(0); REin_S1(n/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1(n/4);
/*42*/  DOin_1(0); LAin_1(n/4); FAin_1(n/4); LAout_1(0); FAout_1(0); RE_S1(n/4); LAin_1(n/4); FAin_1(n/4); DOout_1(0); FAout_1(0); REin_S1(n/4); LAout_1(0); DOin_1(n/4); LAin_1((n/2)+(n/4)); REout_S1(n/4); REin_S1(0); FAin_1(0); DOin_2(n/4); REout_S1(0); FAout_1(0); DOout_2(n/4); DOout_1(0); LAout_1(0); REin_S1(0); FAin_1(0); DOin_2(n/4); REout_S1(0); FAout_1(0); DOout_2(0); delay(n/4);




}

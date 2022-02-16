
#include "Parameters.h"
#include "Utils.h"
#include <Servo.h>
#include <SPI.h>


void mix(double n){


  //Estrellita
  DO_1(n/2); DO_1(n/2); SOL_1(n/2); SOL_1(n/2); LA_1(n/2); LA_1(n/2); SOL_1(n/2);
  delay(n);
  FA_1(n/2); FA_1(n/2); MI_1(n/2); MI_1(n/2); RE_1(n/2); RE_1(n/2); DO_1(n/2);
  delay(n);
  SOL_1(n/2); SOL_1(n/2); FA_1(n/2); FA_1(n/2); MI_1(n/2); MI_1(n/2); RE_1(n/2);
  delay(n);
  SOL_1(n/2); SOL_1(n/2); FA_1(n/2); FA_1(n/2); MI_1(n/2); MI_1(n/2); RE_1(n/2);


  delay(2*n);

  //Cumpleaños

   DO_1(n/2); DO_1(n/2); RE_1(2*n); DO_1(n); FA_1(n); MI_1(2*n);
  delay(n/2);
  DO_1(n/2); DO_1(n/2); RE_1(2*n); DO_1(n); SOL_1(n); FA_1(2*n);
  delay(n/2);
  DO_1(n/2); DO_1(n/2); DO_2(2*n); LA_1(n); FA_1(n); MI_1(n); RE_1(n);
  delay(n/2);
  SI_1(n/2); SI_1(n/2); LA_1(2*n); FA_1(n); SOL_1(n); FA_1(n);

  delay(n);

/*1*/   MI_1(n);SOL_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);LA_1(n/2);MI_1(n/2);RE_1(n/4);
/*2*/   MI_1(n);SI_1((n/2)+(n/4));MI_1(n/2);MI_1(n/4);DO_2(n/2);SI_1(n/2);SOL_1(n/2);
/*3*/   MI_1(n/2);SI_1(n/2);MI_2(n/2);MI_1(n/4);RE_1(n/2);RE_1(n/4);DO_1(n/2);FA_1(n/2);MI_1((n/2)+(2*n));//FA_1((n/2)+(2*n)); 
/*4*/   delay(2*n);


//This Love


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

//Mario

/*1*/   MI_2(n/4);MI_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_2(n/4);MI_2(n/2);SOL_2(n/2);delay(n/2);SOL_1(n/2);delay(n/2);
/*2*/   DO_2(n/4);delay(n/2);SOL_1(n/4);delay(n/2);MI_1(n/2);delay(n/2);LA_1(n/4);delay(n/4);SI_1(n/4);delay(n/4);LA_S1(n/4);LA_1(n/4);delay(n/4);
/*3*/   SOL_1(n/4);delay(n/2);MI_2(n/4);SOL_2(n/2);LA_2(n/4);delay(n/4);FA_2(n/4);SOL_2(n/2);MI_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);SI_1(n/4);delay(n/2);
        delay(n/2);

/*6*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);SOL_S1(n/4);LA_1(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);DO_2(n/4);RE_2(n/4);
/*7*/   DO_1(n/2);SOL_2(n/4);FA_S2(n/4);FA_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_3(n/4);delay(n/4);DO_3(n/4);delay(n/4);SOL_1(n/4);delay(n/4);


/*10*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);SOL_1(n/4);delay((n/2)+(n/4));
/*11*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);delay(n/2);DO_1(n/4);delay(n/2);DO_1(n/4);delay(n/4);
/*12*/  DO_2(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);delay(n/4);DO_2(n/4);RE_2(n/4);delay(n/4);MI_2(n/4);DO_2(n/4);delay(n/4);LA_1(n/4);SOL_1(n/4);delay((n/2)+(n/4));
/*13*/  MI_2(n/4);MI_2(n/4);delay(n/4);MI_2(n/4);delay(n/4);DO_2(n/4);MI_2(n/2);SOL_2(n/2);delay(n/2);SOL_1(n/2);delay(n/2);



//Just


  //Coro
  delay(n); DO_2(n/2); DO_2(n/2); FA_2(n/2); SOL_2(n); LA_2((n/2)+(n)+(n/2));//24
  delay((n/2)+(2*n)+(n)+(n/2));
  DO_2(n/2); FA_2(n/2); SOL_2(n/2); delay(n/2); LA_2((n/2)+(n/2));
  SOL_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n/2));
  delay(n); FA_2(n/2); FA_2(n/2); SOL_2(n/2); LA_2((n/2)+(n/2));
  SOL_2((n)+(n/2)); delay((n)+(n/2)); LA_S2((n/2)+(n/2));
  LA_2(n); FA_2((n/2)+(n/2)); SOL_2(n); FA_2((n/2)+(n)+(n/2));
  delay((n/2)+(2*n)+(n)+(n/2));

//California n=550

/*11*/  FA_2((n+200)/2); LAin_S1((n+200)/4); DOin_S2((n+200)/4); LAout_S1((n+200)/4); DOout_S2(0); LAin_S1((n+200)/4); FAin_2((n+200)); DOin_S2((n+200)/4); LAout_S1((n+200)/4); LAin_S1((n+200)/4); DOout_S2((n+200)/2); LAout_S1(0); FAout_2(0); DO_S2((n+200)/4); delay((n+200)/4); //Revisar Lain:S1(? )7 atras
/*12*/  LAin_1((n+200)/2); DOin_2((n+200)/4); LAout_1(0); DOout_2(0); FA_2((n+200)/2); LAin_1((n+200)/4); DOin_2((n+200)/2); FAin_2(((n+200)/2)+((n+200)/4)); LAout_1(0); DOout_2((n+200)/4); FAout_2(0); delay((n+200)/4);
/*13*/  SOL_S1((n+200)/2); RE_S2((n+200)/4); LA_S1((n+200)/2); RE_S2((n+200)/4); DOin_2((n+200)/2); REin_S2((n+200)/2); SOL_S1((n+200)/4); delay((n+200)/4); DOout_2(0); REout_S2(0); LA_S1((n+200)/4); REin_S2((n+200)/4); SOLin_S1((n+200)/4); REout_S2(0); SOLout_S1(0); delay((n+200)/4);
/*14*/  delay((n+200)/2); SOLin_1(0); LAin_S1((n+200)/4); LAout_S1(0); REin_S2((n+200)/2); SOLout_1(0); LAin_S1((n+200)/4); REout_S2(0); SOLin_1((n+200)/2); REin_S2((n+200)); SOLout_1(0); LAout_S1(((n+200)/4)+(n/8)); REout_S2(0); delay((n+200)/4);
/*15*/  FA_S1((n+200)/2); DO_S2((n+200)/4); SOL_S1((n+200)/2); DOin_S2((n+200)/4); LAin_S1((n+200)/4); DOout_S2(((n+200)/2)+((n+200)/4)); LAout_S1(0); DO_S2((n+200)/2); SOL_S1((n+200)/4); DO_S2((n+200)/4); FA_S1((n+200)/4); delay((n+200)/4);
/*16*/  FAin_1((n+200)/2); DOin_S2((n+200)/4); FAout_1(0); SOLin_S1((((n+200)/2)+(n/4))); SOLout_S1(0); DOout_S2(0); RE_S1((n+200)/4); delay(n/4); DO_S1(((n+200))+((n+200)/2)+((n+200)/4)); delay((n+200)/4);
/*17*/  REin_S1((n+200)/2); LA_S1((n+200)/4); FAin_S1((n+200)/2); REout_S1(0); LAin_S1((n+200)/4); REin_S1((n+200)/2); LAout_S1((n+200)/4); FAout_S1((n+200)/4); REout_S1(0); LAin_S1((n+200)/4); FAin_S1((n+200)/4); REin_S1((n+200)/4); FAout_S1(0); LAout_S1((n+200)/2); REout_S1(0); delay((n+200)/4);
/*18*/  FAin_1((n+200)/2); DOin_2((n+200)/4); LAin_1((n+200)/4); DOout_2((n+200)/4); FAout_1(0); LAout_1(0); DOin_2((n+200)/4); FAin_1((n+200)/2); FAin_2(((n+200))+((n+200)/2)); FAout_1(0); DOout_2(0); FAout_2(0); delay((n+200)/2);

/*39*/  DOin_1((n+200)/4); DOin_S1((n+200)/4); FAin_S1((n+200)/4); DOout_S1(0); FAout_S1(0); LAin_S1((n+200)/2); FAin_S1((n+200)/4); DOout_1(0); LAout_S1(0); DOin_S1((n+200)/4); DOin_1((n+200)/4); DOout_S1(0); FAout_S1((n+200)/4); DOin_S1((n+200)/4); DOout_1(0); FAin_S1((n+200)/4); DOin_1((n+200)/4); DOout_S1(0); FAout_S1(0); LAin_S1((n+200)/4); FAin_S1((n+200)/4); LAout_S1(0); DOin_S1((n+200)/4); DOout_1(0); FAout_S1((n+200)/4);
/*40*/  DOin_1((n+200)/4); DO_S1((n+200)/4); FA_1((n+200)/4); SOLin_S1((n+200)/2); FAin_1((n+200)/4); DOout_1(0); DOin_S1((n+200)/4); SOLout_S1(0); DOin_1((n+200)/4); DOout_S1(0); FAout_1((n+200)/4); FAin_1((n+200)/4); DOin_S1(0); DOout_1((n+200)/4); DOout_S1(0); FAout_1(0); DOin_1((n+200)/4); FAin_1((n+200)/4); DOin_S1((n+200)/2); DOout_1(0); FAout_1(0); DOout_S1(0); delay((n+200)/4);
/*41*/  REin_S1((n+200)/4); LAin_S1((n+200)/4); FAin_S1((n+200)/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1((n+200)/4); LAin_S1((n+200)/4); FAin_S1((n+200)/4); FAout_S1(0); REin_S1((n+200)/4); DOout_1(0); FAin_S1((n+200)/4); FAout_S1(0); LAout_S1(0); DOin_1((n+200)/4); LAin_S1((n+200)/4); REout_S1(0); FAin_S1((n+200)/4); FAout_S1(0); LAout_S1(0); REin_S1((n+200)/4); LAin_S1((n+200)/4); REout_S1(0); FAin_S1((n+200)/4); DOout_1(0); REin_S1((n+200)/4); REout_S1(0); FAout_S1(0); LAout_S1(0); DOin_1((n+200)/4);
/*42*/  DOin_1(0); LAin_1((n+200)/4); FAin_1((n+200)/4); LAout_1(0); FAout_1(0); RE_S1((n+200)/4); LAin_1((n+200)/4); FAin_1((n+200)/4); DOout_1(0); FAout_1(0); REin_S1((n+200)/4); LAout_1(0); DOin_1((n+200)/4); LAin_1(((n+200)/2)+((n+200)/4)); REout_S1((n+200)/4); REin_S1(0); FAin_1(0); DOin_2((n+200)/4); REout_S1(0); FAout_1(0); DOout_2((n+200)/4); DOout_1(0); LAout_1(0); REin_S1(0); FAin_1(0); DOin_2((n+200)/4); REout_S1(0); FAout_1(0); DOout_2(0); delay((n+200)/4);


  
}

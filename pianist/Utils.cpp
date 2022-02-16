//Implementacion métodos

#include "Parameters.h"
#include "Utils.h"
#include <Servo.h> 
#include <SPI.h>


Servo DO1, RE1, MI1, FA1, SOL1, LA1, SI1, DOS1, RES1, FAS1, SOLS1, LAS1,
DO2, RE2, MI2, FA2, SOL2, LA2, SI2, DOS2, RES2, FAS2, SOLS2, LAS2, DO3; 

int rel=100; //velocidad de Retroceso
//Vel: Tiempo tecla sostenida

void setupPins() {
  
//Blancas Octava 1
   DO1.attach(Do1); 
   RE1.attach(Re1);
   MI1.attach(Mi1); 
   FA1.attach(Fa1);
   SOL1.attach(Sol1); 
   LA1.attach(La1);
   SI1.attach(Si1);
     
//Sostenidos Octava 1
   DOS1.attach(Do_S1); 
   RES1.attach(Re_S1);
   FAS1.attach(Fa_S1); 
   SOLS1.attach(Sol_S1);
   LAS1.attach(La_S1);

//Blancas Octava 2   
   DO2.attach(Do2);
   RE2.attach(Re2);
   MI2.attach(Mi2); 
   FA2.attach(Fa2);
   SOL2.attach(Sol2); 
   LA2.attach(La2);
   SI2.attach(Si2);

//Sostenidos Octava 2
   DOS2.attach(Do_S2); 
   RES2.attach(Re_S2);
   FAS2.attach(Fa_S2); 
   SOLS2.attach(Sol_S2);
   LAS2.attach(La_S2);

   DO3.attach(Do3);

}

void condIniciales(){

//Blancas Octava 1  
DO1.write(45);
RE1.write(45);
MI1.write(45);
FA1.write(45);
SOL1.write(45);
LA1.write(45);
SI1.write(45);

//Sostenidos Octava 1
//DOS1.write(38);
//RES1.write(40);
//FAS1.write(40);
//SOLS1.write(40);
//LAS1.write(38);
DOS1.write(45);
RES1.write(45);
FAS1.write(45);
SOLS1.write(45);
LAS1.write(45);

//Blancas Octava 2
DO2.write(45);
RE2.write(45);
MI2.write(45);
FA2.write(45);
SOL2.write(45);
LA2.write(45);
SI2.write(45);

//Sostenidos Octava 2
DOS2.write(45);
RES2.write(45);
FAS2.write(45);
SOLS2.write(45);
LAS2.write(35);

//DOS2.write(20);
//RES2.write(35);
//FAS2.write(40);
//SOLS2.write(40);
//LAS2.write(34);

DO3.write(45);

}


///////Blancas Octava 1//////

void DO_1(int vel){ DO1.write(0); delay(vel); DO1.write(45); delay(rel); }
void RE_1(int vel){ RE1.write(0); delay(vel); RE1.write(45); delay(rel); }
void MI_1(int vel){ MI1.write(0); delay(vel); MI1.write(45); delay(rel); }
void FA_1(int vel){ FA1.write(0); delay(vel); FA1.write(45); delay(rel); }
void SOL_1(int vel){ SOL1.write(0); delay(vel); SOL1.write(45); delay(rel); }
void LA_1(int vel){ LA1.write(0); delay(vel); LA1.write(45); delay(rel); }
void SI_1(int vel){ SI1.write(0); delay(vel); SI1.write(45); delay(rel); }

//////Sostenidos Octava 1//////

void DO_S1(int vel){ DOS1.write(0); delay(vel); DOS1.write(38); delay(rel); }
void RE_S1(int vel){ RES1.write(0); delay(vel); RES1.write(40); delay(rel); }
void FA_S1(int vel){ FAS1.write(0); delay(vel); FAS1.write(40); delay(rel); }
void SOL_S1(int vel){ SOLS1.write(0); delay(vel); SOLS1.write(40); delay(rel); }
void LA_S1(int vel){ LAS1.write(0); delay(vel); LAS1.write(38); delay(rel); }

///////Blancas Octava 2//////

void DO_2(int vel){ DO2.write(0); delay(vel); DO2.write(45); delay(rel); }
void RE_2(int vel){ RE2.write(0); delay(vel); RE2.write(45); delay(rel); }
void MI_2(int vel){ MI2.write(0); delay(vel); MI2.write(45); delay(rel); }
void FA_2(int vel){ FA2.write(0); delay(vel); FA2.write(45); delay(rel); }
void SOL_2(int vel){ SOL2.write(0); delay(vel); SOL2.write(45); delay(rel); }
void LA_2(int vel){ LA2.write(0); delay(vel); LA2.write(45); delay(rel); }
void SI_2(int vel){ SI2.write(0); delay(vel); SI2.write(45); delay(rel); }

//////Sostenidos Octava 2//////

void DO_S2(int vel){ DOS2.write(0); delay(vel); DOS2.write(20); delay(rel); }
void RE_S2(int vel){ RES2.write(0); delay(vel); RES2.write(35); delay(rel); }
void FA_S2(int vel){ FAS2.write(0); delay(vel); FAS2.write(40); delay(rel); }
void SOL_S2(int vel){ SOLS2.write(0); delay(vel); SOLS2.write(40); delay(rel); }
void LA_S2(int vel){ LAS2.write(0); delay(vel); LAS2.write(34); delay(rel); }

void DO_3(int vel){ DO3.write(0); delay(vel); DO3.write(45); delay(rel); }


////SOLO ENTRADAS////
//delay(vel) Tiempo en que está sostenida la tecla

///////Blancas Octava 1//////

void DOin_1(int vel){ DO1.write(0); delay(vel); }
void REin_1(int vel){ RE1.write(0); delay(vel); }
void MIin_1(int vel){ MI1.write(0); delay(vel); }
void FAin_1(int vel){ FA1.write(0); delay(vel); }
void SOLin_1(int vel){ SOL1.write(0); delay(vel); }
void LAin_1(int vel){ LA1.write(0); delay(vel); }
void SIin_1(int vel){ SI1.write(0); delay(vel); }

//////Sostenidos Octava 1//////

void DOin_S1(int vel){ DOS1.write(0); delay(vel); }
void REin_S1(int vel){ RES1.write(0); delay(vel); }
void FAin_S1(int vel){ FAS1.write(0); delay(vel); }
void SOLin_S1(int vel){ SOLS1.write(0); delay(vel); }
void LAin_S1(int vel){ LAS1.write(0); delay(vel); }

///////Blancas Octava 2//////

void DOin_2(int vel){ DO2.write(0); delay(vel); }
void REin_2(int vel){ RE2.write(0); delay(vel); }
void MIin_2(int vel){ MI2.write(0); delay(vel); }
void FAin_2(int vel){ FA2.write(0); delay(vel); }
void SOLin_2(int vel){ SOL2.write(0); delay(vel); }
void LAin_2(int vel){ LA2.write(0); delay(vel); }
void SIin_2(int vel){ SI2.write(0); delay(vel); }

//////Sostenidos Octava 2//////

void DOin_S2(int vel){ DOS2.write(0); delay(vel); }
void REin_S2(int vel){ RES2.write(0); delay(vel); }
void FAin_S2(int vel){ FAS2.write(0); delay(vel); }
void SOLin_S2(int vel){ SOLS2.write(0); delay(vel); }
void LAin_S2(int vel){ LAS2.write(0); delay(vel); }
void DOin_3(int vel){ DO3.write(0);   delay(vel); }

//////////////SOLO SALIDAS////////////////////////

//delay(vel) Tiempo en que tarde en entrar siguiente tecla

///////Blancas Octava 1//////

void DOout_1(int vel){ DO1.write(45); delay(vel); }
void REout_1(int vel){ RE1.write(45); delay(vel); }
void MIout_1(int vel){ MI1.write(45); delay(vel); }
void FAout_1(int vel){ FA1.write(45); delay(vel); }
void SOLout_1(int vel){ SOL1.write(45); delay(vel); }
void LAout_1(int vel){ LA1.write(45); delay(vel); }
void SIout_1(int vel){ SI1.write(45); delay(vel); }

//////Sostenidos Octava 1//////

void DOout_S1(int vel){ DOS1.write(40); delay(vel); }
void REout_S1(int vel){ RES1.write(40); delay(vel); }
void FAout_S1(int vel){ FAS1.write(40); delay(vel); }
void SOLout_S1(int vel){ SOLS1.write(40); delay(vel); }
void LAout_S1(int vel){ LAS1.write(40); delay(vel); }

///////Blancas Octava 2//////

void DOout_2(int vel){  DO2.write(45); delay(vel); }
void REout_2(int vel){  RE2.write(45); delay(vel); }
void MIout_2(int vel){  MI2.write(45); delay(vel); }
void FAout_2(int vel){  FA2.write(45); delay(vel); }
void SOLout_2(int vel){ SOL2.write(45); delay(vel); }
void LAout_2(int vel){ LA2.write(45);  delay(vel); }
void SIout_2(int vel){ SI2.write(45); delay(vel); }

//////Sostenidos Octava 2//////

void DOout_S2(int vel){ DOS2.write(40); delay(vel); }
void REout_S2(int vel){ RES2.write(45); delay(vel); }
void FAout_S2(int vel){ FAS2.write(40);  delay(vel); }
void SOLout_S2(int vel){ SOLS2.write(40); delay(vel); }
void LAout_S2(int vel){ LAS2.write(35); delay(vel); }

void DOout_3(int vel){ DO3.write(45);  delay(vel); }

#include "Utils.h"
#include "Parameters.h"
#include <Servo.h> 

int n;
bool play= false;
int hacer;  
char dato;
int ca;

 
void setup() 
{                         
    Serial.begin(9600);
 
 setupPins();
 condIniciales(); 


 //delay(1000);
 //estrellita(n);
//cumpleanos(n);
//
//justTheWayYouAre(n);
//california(n);
//thisLove(n);
//crazyFrog(n);
//marioMain(n);
//mix(n);
//DO_S1(n);
//LA_S1(n);
//DO_S2(n);
//RE_S2(n);
//LA_S2(n);
//REin_1(200);
//REout_1(200);
//DO_1(200);
//RE_1(200);
//MI_1(200);
//FA_1(200);
//SOL_1(200);
//LA_1(200);
//SI_1(200);



//DO_2(200);
//RE_2(200);
//MI_2(200);
//FA_2(200);
//SOL_2(200);
//LA_2(200);
//SI_2(200);
//DO_3(200);
//

//digitalWrite(interrupcion, LOW);
}
  

void loop(){
//    DO_1(n);
//    RE_1(n);
//    MI_1(n);
//    FA_1(n);
//    SOL_1(n);
//    LA_1(n);
//    SI_1(n);
//
//    DO_2(n);
//    RE_2(n);
//    MI_2(n);
//    FA_2(n);
//    SOL_2(n); 
 //   LA_2(n);
//    SI_2(n);
//    DO_3(n);
//
//    DO_S1(n);
//    RE_S1(n);
//    FA_S1(n);
//    SOL_S1(n);
//    LA_S1(n);
//
//    DO_S2(n);
//    RE_S2(n);
//    FA_S2(n);
//    SOL_S2(n);
//    LA_S2(n);





if (Serial.available()>=1)
          { 
             dato= Serial.read();
             Serial.println(dato);
          }
      if (dato== '1'){ n=650;}
    else if(dato== '2'){ n=500;}
    else if(dato== '3'){ n=350;}
    else if(dato== '4'){ n=250;}
    else if(dato== '5'){ n=250;}
    
    else if(dato== 'a'){hacer=1;} //estrellita
    else if(dato== 'b'){hacer=2;} //cumpleaños 
    else if(dato== 'c'){hacer=3;} // just the way you are
    else if(dato== 'd'){hacer=4;} // california
    else if(dato== 'e'){hacer=5;} // super mario
    else if(dato== 'f'){hacer=6;} // crazy frog
    else if(dato== 'g'){hacer=7;} // this love
    else if(dato== 'h'){hacer=8;} // blancas

    else if(dato== 'i'){hacer=9;} //negras
    else if(dato== 'j'){hacer=10;} // mix 
    
    else if(dato== '6'){ play=true;}
    else if(dato== '7'){ play=false;}// digitalWrite(interrupcion, HIGH);}
    
//do{
  if(play==true){
    switch(hacer){
    case 1:
    estrellita(n);
    if(play==false){
      break;
    }
    break;

    case 2:
    cumpleanos(n);
    //DO_1(n);
    break;

    case 3:
    justTheWayYouAre(n);
    //DO_1(n);
    break;
    
    case 4:
    california(n);
    //DO_1(n);
    break;

    case 5:
    marioMain(n);
    break;

    case 6:
    crazyFrog(n);
    break;

    case 7:
    thisLove(n);
    break;
    
    case 8: //blancas
    DO_1(n);
    RE_1(n);
    MI_1(n);
    FA_1(n);
    SOL_1(n);
    LA_1(n);
    SI_1(n);

    DO_2(n);
    RE_2(n);
    MI_2(n);
    FA_2(n);
    SOL_2(n); 
    LA_2(n);
    SI_2(n);
    DO_3(n);
    break;

    case 9: //negras
    DO_S1(n);
    RE_S1(n);
    FA_S1(n);
    SOL_S1(n);
    LA_S1(n);

    DO_S2(n);
    RE_S2(n);
    FA_S2(n);
    SOL_S2(n);
    LA_S2(n);
    break;

    case 10:
    mix(n); //dejar fijo?
    break;
    }
}




delay(100);
}

 void detener(){
//      DO_1(0);
//      RE_1(0);
//      MI_1(0);
//      FA_1(0);
//      SOL_1(0);
//      LA_1(0);
//      SI_1(0);
//  
//      DO_2(0);
//      RE_2(0);
//      MI_2(0);
//      FA_2(0);
//      SOL_2(0); 
//      LA_2(0);
//      SI_2(0);
//      DO_3(0);
//  
//      DO_S1(0);
//      RE_S1(0);
//      FA_S1(0);
//      SOL_S1(0);
//      LA_S1(0);
//  
//      DO_S2(0);
//      RE_S2(0);
//      FA_S2(0);
//      SOL_S2(0);
//      LA_S2(0);
//  
Serial.println("s");
 }



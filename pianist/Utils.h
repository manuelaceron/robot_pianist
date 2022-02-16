//Declaración de métodos

#ifndef __UTILS_H__
#define __UTIL_H__

  //Asignación de servos como objetos SERVO
	void setupPins();                     
  
  //Condiciones iniciales para todos los motores
	void condIniciales(); 

  //Canciones
  void estrellita(double n);
  void cumpleanos(double n);
  void justTheWayYouAre (double n);
  void california(double n);
  void dragon_ball_gt(double n);
  void thisLove(double n);
  void marioMain(double n);
  void crazyFrog(double n);
  void mix(double n);
//  void prueba1(double n);
//  void prueba2(double n);
//  void prueba3(double n);
//  void prueba4(double n);
//  void prueba5(double n);
//  void prueba6(double n);
//  void prueba7(double n);
//  void prueba8(double n);
//   void prueba9(double n);
//  void prueba10(double n);
//  void prueba11(double n);
//  void prueba12(double n);
//  void prueba13(double n);
//  void prueba14(double n);
//  void prueba15(double n);
//  void prueba16(double n);
//  void prueba17(double n);
//  void prueba18(double n);
//  void prueba19(double n);
//  void prueba20(double n);
//  void prueba21(double n);
//  void prueba22(double n);
//  void prueba23(double n);
//  void prueba24(double n);
//   void prueba25(double n);
//  void prueba26(double n);
//  void prueba27(double n);
//  void prueba28(double n);
//  void prueba29(double n);
//  void prueba30(double n);
//  void prueba31(double n);
//  void prueba32(double n);
//   void prueba33(double n);
//  void prueba34(double n);
//  void prueba35(double n);
//  void prueba36(double n);
//  void prueba37(double n);
//  void prueba38(double n);
//  void prueba39(double n);
//  void prueba40(double n);
//  void prueba41(double n);
//  void prueba42(double n);
//  void prueba43(double n);
//  void prueba44(double n);
//   void prueba45(double n);
//  void prueba46(double n);
//  void prueba47(double n);
//  void prueba48(double n);
//  void prueba49(double n);
//  void prueba50(double n);
//  void prueba51(double n);
//  void prueba52(double n);
//   void prueba53(double n);
//  void prueba54(double n);
//  void prueba55(double n);
//  void prueba56(double n);
//  void prueba57(double n);
//  void prueba58(double n);
//  void prueba59(double n);
//  void prueba60(double n);
//  void prueba61(double n);
//  void prueba62(double n);
//  void prueba63(double n);
//  void prueba64(double n);
   

  //Movimientos completos
  
  void DO_1(int vel);
  void RE_1(int vel);
  void MI_1(int vel);
  void FA_1(int vel);
  void SOL_1(int vel);
  void LA_1(int vel);
  void SI_1(int vel);

  void DO_S1(int vel);
  void RE_S1(int vel);
  void FA_S1(int vel);
  void SOL_S1(int vel);
  void LA_S1(int vel);

  void DO_2(int vel);
  void RE_2(int vel);
  void MI_2(int vel);
  void FA_2(int vel);
  void SOL_2(int vel);
  void LA_2(int vel);
  void SI_2(int vel);

  void DO_S2(int vel);
  void RE_S2(int vel);
  void FA_S2(int vel);
  void SOL_S2(int vel);
  void LA_S2(int vel);

  void DO_3(int vel);

  //Movimientos de entrada
  
  void DOin_1(int vel);
  void REin_1(int vel);
  void MIin_1(int vel);
  void FAin_1(int vel);
  void SOLin_1(int vel);
  void LAin_1(int vel);
  void SIin_1(int vel);

  void DOin_S1(int vel);
  void REin_S1(int vel);
  void FAin_S1(int vel);
  void SOLin_S1(int vel);
  void LAin_S1(int vel);

  void DOin_2(int vel);
  void REin_2(int vel);
  void MIin_2(int vel);
  void FAin_2(int vel);
  void SOLin_2(int vel);
  void LAin_2(int vel);
  void SIin_2(int vel);

  void DOin_S2(int vel);
  void REin_S2(int vel);
  void FAin_S2(int vel);
  void SOLin_S2(int vel);
  void LAin_S2(int vel);
  
  void DOin_3(int vel);

  //Movimientos de Salida
  
  void DOout_1(int vel);
  void REout_1(int vel);
  void MIout_1(int vel);
  void FAout_1(int vel);
  void SOLout_1(int vel);
  void LAout_1(int vel);
  void SIout_1(int vel);

  void DOout_S1(int vel);
  void REout_S1(int vel);
  void FAout_S1(int vel);
  void SOLout_S1(int vel);
  void LAout_S1(int vel);

  void DOout_2(int vel);
  void REout_2(int vel);
  void MIout_2(int vel);
  void FAout_2(int vel);
  void SOLout_2(int vel);
  void LAout_2(int vel);
  void SIout_2(int vel);

  void DOout_S2(int vel);
  void REout_S2(int vel);
  void FAout_S2(int vel);
  void SOLout_S2(int vel);
  void LAout_S2(int vel);
  
  void DOout_3(int vel);
  
#endif


/*
 *                    Detectores industriales de presencia y proximidad
 * 
 * Cadavid Piñero, Leopoldo
 * Penalva Martínez, Franciso
 * Pérez Vilaplana, Ignacio
 * Salcedo Salcedo, Raquel
 * 
 *                                                                                    Marzo, 2021  
 */

 #ifndef INTERRUPTIONS_H
 #define INTERRUPTIONS_H

 #include <Arduino.h>

 //Pines de interrupción 
 const int pinISR = 2;

 //Variables que pueden cambiar de estado entre ficheros
 volatile bool ISR1 = false;
 volatile bool MODO1 = false;
 volatile bool MODO2 = false;

 //Funciones de interrupción:
 void ISR_();

 void setISR(){
    attachInterrupt(digitalPinToInterrupt(pinISR),ISR_,RISING);
 }

 void ISR_(){
    ISR1 = true;
 }
 


 #endif //INTERRUPTIONS_H

 

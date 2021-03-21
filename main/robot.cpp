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

 #include "robot.h"

 Robot::Robot(){
    pinMode(pinL1, OUTPUT); //Pin a led verde
    pinMode(pinL2, OUTPUT); //Pin a led rojo

    digitalWrite(pinL1, LOW);
    digitalWrite(pinL2, HIGH);
 }

//Destructor
 Robot::~Robot(){}

//Si se coloca una lata
 void Robot::colocando(){
    digitalWrite(pinL1,HIGH);//Se encuende el pin verde
    digitalWrite(pinL2,LOW);//Se apaga el led rojo
 }

//Si no se coloca ninguna lata
 void Robot::quieto(){
    digitalWrite(pinL1,LOW);//Se apaga el led verde
    digitalWrite(pinL2,HIGH);//Se enchufa el rojo
 }

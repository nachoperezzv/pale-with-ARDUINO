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

 Robot::~Robot(){}

 void Robot::colocando(){
    digitalWrite(pinL1,HIGH);
    digitalWrite(pinL2,LOW);
 }

 void Robot::quieto(){
    digitalWrite(pinL1,LOW);
    digitalWrite(pinL2,HIGH);
 }

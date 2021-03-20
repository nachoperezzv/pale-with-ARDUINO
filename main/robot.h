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

 #ifndef ROBOT_H
 #define ROBOT_H

 #include <Arduino.h>

 const int pinL1 = 8;
 const int pinL2 = 9;

 class Robot{
  public:
    Robot();
    ~Robot();

    void colocando();
    void quieto();
    
 };


#endif

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
 #ifndef PALE_H
 #define PALE_H
 
 #include <Arduino.h>

 #define FIL 4
 #define COL 3

 struct Point{
  int x;
  int y;
 };

 class Pale
 {
  public:
    Pale();
    ~Pale();

    Point insertaPrimera();
    bool  inserta(Point);    
    
  protected:
    bool** m;
    Point pos;
 };

 #endif //PALE_H

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

 #include "pale.h"
//Reserva memoria para una matriz que va a contener las latas
 Pale::Pale(){
    m = new bool*[FIL];
    for(int i=0; i<FIL; i++){
        m[i] = new bool[COL];
        for(int j=0; j<COL; j++)
            m[i][j] = false;
    }   
 }

//Destructor
 Pale::~Pale(){
    for(int i = 0; i < FIL; i++)
      delete m[i];
    delete[] m;
 }

//Si la primera posición no está ocupada inserta en esa posición una lata,
//de lo contrario sigue buscando una posición disponible en orden ascendente
 Point Pale::insertaPrimera(){
    Point p_;
    
    for(int i=0;i<FIL;i++){
      for(int j=0;j<COL;j++){
        if(!m[i][j]){
          m[i][j] = true; 
          p_.x = i; i = FIL;
          p_.y = j; j = COL; 
        }        
      }
    }
    return p_;
 }

//Devuelve cierto si una posición está vacía
 bool Pale::inserta(Point c){
    if(m[c.x][c.y])
      return false;
    else
      return m[c.x][c.y] = true;      
 }

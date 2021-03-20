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
 #include "robot.h"
 #include "interruptions.h"

 Pale p;
 Robot r;

 String pos_;  //Formato de entrada debe ser 'pos.x,pos.y' 
 Point pos;
 
 void setup() {
    Serial.begin(9600);
    Serial.setTimeout(1500);
    setISR();    
 }

 void loop() {
    if(ISR1){      
      if(Serial.readString() == "1"){
        pos = p.insertaPrimera();
        
        //MatLab solicita que se le indique donde se ha colocado la lata
        Serial.read();    //Primero se pide la fila y se le envia
        Serial.println(pos.x);
        Serial.read();    //Luego se le pide la columna y se le envia
        Serial.println(pos.y);

        r.colocando();
        delay(500);
        r.quieto();
      }
          
      if(Serial.readString() == "2"){
        Serial.println("pos");

        pos.x = Serial.parseInt();  //Los datos son recibidos como texto y se 
        pos.y = Serial.parseInt();  //convierten a enteros
        
        if(p.inserta(pos)){ //La posición asignada es correcta y se le envía a Matlab la confirmación
          Serial.println("1");
          r.colocando();
          delay(500);
          r.quieto();
        }  
        else{ //Si la posición introducida por la interfaz no es correcta entonces se 
              //asigna la primera posición libre (modo 1)
          Serial.println("");
          p.insertaPrimera();
          
          //MatLab solicita que se le indique donde se ha colocado la lata
          Serial.read();    //Primero se pide la fila y se le envia
          Serial.println(pos.x);
          Serial.read();    //Luego se le pide la columna y se le envia
          Serial.println(pos.y);
  
          r.colocando();
          delay(500);
          r.quieto();
        }
      }

      ISR1 = false;
   }
 }

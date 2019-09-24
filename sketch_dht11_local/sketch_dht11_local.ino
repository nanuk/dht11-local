
#include <DHT11.h>
//int pin2=IO_12;

DHT11 dht11A(I0_12);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
    int err;
       float tempA, humA;
       if((err = dht11A.read(humA, tempA)) == 0)    // Si devuelve 0 es que ha leido bien
          {
             Serial.print("Temperatura-A: ");
             Serial.print(tempA);
             Serial.print(" Humedad-A: ");
             Serial.print(humA);
             Serial.println();
          }
       else
          {
             Serial.println();
             Serial.print("Error Num :");
             Serial.print(err);
             Serial.println();
          }
        
       delay(10000);            //Recordad que solo lee una vez por segundo
}

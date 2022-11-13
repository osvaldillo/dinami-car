#include <IRremote.h>
char a;
int estado = 0;
int SENSOR = 11;
IRrecv irrecv(SENSOR);
decode_results codigo;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  if(irrecv.decode()){
    Serial.println(codigo.value);
    if(codigo.value == 16736415){
      estado = 1;
      a = "adelante";
    }
    if(estado == 1){
      Serial.print(a);
    }
    irrecv.resume();
  }
  delay(100);

}

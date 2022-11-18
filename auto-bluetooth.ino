char t;
 
void setup() {
pinMode(13,OUTPUT);   //motor izquierdo delantero
pinMode(12,OUTPUT);   //motor izquierdo trasero
pinMode(11,OUTPUT);   //motor derecho delantero
pinMode(10,OUTPUT);   //motor derecho trasero
Serial.begin(9600);
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //mover hacia adelante
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //mover hacia atras
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      //girar a la derecha 
  digitalWrite(11,HIGH);
}
 
else if(t == 'R'){      //girar a la izquierda 
  digitalWrite(13,HIGH);
}
 
else if(t == 'S'){      //STOP 
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}

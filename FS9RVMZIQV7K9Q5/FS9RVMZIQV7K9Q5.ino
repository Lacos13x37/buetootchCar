int izqA = 9; 
int izqB = 10; 
int derA = 11; 
int derB = 12; 
int vel = 255; // Velocidad de los motores (0-255)
int estado = 0; // inicia detenido

void setup() { 
Serial.begin(9600); // inicia el puerto serial para comunicacion con el Bluetooth
pinMode(derA, OUTPUT);
pinMode(derB, OUTPUT);
pinMode(izqA, OUTPUT);
pinMode(izqB, OUTPUT);
} 

void loop() { 

if(Serial.available()>0){ // lee el bluetooth y almacena en estado
estado = Serial.read();
}
if(estado=='1'){ // Forward
  Serial.println(estado);
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
if(estado=='2'){ // right
  Serial.println(estado);
  digitalWrite(13,HIGH); 
}
if(estado=='3'){ // Stop
    Serial.println(estado);
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
}
if(estado=='4'){ // left
    Serial.println(estado);
    digitalWrite(11,HIGH); 
} 

if(estado=='5'){ // Reverse
    Serial.println(estado);
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH); 
}

}

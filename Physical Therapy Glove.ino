#include <VarSpeedServo.h>
#define pinPotenciometro A5

VarSpeedServo motora; //cria objeto a partir da biblioteca
VarSpeedServo motorb;
VarSpeedServo motorc;
VarSpeedServo motord;
VarSpeedServo motore;

int tempo;
int rotina  = 0;
int estadobot1 = 0;
int estadobot2 = 0;
int vezes = 0;
byte velocidade;

//void B2acionado();

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  
  motora.attach(5); //motorA pino 5
  motorb.attach(6); //motorB pino 6
  motorc.attach(9); //motorC pino 9
  motord.attach(10); //motorD pino 10
  motore.attach(11); //motorE pino 11
  
  Serial.begin(9600);
}

void loop() {

    int lido = analogRead(pinPotenciometro);
    velocidade = map(lido, 0, 1023, 65, 250);

    if(velocidade > 125) tempo = 500;
    else tempo = 1000;

    if(digitalRead(2) == LOW)
    {
        digitalWrite(13, HIGH);
        for(vezes = 0; vezes <5; vezes++)
        rotina1();
    } 


    if(digitalRead(3) == LOW)
    {
        digitalWrite(13, HIGH);
        for(vezes = 0; vezes <5; vezes++)
        rotina2();
    } 
    
    Serial.print("A5:");
    Serial.print(lido);
    Serial.print(" Velocidade:");
    Serial.println(velocidade);
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
   
}

void rotina1(){

    motora.slowmove(0, velocidade); //posição , velocidade
    delay (tempo);
    motora.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);

   
    motorb.slowmove(0, velocidade); //posição , velocidade
    delay (tempo);
    motorb.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);

   
    motorc.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);
    motorc.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);
   
   
    motord.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);
    motord.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);

   
    motore.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);
    motore.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);
  
}

void rotina2(){
    
    motora.slowmove(0, velocidade); //posição , velocidade
    delay (tempo);
    motorb.slowmove(0, velocidade); //posição , velocidade
    delay (tempo);
    motorc.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);
    motord.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);
    motore.slowmove(0,velocidade); //posição , velocidade
    delay (tempo);

    motora.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);   
    motorb.slowmove(95, velocidade); //posição , velocidade
    delay (tempo);
    motorc.slowmove(95,velocidade); //posição , velocidade
    delay (tempo);
    motord.slowmove(95,velocidade); //posição , velocidade
    delay (tempo);
    motore.slowmove(95,velocidade); //posição , velocidade
    delay (tempo);
  
}


#include <stdio.h>

int pin_verde=4;
int pin_vermelho=5;
int pin_amarelo=6;
int tempo=1000;

void setup()
{
    pinMode(pin_verde, OUTPUT);
    pinMode(pin_vermelho, OUTPUT);
    pinMode(pin_amarelo, OUTPUT);
}

void loop(){
    digitalWrite(pin_verde, HIGH);
    digitalWrite(pin_vermelho, LOW);
    digitalWrite(pin_amarelo, LOW);
    delay(tempo);
    
    digitalWrite(pin_verde, LOW);
    digitalWrite(pin_vermelho, HIGH);
    digitalWrite(pin_amarelo, LOW);
    delay(tempo);
    
    digitalWrite(pin_verde, LOW);
    digitalWrite(pin_vermelho, LOW);
    digitalWrite(pin_amarelo, HIGH);
    delay(tempo);
    
    tempo = tempo-50;
    if(tempo<100){
        tempo=1000;
    }
}
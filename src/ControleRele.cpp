//
// Created by Jimmie Haskell, on 17/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ControleRele.cpp
//
#include "ControleRele.hpp"

void ControleRele::Update() {
    // Faz a checagem para saber se já é o momento de alterar o estado do LED
    unsigned long currentMillis = millis();

    if((releState == HIGH) && (currentMillis - previousMillis >= OnTime))
    {
        releState = LOW;  // Desliga o rele
        previousMillis = currentMillis;  // Guarda o tempo
        digitalWrite(relePin, releState);  // Faz o Update do rele
        Serial.println("Relé ligado!");
    }
    else if ((releState == LOW) && (currentMillis - previousMillis >= OffTime))
    {
        releState = HIGH;  // Liga o rele
        previousMillis = currentMillis;   //Guarda o tempo
        digitalWrite(relePin, releState);      // Faz o Update do rele
        Serial.println("Relé desligado!");
    }
}

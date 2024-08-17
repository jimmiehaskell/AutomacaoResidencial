//
// Created by Jimmie Haskell, on 17/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ControleRele.hpp
//
#ifndef CONTROLERELE_HPP
#define CONTROLERELE_HPP

#include "config.hpp"

class ControleRele
{
    // Variáveis membro da classe
    // São inicializadas no startup do programa
    int relePin;      // número do pino do relé
    long OnTime;     // milissegundos do tempo ligado
    long OffTime;    // milissegundos do tempo desligado
    // Essas mantém o estado atual
    int releState;                     // ledState usada para guardar o estado do relé
    unsigned long previousMillis;      // vai guardar o último acionamento do relé

public:
    ControleRele(int pin, long on, long off) {
        relePin = pin;
        pinMode(relePin, OUTPUT);

        OnTime = on;
        OffTime = off;

        releState = HIGH; // Relé desligado
        previousMillis = 0;
    }

    void Update();
};

#endif //CONTROLERELE_HPP

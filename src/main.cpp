//
// Created by Jimmie Haskell, on 17/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// main.cpp
//

#include "config.hpp"
#include "ControleRele.hpp"
#include "SensorUmidadeSolo.hpp"

ControleRele rele1(18, 500, 1250);

void setup() {
    Serial.begin(9600);
}
void loop() {
    rele1.Update();
}
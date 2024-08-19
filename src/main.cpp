//
// Created by Jimmie Haskell, on 17/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// main.cpp
//

#include "ConexaoWiFi.hpp"
#include "config.hpp"

void setup() {
    ConexaoWiFi conexaoWiFi(BAUD_RATE_DEFAULT);
    Serial.begin(BAUD_RATE_DEFAULT);
}
void loop() {
}
//
// Created by Jimmie Haskell, on 18/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ConexaoWiFi.cpp
//
#include "ConexaoWiFi.hpp"

void ConexaoWiFi::Update() {
    if (!res) {
        Serial.println("Failed to connect to WiFi network");
    } else {
        Serial.println("Connected");
    }
}

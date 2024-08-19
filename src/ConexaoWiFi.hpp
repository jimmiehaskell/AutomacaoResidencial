//
// Created by Jimmie Haskell, on 18/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ConexaoWiFi.hpp
//
#ifndef CONEXAOWIFI_HPP
#define CONEXAOWIFI_HPP

#include <WiFiManager.h>

class ConexaoWiFi {
private:
    int baudRate;
    const char* ssid = "ESP-32";
    const char* password = "1234567890";
    bool res;

public:
    ConexaoWiFi(int baud_rate) {
        this->baudRate = baud_rate;
        Serial.begin(baudRate);

        WiFi.mode(WIFI_STA);
        WiFiManager wifiManager;

        // wifiManager.resetSettings();

        res = wifiManager.autoConnect(ssid, password);

        Update();
    }

    void Update();
};

#endif //CONEXAOWIFI_HPP

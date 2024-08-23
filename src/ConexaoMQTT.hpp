//
// Created by Jimmie Haskell, on 22/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ConexaoMQTT.hpp
//
#ifndef CONEXAOMQTT_HPP
#define CONEXAOMQTT_HPP

#include <string>

#include "config.hpp"

class ConexaoMQTT {
private:
    String mqttUsername;
    String mqttPassword;
    String mqttServer;
    String mqttChannel;
    int mqttPort;

public:
    ConexaoMQTT(String username, String password, String mqttServer, int mqttPort) {
    this->mqttUsername = username;
    this->mqttPassword = password;
    this->mqttServer = mqttServer;
    this->mqttPort = mqttPort;
    }

    void Update();
    String GetMQTTChannel();
    String SetMQTTChannel(String channel);
};



#endif //CONEXAOMQTT_HPP

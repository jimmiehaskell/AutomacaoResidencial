//
// Created by Jimmie Haskell, on 22/08/2024.
// e-mail: haskell4228@gmail.com
// https://www.haskelldev.com
//
// Copyright (c) 2024 HaskellDev. All rights reserved.
//
// ConexaoMQTT.cpp
//
#include "ConexaoMQTT.hpp"

String ConexaoMQTT::GetMQTTChannel() {
  return mqttChannel;
}

String ConexaoMQTT::SetMQTTChannel(String channel) {
  this->mqttChannel = channel;

  if (mqttChannel == channel) {
    return GetMQTTChannel();
  } else {
    return ("ERROR: não foi possível atribuir o canal: %s", channel);
  }
}

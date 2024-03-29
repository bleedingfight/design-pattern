#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "chat_room.h"
class ChatRoom;
class Person {
 public:
  std::string name;
  ChatRoom* room = nullptr;
  std::vector<std::string> chat_log;
  Person(const std::string& name);
  void receive(const std::string& origin, const std::string& message);
  void say(const std::string& message) const;
  void pm(const std::string& who, const std::string& message) const;
};

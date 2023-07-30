#pragma once
#include <algorithm>
#include <string>
#include <vector>

#include "person.h"
class Person;
class ChatRoom {
 public:
  std::vector<Person*> people;
  void join(Person* p);
  void broadcast(const std::string& origin, const std::string& message);
  void message(const std::string& origin, const std::string& who,
               const std::string& message);
};

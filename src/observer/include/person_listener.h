
#pragma once
#include "person.h"
#include <string>
#include <any>
class PersonListener{
  public:
  virtual void person_changed(Person&p,const std::string&property_name,const std::any new_value)=1;
};

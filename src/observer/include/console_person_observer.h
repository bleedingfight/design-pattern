#pragma once
#include "observer.h"
#include "person.h"
#include <iostream>
class Person;
class ConsolPersonObserver:public Observer<Person>{
    public:
        void field_changed(Person&source,const std::string&field_name) override;

};

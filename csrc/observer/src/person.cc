#include "person.h"
Person::Person(int age):age{age}{}
int Person::get_age(){return age;};
void Person::set_age(const int value){age = value;}

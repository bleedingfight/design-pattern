#pragma once
class Person{
        int age;
    public:
        Person(int age);
        int get_age() const;
        void set_age(const int value);
};

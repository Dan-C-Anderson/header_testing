//only include each item once
#pragma once

//include std libraries
#include <iostream>
#include <string>

//class forward declarations
class Animal{
    public:
        Animal(std::string _name, int _age);
        void print();
        void changeAge(int age_new);
        int getAge();
    private:
};

//function forward declarations
double squareNumber(double number);
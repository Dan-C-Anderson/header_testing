#include "headers.h"

class Animal{
    public:
        Animal(std::string _name, int _age){
            name = _name;
            age = _age;
        }
        void print(){
            std::cout<<"Animal Name: " + name + ", Animal Age:" + std::to_string(age);
        }
        void changeAge(int age_new){
            age = age_new;
        }
        int getAge(){
            return age;
        }
    private:
        std::string name;
        int age;
};
#include "headers.h"

int main(){

    //create an Animal on the heap
    Animal* test_animal = new Animal("Ghost",2);

    //print the Animal's info to the terminal
    test_animal->print();

    //get the age and then square it
    {
        //get the age
        int age_new = test_animal->getAge();

        //square the age
        age_new = (int) squareNumber((double) age_new);

        //change the age of the Animal
        test_animal->changeAge(age_new);
    }

    //print the Animal's info to the terminal again
    test_animal->print();


    return 0;
}




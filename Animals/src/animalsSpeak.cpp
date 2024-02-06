/*
#include <iostream>
#include <vector>
#include "animalClasses.h"
#include "animalClasses.cpp" 

int main()
{
    //declare a vector of animal pointers here
    std::vector<Animal*> animals;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Budgie());

    //loop through all the animals in your vector and call Speak() on them in turn
    for (Animal* animal : animals) {
        animal->Speak();
    }

    //delete dynamically allocated memory
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
*/
#include <iostream>
#include <vector>
#include <memory> 
#include "animalClasses.h"
#include "animalClasses.cpp"

int main()
{
    //declare a vector of animal pointers here
    std::vector<std::unique_ptr<Animal>> animals;

    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector - using std::make_unique and std::move
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());
    animals.push_back(std::make_unique<Budgie>());
    animals.push_back(std::make_unique<Labrador>()); // Adding Labrador
    animals.push_back(std::make_unique<Terrier>());  // Adding Terrier

    //loop through all the animals in your vector and call Speak() on them in turn
    for (const auto& animal : animals) {
        animal->Speak();
    }

    //the memory will automatically be released when the unique_ptrs go out of scope whcih has the same effect as deleting

    return 0;
}
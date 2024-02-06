#include "animalClasses.h"
#include <iostream>

class Animal
{
    public:
        virtual void Speak() = 0;
};

class Dog : public Animal
{
    public:
        void Speak() override
        {
            std::cout << "Woof" << std::endl;
        }
};

class Labrador : public Dog {
public:
    void Speak() override {
        std::cout << "Woof" << std::endl;
    }
};

class Terrier : public Dog {
public:
    void Speak() override {
        std::cout << "Yap" << std::endl;
    }
};

class Cat : public Animal
{
    public:
        void Speak() override
        {
            std::cout << "Meow" << std::endl;
        }
};

class Budgie : public Animal
{
    public:
        void Speak() override
        {
            std::cout << "Tweet" << std::endl;
        }
};
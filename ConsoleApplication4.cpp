#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:

    Animal(const std::string& name) : name(name) {}

    virtual void Voice() const {
        std::cout << "Голос" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void Voice() const override {
        std::cout << name << "гав" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    void Voice() const override {
        std::cout << name << "мяу" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Dog myDog("Собака: ");
    Cat myCat("Кот: ");

    myDog.Voice();
    myCat.Voice();

    return 0;
}
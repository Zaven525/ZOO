#include <iostream>
#include <vector>
#include <string>

enum class Kind 
{
    Animal, Mammal, Bird, Reptile,
    Lion, Tiger, Elephant,
    Eagle, Parrot,
    Snake, Crocodile
};

class Animal
{
protected:
    std::string name;
    int health;     // 0..100
    int hunger;     // 0..100
    Kind _kind;
    static int id;
public:
    Animal(std::string _name) : name{_name}, health{100}, hunger{0}, _kind{Kind::Animal} { std::cout << "Animal ctor " << name; }
    void PrintInfo() const;
    void Feed();
    Kind KindOf() const;
    int Id() const { return id; }
};

class Mammal : public Animal
{
protected:
    bool warmBlooded;
public:
    void MakeSound();
};

class Bird : public Animal
{
protected:
    double wingSpan;
public:
    void Fly();
};

class Reptile : public Animal
{
protected:
    bool coldBlooded;
public:
    void Sunbathe();
};



#pragma once
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

std::ostream& operator<<(std::ostream& os, Kind kind);
class Animal
{
protected:
    std::string _name;
    int _health;     // 0..100
    int _hunger;     // 0..100
    Kind _kind;
    static int id;
public:
    Animal(std::string name) : _name{name}, _health{100}, _hunger{0}, _kind{Kind::Animal} {}
    void PrintInfo() const;
    void Feed() { _hunger--; _health++; }
    Kind KindOf() const { return _kind; };
    int Id() const { return id; }
};

class Mammal : public Animal
{
protected:
    void PrintInfo() const;
    bool _warmBlooded;
public:
    Mammal(std::string name) : Animal(name) {}
    void MakeSound() const {}
};

class Bird : public Animal
{
protected:
    void PrintInfo() const;
    double _wingSpan;
public:
    Bird(std::string name) : Animal(name) {}
    void Fly() {};
};

// class Reptile : public Animal
// {
// protected:
//     bool coldBlooded;
// public:
//     void Sunbathe();
// };

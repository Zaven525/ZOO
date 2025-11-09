#pragma once
#include "animals.hpp"


// Mammals
class Lion : public Mammal
{
private:
    int _roarPower;      // 1..10
public:
    Lion(std::string name, int roarPower) : Mammal(name), _roarPower{roarPower} { _kind = Kind::Lion; }
    void PrintInfo() const;
    void MakeSound() const { std::cout << "Roar" << std::endl; }
    void Roar() const { std::cout << "Lion roars with power " << _roarPower << std::endl; }
};

class Tiger : public Mammal
{
private:
    double _jumpHeight;         // km/h
public:
    Tiger(std::string name, double jumpHeight) : Mammal(name), _jumpHeight{jumpHeight} { _kind = Kind::Tiger; }
    void PrintInfo() const;
    void MakeSound() const { std::cout << "Meow" << std::endl; }
    void Jump() const { std::cout << "Tiger jumps with height " << _jumpHeight << " km/h" << std::endl; }
};


class Elephant : public Mammal
{
private:
    double _trunkLength;
public:
    Elephant(std::string name, double trunkLength) : Mammal(name), _trunkLength{trunkLength} { _kind = Kind::Elephant; }
    void PrintInfo() const;
    void MakeSound() const { std::cout << "Trunking" << std::endl; }
    void UseTrunk() const { std::cout << "Elephant uses trunk with length of " << _trunkLength << std::endl; }
};


// Bird
class Eagle : public Bird
{
private:
    double _visionRange; // meters
public:
    Eagle(std::string name, double wingSpan, double visionRange) : Bird(name, wingSpan), _visionRange{visionRange} { _kind = Kind::Eagle; }
    void PrintInfo() const;
    void Soar() const { std::cout << "Eagle Soars " << std::endl; }
};

// class Parrot : public Bird
// {
// private:
//     std::vector<std::string> vocabulary;     // words it can "say"
//     Kind kind_ = Kind::Parrot;
// public:
//     void Speak();
// };






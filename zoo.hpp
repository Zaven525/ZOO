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

class Parrot : public Bird
{
private:
    std::vector<std::string> vocabulary;     // words it can "say"
public:
    Parrot(std::string name, double wingSpan) : Bird(name, wingSpan) { _kind = Kind::Parrot; }
    void PrintInfo() const;
    void teachWord(std::string word) { vocabulary.push_back(word); }
    void Speak() { for (const auto& elem : vocabulary) {std::cout << elem;} }
};


//Reptile
class Snake : public Reptile
{
private:
    bool _poisiounus;
public:
    Snake(std::string name, bool poisiounus) : Reptile(name), _poisiounus{poisiounus} {}
    void PrintInfo() const;
    void Hiss() const { std::cout << "Hissing" << std::endl; }
};

class Crocodile : public Reptile
{
private:
    int _biteForce;
public:
    Crocodile(std::string name, int biteForce) : Reptile(name), _biteForce{biteForce} {}
    void PrintInfo() const { }
    void Snap() const { std::cout << "Snapping" << std::endl; }
};







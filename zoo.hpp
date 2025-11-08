#pragma once
#include "animals.hpp"


// Mammals
class Lion : public Mammal
{
private:
    int _roarPower;      // 1..10
public:
    Lion(std::string name) : Mammal(name) { _kind = Kind::Lion; }
    void PrintInfo() const;
    //void Roar();        // print "Lion roars with power X"
};

// class Tiger : public Mammal
// {
// private:
//     double jumpHeight;;         // km/h
//     Kind kind_ = Kind::Tiger;
// public:
//     void Jump();
// };

// class Elephant : public Mammal
// {
// private:
//     double trunkLength;
//     Kind kind_ = Kind::Elephant;
// public:
//     void UseTrunk();
// };


// // Bird
// class Eagle : public Bird
// {
// private:
//     double visionRange; // meters
//     Kind kind_ = Kind::Eagle;
    
// public:
//     void Soar();
// };

// class Parrot : public Bird
// {
// private:
//     std::vector<std::string> vocabulary;     // words it can "say"
//     Kind kind_ = Kind::Parrot;
// public:
//     void Speak();
// };






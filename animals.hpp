#include "zoo.hpp"


// Mammals
class Lion : public Mammal
{
private:
    int roarPower;      // 1..10
    Kind kind_ = Kind::Lion;
public:
    void Roar();        // print "Lion roars with power X"
};

class Tiger : public Mammal
{
private:
    double jumpHeight;;          // km/h
    Kind kind_ = Kind::Tiger;
public:
    void Jump();
};

class Elephant : public Mammal
{
private:
    double trunkLength;
    Kind kind_ = Kind::Elephant;
public:
    void UseTrunk();
};


// Bird
class Eagle : public Bird
{
private:
    double visionRange; // meters
    Kind kind_ = Kind::Eagle;
    
public:
    void Soar();
};

class Parrot : public Bird
{
private:
    std::vector<std::string> vocabulary;     // words it can "say"
    Kind kind_ = Kind::Parrot;
public:
    void Speak();
};




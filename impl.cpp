#include "zoo.hpp"

std::ostream& operator<<(std::ostream& os, Kind kind)
{
    switch (kind)
    {
        case Kind::Lion: return os << "Lion";
        case Kind::Tiger: return os << "Tiger";
        case Kind::Elephant: return os << "Elephant";
        default: return os << "We don't have that animal in our zoo nigga";
    }
} 

// Animal
void Animal::PrintInfo() const
{
    std::cout 
    << "Name: " << _name << std::endl
    << "Health: " << _health << std::endl
    << "Hunger: " << _hunger << std::endl
    << "Kind: " << _kind << std::endl;
}


// Mammal
void Mammal::PrintInfo() const
{
    Animal::PrintInfo();
    std::cout << "Warm Blooded" << std::endl;
}

// Lion
void Lion::PrintInfo() const
{   
    Mammal::PrintInfo();
    std::cout << std::endl << "RoarPower: " << _roarPower << std::endl;
}
// Tiger
void Tiger::PrintInfo() const
{   
    Mammal::PrintInfo();
    std::cout << std::endl << "JumpHeight: " << _jumpHeight << std::endl;
}
// Elephant
void Elephant::PrintInfo() const
{   
    Mammal::PrintInfo();
    std::cout << std::endl << "TrunkLength: " << _trunkLength << std::endl;
}


// Bird
void Bird::PrintInfo() const
{
    Animal::PrintInfo();
    std::cout << "WingSpan: " << _wingSpan << std::endl;
}
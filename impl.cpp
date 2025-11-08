#include "zoo.hpp"

std::ostream& operator<<(std::ostream& os, Kind kind)
{
    return os << "Lion";
} 

void Animal::PrintInfo() const
{
    std::cout 
    << "Name: " << _name << std::endl
    << "Health: " << _health << std::endl
    << "Kind: " << _kind << std::endl;
}

void Lion::PrintInfo() const
{
    std::cout 
    << "Name: " << _name << std::endl
    << "Health: " << _health << std::endl
    << "Kind: " << _kind << std::endl
    << "RoarPower" << _roarPower << std::endl;
}
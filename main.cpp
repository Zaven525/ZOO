#include "zoo.hpp"

int main()
{
    Lion simba("Simba");
    std::cout << simba.KindOf();
    std::vector<Animal *> zoo;
    zoo.push_back(&simba);
    return 0;
}

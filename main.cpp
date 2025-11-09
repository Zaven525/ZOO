#include "zoo.hpp"

int main()
{
    Lion simba("Simba", 12);
    Tiger tony("Tony", 14);
    Eagle aquilla("Aquilla", 13, 12);
    // Snake sly("Sly");
    std::vector<Animal *> zoo;
    zoo.push_back(&simba);
    zoo.push_back(&tony);
    zoo.push_back(&aquilla);

    for (Animal* elem : zoo)
    {
        switch (elem->KindOf())
        {
            case Kind::Lion: static_cast<Lion*>(elem)->PrintInfo(); std::cout << std::endl; break;
            case Kind::Tiger: static_cast<Tiger*>(elem)->PrintInfo(); std::cout << std::endl; break;
            case Kind::Elephant: static_cast<Elephant*>(elem)->PrintInfo(); std::cout << std::endl; break;
            case Kind::Eagle: static_cast<Eagle*>(elem)->PrintInfo(); std::cout << std::endl; break;
            
            default:break;
        }
    }
    return 0;
}

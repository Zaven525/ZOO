#include "zoo.hpp"
#include <vector>
#include <iostream>

int main() {
    // Create animals on the stack
    Lion simba("Simba", 12);
    Tiger tony("Tony", 14);
    Elephant dumbo("Dumbo", 25);
    Eagle aquilla("Aquilla", 13, 12);
    Parrot polly("Polly", 5);

    // Store pointers to base class
    std::vector<Animal*> zoo = { &simba, &tony, &dumbo, &aquilla, &polly };

    // Loop through zoo and switch on Kind
    for (Animal* animal : zoo) {
        switch (animal->KindOf()) {
            case Kind::Lion: {
                Lion* lion = static_cast<Lion*>(animal);
                lion->PrintInfo();
                lion->walk();
                lion->voice();
                lion->feed();
                break;
            }
            case Kind::Tiger: {
                Tiger* tiger = static_cast<Tiger*>(animal);
                tiger->PrintInfo();
                tiger->walk();
                tiger->voice();
                tiger->feed();
                break;
            }
            case Kind::Elephant: {
                Elephant* elephant = static_cast<Elephant*>(animal);
                elephant->PrintInfo();
                elephant->walk();
                elephant->voice();
                elephant->feed();
                break;
            }
            case Kind::Eagle: {
                Eagle* eagle = static_cast<Eagle*>(animal);
                eagle->PrintInfo();
                eagle->fly();
                eagle->walk();
                eagle->voice();
                eagle->feed();
                break;
            }
            case Kind::Parrot: {
                Parrot* parrot = static_cast<Parrot*>(animal);
                parrot->PrintInfo();
                parrot->fly();
                parrot->walk();
                parrot->voice();
                parrot->feed();
                break;
            }
            default:
                std::cout << "Unknown animal!" << std::endl;
        }
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}

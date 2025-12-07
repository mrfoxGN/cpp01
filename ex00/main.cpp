#include "Zombie.hpp"


int main(void)
{
    std::cout << "\n=== Example 1 : Temporary Zombie (STACK) ===\n";
    std::cout << "We only need a zombie for a single announce.\n";
    std::cout << "Stack allocation is perfect here.\n" << std::endl;

    randomChump("Zombie from the stack");


    std::cout << "\n=== Example 2 : Persistent Zombie (HEAP) ===\n";
    std::cout << "We want a zombie that stays alive after creation.\n";
    std::cout << "Heap allocation is required.\n" << std::endl;

    Zombie* persistent = newZombie("PersistentZombie");
    persistent->annouce();

    std::cout << "Zombie still alive here, because HEAP keeps it alive.\n" << std::endl;

    std::cout << "Now we delete it manually.\n";
    delete persistent; 


    std::cout << "\n=== End ===" << std::endl;

    return 0;
}

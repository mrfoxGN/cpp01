#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
    std::cout << "welcome to zombie world" << std::endl;
    std::cout << "----creating a stack zombie----" << std::endl;
    randomChump("stackzombie");
    std::cout << "u see that that the destructer is called automatically when the function ends" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "----creating a heap zombie----" << std::endl;
    Zombie* heapzombie = newZombie("heapzombie");
    heapzombie->announce();
    std::cout << "u see that the destructer is not called automatically" << std::endl;
    std::cout << "u have to call delete to destroy the object and call the destructer" << std::endl;
    delete heapzombie;
    return 0;
}
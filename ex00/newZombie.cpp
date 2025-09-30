#include "Zombie.hpp"
 Zombie* newZombie( std::string name )
 {
    Zombie* New_zombie = new Zombie(name);
    return New_zombie;
 }

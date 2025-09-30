#include "Zombie.hpp"
void randomChump( std::string name )
{
    Zombie stackzombie(name);
    stackzombie.announce();
}
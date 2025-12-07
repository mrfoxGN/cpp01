#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie(void)
{
    std::cout << this->name << " destroyed" << std::endl;
    return;
}
void Zombie::annouce(void)
{
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
void Zombie::setName(std::string name)
{
    this->name = name;
}
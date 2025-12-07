#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon& weapon)
:_name(name),_weapon(weapon)
{}
HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
	return;
}
void	HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
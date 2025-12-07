#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name)
{}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	return;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return;
}
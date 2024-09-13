#include"HumanB.hpp"
HumanB::HumanB(std::string name):_name(name)
{

}

HumanB::~HumanB()
{

}

void HumanB::attack(void)
{
    if(!this->_weapon->getType().empty() && this->_weapon != NULL)
        std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
#include"HumanA.hpp"
HumanA::HumanA(std::string name, Weapon& weapon):_name(name),_weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void HumanA::attack(void)
{
    if(!this->_weapon.getType().empty())
        std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
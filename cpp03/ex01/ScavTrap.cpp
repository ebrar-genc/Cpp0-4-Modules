#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    name = "ASKO";
    energyPoints = 50;
    hitPoints = 100;
    attackDamage = 20;
    cout << "ScavTrap " << name << "is constructed!" << endl;
}

ScavTrap::ScavTrap(const string name) : ClapTrap(name)
{
    this->name = name;
    energyPoints = 50;
    hitPoints = 100;
    attackDamage = 20;
    cout << "ScavTrap " << name << "is constructed!" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    *this = other;
    cout << "Copy ScavTrap " << name << "is constructed!" << endl;
}

ScavTrap::~ScavTrap()
{
    cout << "ScavTrap " << name << " is destructed!!" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        cout << "ScavTrap copy assigment operator called." << endl;
    }

    return *this;
}

void ScavTrap::attack(const string &target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
        cout << "Died." << endl;
    else
    {
        energyPoints--;
        cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << endl;
    }
}

void ScavTrap::guardGate()
{
    cout << "ScavTrap " << name << " is now in Gate keeper mode." << endl;
}

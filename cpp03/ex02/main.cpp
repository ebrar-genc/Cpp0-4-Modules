#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clapTrap("DUDU");

    ScavTrap scavTrap("JJ");

    FragTrap fragTrap("Lucy");

    clapTrap.attack("enemy");
    scavTrap.takeDamage(5);
    fragTrap.attack("zombie");

    clapTrap.beRepaired(2);
    scavTrap.beRepaired(5);
    fragTrap.beRepaired(10);

    fragTrap.highFivesGuys();

    return (0);
}

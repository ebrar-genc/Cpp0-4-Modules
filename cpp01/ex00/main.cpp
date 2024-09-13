#include"Zombie.hpp"

int main(void)
{
    Zombie* zombie1 = new Zombie("FOO");
    zombie1->announce();
    delete zombie1;

    Zombie* cdisci = newZombie("BOO");
    cdisci->announce();
    delete cdisci;

    randomChump("EBR");
}
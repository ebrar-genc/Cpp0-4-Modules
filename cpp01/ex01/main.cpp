#include"Zombie.hpp"

int main(void)
{
    int n = 5;
    Zombie* zombies = zombieHorde(n,"FOO");
    for (int i = 0; i < n; i++)
        zombies[i].announce();
    delete [] zombies;
   
    return 0;
}
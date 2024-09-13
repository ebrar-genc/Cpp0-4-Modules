#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete i;
    delete j;

    std::cout << "\n\n<------------------------------------------------------------------>\n\n" << std::endl;

    Cat basic;
    {
        Cat tmp = basic;
    }
    basic.getter(5);

    std::cout << "\n\n<------------------------------------------------------------------>\n\n" << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
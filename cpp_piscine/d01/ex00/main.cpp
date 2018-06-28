#include "Pony.hpp"

void    ponyOnTheStack(std::string name, std::string gender, int age)
{
    Pony pony = Pony(name, gender, age, true);

    std::cout << "Stack Example:" << std::endl;
    std::cout << pony.name << std::endl;
    std::cout << pony.gender << std::endl;
    std::cout << pony.age << std::endl;
}

void    ponyOnTheHeap(std::string name, std::string gender, int age)
{
    Pony *pony = new Pony(name, gender, age, false);

    std::cout << "Heap Example:" << std::endl;
    std::cout << pony->name << std::endl;
    std::cout << pony->gender << std::endl;
    std::cout << pony->age << std::endl;

    delete(pony); //destroys heap
}

int     main(void)
{
    ponyOnTheHeap("Phillip", "bisexual", 5);

    ponyOnTheStack("Mary", "male", 25);

    return 0;
}
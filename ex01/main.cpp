#include "Zombie.hpp"


int main(void)
{
    
    std::cout << "Creating a horde of 5 zombies named 'ANASS'" << std::endl;
    int N = 5;
    std::string name = "ANASS";
    Zombie* horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        horde[i].annouce();
    }
    delete[] horde;

    return 0;
}

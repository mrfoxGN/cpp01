#include "Zombie.hpp"

Zombie* zombieHorde(int N,std::string name)
{
    Zombie* zombieess=new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombieess[i].setName(name);

    }
    return(zombieess);
}
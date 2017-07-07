// Die.cpp
#include "Die.h"


Die::Die(int n)
{
  sides = n;
  gen = new std::mt19937(std::random_device()());
}

int Die::roll()
{
    std::uniform_int_distribution<> dis(1, sides);
    int num = dis(*gen);
    return num;
}
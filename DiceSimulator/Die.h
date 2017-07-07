// Die.h
#ifndef Die_H
#define Die_H

#include <random>

class Die
{
 private:
 int sides;
 std::mt19937 *gen = NULL;

 public:
 Die(int n);
 int roll();
}; 

#endif
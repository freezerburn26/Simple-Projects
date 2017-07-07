/*
Dice Rolling Simulator in C++
by Donald Purvis
*/

#include <iostream>
#include <vector>
#include "Die.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    std::ios::sync_with_stdio(false);
    
    if ( argc <= 1)
    {
        cout << "Command Line Parameters: \n"
        << "Enter sets of 2 numbers, 1st is number of dice, 2nd is number of sides.\n"
        << "Example: \"5 20\" would be 5 20 sided dice.\n";
        
    }else
    {
        vector<Die> dice;
        vector<int> diceSizes;
        for(int i = 1; i < argc; i++)
        {
            for(int k = 0; k < atoi(argv[i]); k++){
                Die tempDie = Die(atoi(argv[i+1]));
                dice.push_back(tempDie);
                diceSizes.push_back(atoi(argv[i+1]));
            }
            i++;
        }
        
        int sum = 0;
        int i=0;
        for (auto it = dice.begin(); it!=dice.end(); ++it)
        {
            
            int tempResult = it->roll();
            cout << "d" << diceSizes[i] << " rolled a " << tempResult << "!\n";
            sum+= tempResult;
            i++;
        }
        
        cout << "You rolled " << sum << "." << endl;
    }
    return 0;
}
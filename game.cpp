#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
    //Seed the random number generator
    srand((unsigned int) time(NULL));

    //Create variables to store the player and AI throw
    int playerThrow = 0, aiThrow = 0;

    //This variable is going to keep track of 
    //whether or not the last game ended in a draw
    bool draw = false;

    //Loop to continually have the user enter in their throw, 
    //until there is a winner of the game
    do
    {
        //Prompt the player to enter in their throw
        cout << "Select your throw." << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cout << "Selection: ";
        cin >> playerThrow;

        //Output an inline to separate the user input from the game output
        cout << endl;

        //Randomly generate the AI throw
        aiThrow = (rand() % 3) + 1;
    } 
    while (draw);

    return 0;
}
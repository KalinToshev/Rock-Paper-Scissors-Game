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

        //Output the AI throw so that way the player knows what it is
        if (aiThrow == ROCK)
        {
            cout << "AI throws ROCK." << endl;
        }
        else if (aiThrow == PAPER)
        {
            cout << "AI throws PAPER." << endl;
        }
        else if (aiThrow == SCISSORS)
        {
            cout << "AI throws SCISSORS." << endl;
        }

        //Check the result of the games based on the player and AI throws

        /*
        Set the draw to false initially 
        and then only set it to true 
        if the game does end in a draw
        */
        draw = false;

        /*
        Check if the game ended in a draw
        otherwise check all the other possibilities 
        for the state of the game
        */
        if (playerThrow == aiThrow)
        {
            draw = true;
            cout << "Draw! Play again!" << endl;
        }
        else if (playerThrow == ROCK && aiThrow == SCISSORS)
        {
            cout << "ROCK beats SCISSORS! YOU WIN." << endl;
        }
        else if (playerThrow == ROCK && aiThrow == PAPER)
        {
            cout << "PAPER beats ROCK! YOU LOSE." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == ROCK)
        {
            cout << "PAPER beats ROCK! YOU WIN." << endl;
        }
        else if (playerThrow == PAPER && aiThrow == SCISSORS)
        {
            cout << "SCISSORS beats PAPER! YOU LOSE." << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == PAPER)
        {
            cout << "SCISSORS beats PAPER! YOU WIN." << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == ROCK)
        {
            cout << "ROCK beats SCISSORS! YOU LOSE." << endl;
        }

        /*
        Output endline just in case the menu is 
        presented to the user again 
        in the case of a draw
        */
        cout << endl;
    } 
    while (draw);

    return 0;
}
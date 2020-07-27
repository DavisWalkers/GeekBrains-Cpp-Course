#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // Declaration and Initialization
    int totalSticks;
    int userSticks;
    int computerSticks;
    int turn = 1;

    // Entering total number of sticks
    do 
    {
        cout << "Enter an amount of total sticks (from 10 to 30): ";
        cin >> totalSticks;
    } while (totalSticks < 10 || totalSticks > 30);

    // Game cycle
    while (true)
    {
        // Print info about the state of the game
        cout << "\tTurn: " << turn++ << ", sticks: " << totalSticks << endl;

        // User input
        do 
        {
            cout << "Player's turn (1 to 3 sticks): ";
            cin >> userSticks;
        } while (userSticks < 1 || userSticks > 3);

        // Update total sticks
        totalSticks -= userSticks;

        // Check whether the player lost
        if (totalSticks < 1)
        {
            cout << "Player lose!" << endl;
            break;
        }

        // Simulate computer turn
        cout << "Computer's turn: ";

        // Pseudo random
        computerSticks = (totalSticks * userSticks) % 4;
        // If the result is zero then change to one
        if (computerSticks == 0) computerSticks++;

        // Print computer's number and update total sticks
        cout << computerSticks << endl;
        totalSticks -= computerSticks;

        // Check whether the computer lost
        if (totalSticks < 1)
        {
            cout << "Computer lose!" << endl;
            break;
        }
    }


    return 0;
}
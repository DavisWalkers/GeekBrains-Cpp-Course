#include "les-2.h"

using namespace std;

// Returns a remainder of a division 
int Remainder(int val1, int val2)
{
    return val1 % val2;
}

// Prints integer to stdout
void PrintV(int value)
{
    cout << value << endl;
}

int main()
{
    // Task 1
    short var1 = 45000;
    unsigned char var2 = 1400;

    cout << "\tTask 1 - Types specifics" << endl;
    cout << "Variable 1: " << var1 << endl;
    cout << "Variable 2: " << var2 << endl;

    // Task 2
    int value1, value2;

    cout << "\tTask 2 - Evaluation of a remainder" << endl;
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
    cout << "The remainder is ";
    PrintV(Remainder(value1, value2));

    return SUCCESS;
}
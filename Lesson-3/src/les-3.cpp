#include "les-3.h"

using _geek::AddNum;
using namespace std;

int _geek::AddNum(int val1, int val2)
{
    return val1 + val2;
}

int main(int argc, char **argv)
{
    // Task 1
    cout << "\tTask 1 - Using namespace" << endl;
    int val1 = 1;
    int val2 = 5;
    cout << "Simple function result: " << AddNum(val1, val2) << endl;

    // Task 2
    cout << "\tTask 2 - Conditionals" << endl;    
    int input1, input2;
    cout << "Enter a number: ";
    cin >> input1;
    
    if (input1 > 5)
    {
        cout << "Enter another number: ";
        cin >> input2;
        if (input2 > 5 && input2 < 10)

            input2 -= 5;
        else
            input2 = 5 - input2;

        if (input2 == 0) 
            cout << "The result number is zero" << endl;
        else if (input2 > 0)    
            cout << "The result number is greater than zero" << endl;
        else 
            cout << "The result number is less than zero" << endl;        
    }

    // Task 3
    cout << "\tTask 3 - Operator switch" << endl;
    int input;
    const_set cs;
    cout << "Enter a number: ";
    cin >> input;

    switch(input)
    {
        case csConst1:
        case csConst2:
        case csConst3:
            cout << "First half of the set!" << endl;
            break;
        case csConst4:
        case csConst5:
        case csConst6:
            cout << "Second half of the set!" << endl;
            break;
        default:
            cout << "Not in the set!" << endl;
    }

    // Task 4
    cout << "\tTask 4 - While and inc/decrement" << endl;

    unsigned int num;
    cout << "Enter a num: ";
    cin >> num;

    do 
    {
        cout << num << endl;
        num -= 1;
    } while (num >= 3);

    // Task 6
    cout << "\tTask 6 - for loop" << endl;

    char str[10];

    for (int i = 0, j = 40; i < 10; i++, j += 3)
        str[i] = j;
    
    for (int i = 0; i < 10; i++)
        cout << str[i] << " ";

    cout << endl;
    

    return 0;
}
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

    return 0;
}
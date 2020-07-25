#include "les-3.h"

using _geek::AddNum;

int _geek::AddNum(int val1, int val2)
{
    return val1 + val2;
}

int main(int argc, char **argv)
{
    // Task 1
    std::cout << "\tTask 1 - Using namespace" << std::endl;
    int val1 = 1;
    int val2 = 5;
    std::cout << "Simple function result: " << AddNum(val1, val2) << std::endl;
    return 0;
}
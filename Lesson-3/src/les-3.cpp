#include "les-3.h"

int _geek::AddNum(int val1, int val2)
{
    return val1 + val2;
}

int main(int argc, char **argv)
{
    // Task 1
    std::cout << "Task 1 - Using namespace" << std::endl;
    int val1 = 1;
    int val2 = 5;
    std::cout << "Simple function result: " << _geek::AddNum(val1, val2) << std::endl;
    return 0;
}
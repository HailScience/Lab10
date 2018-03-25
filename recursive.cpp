#include <iostream>
#include <ctime>
#include <cstdlib>
#include "recursive.hpp"
using std::cout;
using std::cin;
using std::endl;

int fibonacci(int n)
{
    if(n == 1 || n == 0)
    {
        return(n);
    }
    else
    {
        return(fibonacci(n - 1)+fibonacci(n - 2));
    }
}

double recursive(int N)
{
    //RECURSIVE TIME
    int j = 0;
    int number;
    //cout << "Series: ";
    clock_t rStart = clock();
    while(j < N)
    {
        number = fibonacci(j);
        j++;
    }

    double recursive = double(clock() - rStart) / (double)CLOCKS_PER_SEC;

    return recursive;
}
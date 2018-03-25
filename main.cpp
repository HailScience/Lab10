#include <iostream>
#include <ctime>
#include <cstdlib>
#include "recursive.hpp"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool validData = false;
    int N;
    int term1 = 0;
    int term2 = 1;
    int nextTerm = 0;

    cout << "Enter number of terms: ";
    while(!validData)
    {
        cin >> N;
        if(cin.fail())
        {
            cout << "Error! Please enter an integer!" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            validData = true;
        }
    }

    double recursion = recursive(N);

    cout << "Recursive N (run for "  << N << " times): ";
    cout << recursion << " seconds" << endl;

    //cout << "Series: ";

    clock_t start = clock();
    for(int i = 1; i <= N; i++)
    {
        if(i == 1)
        {
            //cout << " " << term1;
        }
        if(i == 2)
        {
            //cout << " " << term2;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;

        //cout << nextTerm << " ";
    }

    double iterative = double(clock() - start) / (double)CLOCKS_PER_SEC;

    cout << "Iterative N (run for " << N << " times): ";
    cout << iterative << " seconds" << endl;

    return 0;
}


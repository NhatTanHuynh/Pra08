#include <iostream>
using namespace std;

int evenSum() {
    int upper, lower;
    int sum = 0;
    cout << "Enter the lower bound: ";
    cin >> upper;
    cout << "Enter the upper bound: ";
    cin >> lower;

    if (lower > upper) 
    {
        return -1;
    }

    for (int i = lower; i <= upper; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

#include <iostream>
using namespace std;

int sumArray(int a[], int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
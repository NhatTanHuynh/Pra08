#include <iostream>
using namespace std;

extern void multByTwo(int* ptr){
    *ptr *= 2;
}

int main()
{
    int a = 3;
    int* ptr = &a;

    // Should print 3
    std::cout << a << std::endl;

    multByTwo(ptr);

    // Should print 6
    std::cout << a << std::endl;
}
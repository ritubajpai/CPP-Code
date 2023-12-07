#include <iostream>
#define MAX(a, b) (a > b ? a : b)
 
int main()
{
    int a = 10, b = 20, c = -30;
 
    std::cout << "MAX(10, 20) = " << MAX(a, b)
              << std::endl;
    std::cout << "MAX(-30, 20) = " << MAX(c, b)
              << std::endl;
}

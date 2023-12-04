#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int num, temp, x, y, i = 0, bin =0;
    cout << "Enter a binary number : ";
    cin >> num;
	temp = num;
    while (temp != 0)
    {
        x = temp % 10;
        temp = temp / 10;
        y = temp % 10;
        if ((x && !y) || (!x && y))
            bin = bin + pow(10, i);
        i++;
    }
    cout << "\nGray code of " << num << " is : " << bin;
    return 0;
}

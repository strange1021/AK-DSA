#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        sum = sum + pow(lastDig, 3);
        n = n / 10;
    }
    if (m == sum)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
}
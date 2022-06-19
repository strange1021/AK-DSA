#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool c = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Composite";
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        cout << "Prime";
    }
}
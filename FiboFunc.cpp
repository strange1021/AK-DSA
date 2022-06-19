#include <iostream>
#include <math.h>
using namespace std;

void fibo(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
}
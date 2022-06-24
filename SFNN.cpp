// Sum First 'n' natural numbers

#include <iostream>
using namespace std;

int sumFirst(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        // s = (n * (n + 1)) / 2;
        s += i;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << sumFirst(n);
}
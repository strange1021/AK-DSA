#include <iostream>
using namespace std;

// Inverted Pattern

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main()
{
    int n;
    cin >> n;

    // Method 1

    for (int i = n; i >= 1; i--)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    // Method 2

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
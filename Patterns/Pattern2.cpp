#include <iostream>
using namespace std;

// Inverted Half Pyramid

// * * * * *
// * * * *
// * * *
// * *
// *

int main()
{
    int n;
    cin >> n;

    // Method 1

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Method 2

    int c = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) // n-i can be replaced by c
        {
            cout << "* ";
        }
        c--;
        cout << endl;
    }

    // Method 3

    int r = 1;
    while (r <= n)
    {
        int count = n;
        while (count - r + 1)
        {
            cout << "* ";
            count--;
        }
        cout << endl;
        r = r + 1;
    }
}
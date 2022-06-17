#include <iostream>
using namespace std;

// Palindromic Pattern

//         1 
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

int main()
{
    int n;
    cin >> n;

    // Method 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a--;
        }
        int b = 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << b << " ";
            b++;
        }
        cout << endl;
    }

    // Method 2

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int a = i;
        for (; j <= n; j++)
        {
            cout << a-- << " ";
        }
        int b = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << b++ << " ";
        }
        cout << endl;
    }
}
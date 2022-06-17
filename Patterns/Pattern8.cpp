#include <iostream>
using namespace std;

// 0-1 Pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main()
{
    int n;
    cin >> n;

    // Method 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
        }
        cout << endl;
    }

    // Method 2

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
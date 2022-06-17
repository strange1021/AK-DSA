#include <iostream>
using namespace std;

// Half Pyramid After 180' rotation

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

int main()
{
    int n;
    cin >> n;

    // Method 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    // Method 2

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Method 3

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << "  ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
}
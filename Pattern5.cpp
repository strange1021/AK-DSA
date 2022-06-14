#include <iostream>
using namespace std;

// Floyd's Triangle

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main()
{
    int n;
    cin >> n;

    // Method 1

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    // Method 2

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}
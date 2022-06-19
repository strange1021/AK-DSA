#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = 0;
    int sec = 1;
    int third;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        third = first + sec;
        first = sec;
        sec = third;
    }
    cout << "nth Fibonacci Sequence is " << third;
}
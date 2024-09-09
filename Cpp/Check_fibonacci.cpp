#include <iostream>
#include <cmath>
using namespace std;

bool checkSquare(int x)
{
    int s = 1;
    while (s * s < x)
    {
        s++;
    }
    return s * s == x;
}

bool checkMember(int N)
{
    return checkSquare(5 * N * N + 4) || checkSquare(5 * N * N - 4);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (checkMember(num))
    {
        cout << num << " is a member of the Fibonacci series." << endl;
    }
    else
    {
        cout << num << " is not a member of the Fibonacci series." << endl;
    }

    return 0;
}

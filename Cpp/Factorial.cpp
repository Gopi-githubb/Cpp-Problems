#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;
}
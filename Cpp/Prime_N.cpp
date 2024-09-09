#include <iostream>
using namespace std;
bool Prime_n(int n)
{
    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int x = 2; x <= n; x++)
    {
        if (Prime_n(x))
        {
            cout << x << endl;
        }
    }
}
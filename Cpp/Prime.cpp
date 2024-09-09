#include <iostream>
using namespace std;
bool isPrime(int n)
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
    bool ans = isPrime(n);
    if (ans == false)
    {
        cout << "its not a Prime Number" << endl;
    }
    else
    {
        cout << "Its a Prime Number" << endl;
    }
}
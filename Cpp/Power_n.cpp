#include <iostream>
using namespace std;
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return x * power(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    int ans = power(x, n);
    cout << ans;
}
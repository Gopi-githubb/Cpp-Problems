#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int function1 = fibo(n - 1);
    int function2 = fibo(n - 2);
    return function1 + function2;
}
int main()
{
    int n;
    cin >> n;
    int ans = fibo(n);
    cout << ans;
}

#include <iostream>
using namespace std;

int fibo(int n)
{
    int f1 = 0;
    int f2 = 1;
    int result = 0;

    if (n == 0)
        return f1;
    else if (n == 1)
        return f2;

    for (int i = 0; i < n - 1; i++)
    {
        result = f1 + f2;
        f1 = f2;
        f2 = result;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter N Number: ";
    cin >> n;

    int ans = fibo(n);
    cout << "The " << n << "th Fibonacci number is: " << ans << endl;

    return 0;
}

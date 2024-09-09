#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int SmallOutput = factorial(n - 1);
    return n * SmallOutput;
}
int main()
{
    int n;
    cout << "Enter any Number" << endl;
    cin >> n;
    int Output = factorial(n);
    cout << Output;
}
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int i = 1;
    int ans = 1;
    while (i <= n)
    {
        ans *= i;
        i++;
    }
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int Output = fact_n / (fact_r * fact_n_r);
    cout << Output << endl;
}
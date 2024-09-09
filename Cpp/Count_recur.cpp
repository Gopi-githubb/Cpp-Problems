#include <iostream>
using namespace std;
int countDigits(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
        return 1 + countDigits(n / 10); // log10(n)+1;
}
int main()
{
    int n;
    cin >> n;
    int last = countDigits(n);
    cout << last;
}
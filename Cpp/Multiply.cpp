#include <iostream>
using namespace std;
int Multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = Multiply(a, b);
    cout << ans << endl;
}
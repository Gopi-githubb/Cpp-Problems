#include <iostream>
using namespace std;
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, k = i; j <= i; j++, k++)
        {
            cout << k;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
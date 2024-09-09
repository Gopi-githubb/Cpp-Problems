#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int k = 1;
        while (k <= n - i)
        {
            cout << " ";
            k = k + 1;
        }
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        j = i - 1;
        while (j >= 1)
        {
            cout << "*";
            j--;
        }

        cout << endl;
        i = i + 1;
    }
}
#include <bits/stdc++.h>
using namespace std;
void symmetry(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
    int newspaces = 2;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < newspaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
        newspaces += 2;
    }
}
int main()
{
    int n;
    cin >> n;
    symmetry(n);
    return 0;
}
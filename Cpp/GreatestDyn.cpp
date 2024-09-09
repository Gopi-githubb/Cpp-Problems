#include <bits/stdc++.h>
using namespace std;
int GreatestInArray(int p[], int n)
{
    int max = p[0];
    for (int i = 1; i < n; i++)
    {
        if (max < p[i])
        {
            max = p[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Maximum Number of Elements" << endl;
    cin >> n;
    int *p = new int[100];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int max = GreatestInArray(p, n);
    cout << "The greatest element in the Arrray is:" << max << endl;
    delete[] p;
    return 0;
}
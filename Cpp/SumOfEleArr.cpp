#include <bits/stdc++.h>
using namespace std;
int SumElementsArray(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= n)
        {
            result += arr[i];
        }
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter NUmber of Elements" << endl;
    cin >> n;
    int *p = new int[100];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int result = SumElementsArray(p, n);
    cout << result << endl;
    delete[] p;
    return 0;
}
#include <iostream>
using namespace std;
bool is_sorted(int p[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (p[0] > p[1])
    {
        return false;
    }
    bool ans = is_sorted(p + 1, n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int *p = new int[100];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int Output = is_sorted(p, n);
    cout << Output;
}
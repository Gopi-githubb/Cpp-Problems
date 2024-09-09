#include <iostream>
using namespace std;
int Ret_Index(int p[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    else if (p[0] == x)
    {
        return 0;
    }
    int ans = Ret_Index(p + 1, size - 1, x);
    if (ans == -1)
    {
        return -1;
    }
    else
        return ans + 1;
}
int main()
{
    int size, x;
    cin >> size >> x;
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    int Output = Ret_Index(p, size, x);
    cout << Output;
    delete[] p;
    return 0;
}
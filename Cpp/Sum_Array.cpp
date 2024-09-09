#include <iostream>
using namespace std;
int sum(int p[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return p[0];
    }
    else
    {
        return p[0] + sum(p + 1, size - 1);
    }
}
int main()
{
    int size;
    cin >> size;
    int *p = new int[100];
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    int Output = sum(p, size);
    cout << Output;
}
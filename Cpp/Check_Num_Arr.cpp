#include <iostream>
using namespace std;
bool Check_Num(int p[], int size, int x)
{
    if (size == 0)
    {
        return 0;
    }
    else if (p[0] == x)
    {
        return true;
    }
    bool Output = Check_Num(p + 1, size - 1, x);
    return Output;
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
    int Output = Check_Num(p, size, x);
    cout << Output << endl;
    delete[] p;
    return 0;
}
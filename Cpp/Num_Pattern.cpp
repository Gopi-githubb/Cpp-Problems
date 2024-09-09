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
        int k = n;
        while (j <= i)
        {
            cout << k;
            k--;
            j++;
        }
        cout << endl;
        i++;
    }
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}*/
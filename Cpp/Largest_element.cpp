#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arraysize[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arraysize[i];
    }

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arraysize[i] > max)
        {
            max = arraysize[i];
        }
    }
    cout << max << endl;
}
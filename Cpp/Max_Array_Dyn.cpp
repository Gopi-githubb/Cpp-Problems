#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size of an Array" << endl;
    cin >> n;
    double *allocation = new double;
    for (int i = 0; i < n; i++)
    {
        cin >> allocation[i];
    }
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < allocation[i])
        {
            max = allocation[i];
        }
    }
    cout << "Largest number is:" << max;
}
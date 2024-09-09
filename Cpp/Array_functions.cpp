#include <iostream>
using namespace std;
void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int input[100];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    printarray(input, n);
}

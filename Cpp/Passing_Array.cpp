#include <iostream>
using namespace std;
void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
}
int main()
{

    int input[100] = {1, 2, 3};
    /*for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }*/
    printarray(input, 100);
}
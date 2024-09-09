#include <iostream>
using namespace std;
void reverse(int input[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void printarray(int input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << input[i];
    }
}
int main()
{
    int input[5] = {1, 2, 3, 4, 5};
    reverse(input, 5);
    printarray(input, 5);
}

#include <iostream>
#include <string.h>
using namespace std;
void ReverseString(char input[])
{
    int length = strlen(input);
    int i = 0, j = length - 1;
    while (i < j && i != j)
    { // reverse(input.begin(),input.end()):
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char input[100];
    cin.getline(input, 15);
    ReverseString(input);
    cout << input;
}
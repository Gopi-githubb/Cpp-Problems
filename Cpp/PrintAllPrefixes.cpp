#include <iostream>
#include <climits>
#include <string.h>
using namespace std;
void PrintAllPrefixes(char input[])
{
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}
int main()
{
    char input[100];
    cin >> input;
    PrintAllPrefixes(input);
}
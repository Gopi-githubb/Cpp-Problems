#include <iostream>
#include <string.h>
using namespace std;
int length(char input[])

{
    int count = 0; // int lenght=strlen(input)
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char input[100];
    cin.getline(input, 10);
    int ans = length(input);
    cout << input << ' ' << ans << endl;
}
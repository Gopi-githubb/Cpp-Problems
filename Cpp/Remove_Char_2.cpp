#include <iostream>
using namespace std;

void removeCharRecursively(char str[], char m, char n)
{
    if (str[0] == '\0')
    {
        return; // Base case: reached end of string
    }

    if (str[0] == m)
    {
        str[0] = n; // Replace character if found
    }

    removeCharRecursively(str + 1, m, n);
}

int main()
{
    const int maxSize = 100;
    char str[maxSize];
    char m;
    char n;

    cout << "Enter a string: ";
    cin.getline(str, maxSize);

    cout << "Enter character to remove: ";
    cin >> m;

    cout << "Enter character to replace with: ";
    cin >> n;

    removeCharRecursively(str, m, n);

    cout << "Resulting string: " << str << endl;
    return 0;
}

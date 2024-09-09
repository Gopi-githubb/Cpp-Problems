#include <iostream>
using namespace std;
string getString(int n)
{
    if (n == 2)
    {
        return "abc";
    }

    if (n == 3)
    {
        return "def";
    }
    if (n == 4)
    {
        return "ghi";
    }
    if (n == 5)
    {
        return "jkl";
    }
    if (n == 6)
    {
        return "mno";
    }
    if (n == 7)
    {
        return "pqrs";
    }
    if (n == 8)
    {
        return "tuv";
    }
    if (n == 9)
    {
        return "wxyz";
    }
    return " ";
}

void printkeyPad(int n, string currentoutput)
{
    if (n == 0)
    {
        cout << currentoutput << endl;
        return;
    }
    int lastdigit = n % 10;
    int smalldigit = n / 10;
    string options = getString(lastdigit);
    for (int i = 0; i < options.length(); i++)
    {
        printkeyPad(smalldigit, options[i] + currentoutput);
    }
}

int main()
{
    int n;
    cin >> n;
    printkeyPad(n, "");
}
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
int keypad(int input, string output[])
{
    if (input == 0)
    {
        cout << "";
        return 1;
    }
    int lastDigit = input % 10;
    int smallNumber = input / 10;
    int smallOutputsize = keypad(smallNumber, output);
    string options = getString(lastDigit);
    for (int i = 0; i < options.length() - 1; i++)
    {
        for (int j = 0; j < smallOutputsize; j++)
        {
            output[j + (i + 1) * smallOutputsize] = output[j];
        }
    }
    int k = 0;
    for (int i = 0; i < options.length(); i++)
    {
        for (int j = 0; j < smallOutputsize; j++)
        {
            output[k] = output[k] + options[i];
            k++;
        }
    }
    return smallOutputsize * options.length();
}
int main()
{
    int n;
    cin >> n;
    string *output = new string[500];
    int count = keypad(n, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
}
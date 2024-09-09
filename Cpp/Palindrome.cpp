#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int N = name.length();
    bool flag = true;
    for (int i = 0; i <= N / 2; i++)
    {
        if (name[i] != name[N - i - 1])
        {

            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Its a Palindrome" << endl;
    }
    else
    {
        cout << "Its not a Palindrome" << endl;
    }
}
/*using functions
bool checkPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }

    return true;
}
*/
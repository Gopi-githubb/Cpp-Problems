#include <iostream>
using namespace std;
void removeX(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] != 'x')
    {
        removeX(s + 1);
    }
    else
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    removeX(str);
    cout << str;
    return 0;
}
// #include <iostream>
#include <string>
using namespace std;
void removex(char n[])
{
    if (n[0] == '\0')
    {
        return;
    }
    if (n[0] != 'x')
    {
        removex(n + 1);
    }
    else
    {
        int i = 0;
        while (n[i] != '\0')
        {
            n[i] = n[i + 1];
            i++;
        }
        removex(n);
    }
}

int main()
{
    char n[100];
    cin.getline(n, 100); // Fixed the typo
    removex(n);
    cout << n << endl;
}
/*#include <iostream>
#include <string>
using namespace std;
void removex(char n[])
{
    if(n[0]=='\0')
    {
        return;
    }
    if(n[0]!='x')
    {
        removex(n+1);
    }
    else{
    int i=0;
    while(n[i]!='\0')
    {
        n[i]=n[i+1]; to shift all char to left side
        i++;
    }
    removex(n);
    }
}

int main() {
    char n[100];
    cin.getline(n, 100); // Fixed the typo
    removex(n);
    cout << n << endl;
}
*/
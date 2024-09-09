#include <iostream>
using namespace std;
inline int max(int a, int b)
{
    return (a > b) ? a : b; // Teritary operator @inline functions
}
int main()
{
    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    cout << c << endl;
    int x, y;
    x = 12;
    y = 15;
    int z = max(x, y);
    cout << z << endl;
}

/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = (a > b) ? a : b;
    cout << c;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    cout << c << endl;
}*/
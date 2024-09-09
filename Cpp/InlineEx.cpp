#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 10;
    int b = 10;
    int c = add(a, b);
    cout << c << endl;
    int x = 748l;
    int y = 4794;
    int z = add(x, y);
    cout << z << endl;
}
/*faster execution,overhead is reduced because the function code is directly inserted where it is called*/
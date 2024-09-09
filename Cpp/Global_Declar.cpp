#include <iostream>
using namespace std;

int x = 1;

void print()
{
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main()
{
    print();
    return 0;
}

/*#include <iostream>
using namespace std;
int a;
void g()
{
    a++;
    cout << a << endl;
}
void f()
{
    cout << a << endl;
    a++;
    g();
}
int main()
{
    a = 10;
    f();
    cout << a << endl;
}*/

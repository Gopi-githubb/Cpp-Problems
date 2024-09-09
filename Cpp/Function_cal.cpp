#include <iostream>
using namespace std;
void B(int n)
{
    cout << 5 << endl;
}
void A(int n)
{
    cout << 1 << endl;
    B(n);
    cout << 2 << endl;
}
int main()
{
    int n = 10;
    cout << 3 << endl;
    A(n);
    {
        cout << 4 << endl;
        cout << n << endl;
    }
}
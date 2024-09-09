#include <iostream>
using namespace std;
void print(int *P)
{
    cout << *P << endl;
}
int main()
{
    int i = 10;
    int *P = &i;
    print(P);
}
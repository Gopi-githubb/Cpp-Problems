#include <bits/stdc++.h>
using namespace std;
bool minJumps(vector<int> &arr)
{
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i > minIndex)
        {
            return false;
        }
        minIndex = max(minIndex, i + arr[i]);
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = minJumps(arr);

    if (ans)
    {
        cout << "It is possible to reach the last index." << endl;
    }
    else
    {
        cout << "It is not possible to reach the last index." << endl;
    }
    return 0;
}
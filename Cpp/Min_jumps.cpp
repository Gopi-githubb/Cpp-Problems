#include <bits/stdc++.h>
using namespace std;
int minJumps(vector<int> &arr)
{
    int minIndex = 0;
    int jumps = 0;
    int currentIndex = 0;
    int n = arr.size();
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = max(minIndex, arr[i] + i);
        if (i == currentIndex)
        {
            currentIndex = minIndex;
            jumps++;
        }
        if (currentIndex >= n - 1)
            break;
    }
    return currentIndex >= n - 1 ? jumps : -1;
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
    int ans = minJumps(arr);
    cout << ans;
    return 0;
}
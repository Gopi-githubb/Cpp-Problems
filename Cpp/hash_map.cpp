#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
map<int, int> mapppnew(vector<int> &arr, int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    return mpp;
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
    map<int, int> ans = mapppnew(arr, n);
    for (auto it : ans) // iterate in the
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << ans[num] << endl;
    }
    return 0;
}*/
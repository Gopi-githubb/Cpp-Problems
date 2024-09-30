#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
vector<int> hashnum(vector<int> &arr, int n)
{
    vector<int> hash(13, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] < 13)
        {
            hash[arr[i]] += 1;
        }
    }
    return hash;
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
    vector<int> ans = hashnum(arr, n);
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        if (number >= 0 && number < 13)  // Check if the query is valid
            cout << ans[number] << endl; // Output the count for the queried number
        else
            cout << 0 << endl; // If out of range, print 0
    }

    return 0;
}*/
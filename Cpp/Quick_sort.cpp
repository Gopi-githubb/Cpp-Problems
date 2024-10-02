
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[low];
        int i = low + 1;
        int j = high;
        while (i < j)
        {
            while (arr[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
                std::swap(arr[i], arr[j]); /*   int temp = arr[i];
                                           arr[i] = arr[j];
                                            arr[j] = temp;*/
        }
        std::swap(arr[low], arr[j]);
        return j;
    }

public:
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pIndex = partition(arr, low, high);
            quickSort(arr, low, pIndex - 1);
            quickSort(arr, pIndex + 1, high);
        }
    }

public:
    void qs(int arr[], int n)
    {
        quickSort(arr, 0, n - 1);
    }
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution sol;
    sol.qs(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
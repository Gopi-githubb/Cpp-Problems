#include <iostream>
#include <vector>
using namespace std;
int Selectionsort(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], minindex = i;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
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
    Selectionsort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
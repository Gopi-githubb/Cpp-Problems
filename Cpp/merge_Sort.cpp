#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int LeftArray[n1];
    int RightArray[n2];

    for (int i = 0; i < n1; i++)
    {
        LeftArray[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        RightArray[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            arr[k] = LeftArray[i];
            i++;
        }
        else
        {
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arraySize = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arraySize - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

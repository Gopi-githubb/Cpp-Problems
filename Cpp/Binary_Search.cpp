#include <iostream>
#include <vector>
using namespace std;
int Binary(vector<int> arr, int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int result = Binary(arr, size, target);

    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}

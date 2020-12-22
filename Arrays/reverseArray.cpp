#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// reversing....
void rvereseArray(int arr[], int first, int last)
{
    while (first < last)
    {
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}

// main
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<
    printArray(arr, size);

    // __________________________________
    cout << endl;
    return 0;
}
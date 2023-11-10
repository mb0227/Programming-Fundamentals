#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cout << "Enter elements for first array, it must be 2: ";
    cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter no of elements for second array: ";
    cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = arr2[i];
    }

    cout << "Merged Array: ";
    cout << "[";
    for (int i = 0; i < mergedSize - 1; i++)
    {
        cout << mergedArray[i] << ", ";
    }
    cout << mergedArray[mergedSize - 1] << "]";
    return 0;
}
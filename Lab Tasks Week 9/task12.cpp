#include <iostream>
#include <cmath>
using namespace std;
bool isSpecialArray(int arr[], int size)
{
    int evenCount = 0, oddCount = 0, totalEvens, totalOdds;
    bool isEven = false, isOdd = false;
    for (int i = 0; i < size; i = i + 2)
    {
        if (arr[i] % 2 == 0)
        {
            isEven = true;
            evenCount = evenCount + 1;
        }
        else
            isEven = false;
    }
    for (int i = 1; i < size; i = i + 2)
    {
        if (arr[i] % 2 == 0)
            isOdd = false;
        else
        {
            oddCount = oddCount + 1;
            isOdd = true;
        }
    }
    if (size % 2 == 0)
    {
        totalEvens = size / 2;
        totalOdds = size - totalEvens;
    }
    else
    {
        totalOdds = size / 2;
        totalEvens = size - totalOdds;
    }
    if (((isEven == true) && (isOdd == true)) && (((evenCount == totalEvens) && (oddCount == totalOdds))))
        return true;
    else
        return false;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (isSpecialArray(arr, size))
        cout << "The array is special.";
    else
        cout << "Array is not special";
    return 0;
}
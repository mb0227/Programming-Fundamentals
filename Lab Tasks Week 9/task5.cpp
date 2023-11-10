#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == number)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers, one per line: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (isAlreadyEntered(arr, i, arr[i]) == 1)
        {
            cout << "Already entered: " << arr[i] << endl;
        }
    }
    cout << "Unique Numbers entered: ";
    for (int i = 0; i < n; i++)
    {
        if (isAlreadyEntered(arr, i, arr[i])==0)
            cout << arr[i] << " ";
    }
    return 0;
}

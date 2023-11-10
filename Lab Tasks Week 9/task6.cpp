#include <iostream>
#include <cmath>
using namespace std;
int findLargestNumber(int arr[], int size)
{
    int y = 0;
    for (int j = 0; j < size; j++)
    {
        y = max(arr[j], y);
    }
    return y;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largestNum = findLargestNumber(arr, n);
    cout << largestNum;
    return 0;
}
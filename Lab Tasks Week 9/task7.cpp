#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0;
    cout << "Enter the number of resistors in series circuit: ";
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Total resistance is: " << sum;

    return 0;
}
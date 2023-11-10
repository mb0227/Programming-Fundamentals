#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter the number of elements: ";
    cin >> count;
    if (count < 0)
    {
        cout << "Invalid input.  Number of elements must be greater than 0.";
    }
    else
    {
        int num[count];
        for (int i = 0; i < count; i++)
        {
            cin >> num[i];
        }
        for (int j = count - 1; j >= 0; j--)
        {
            cout << num[j] << " ";
        }
    }
    return 0;
}
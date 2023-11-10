#include <iostream>
using namespace std;
int main()
{
    float sum, amount;
    float c[4];
    cout << "Enter quarters: ";
    cin >> c[0];
    cout << "Enter dimes: ";
    cin >> c[1];
    cout << "Enter nickels: ";
    cin >> c[2];
    cout << "Enter pennies: ";
    cin >> c[3];
    cout << "Enter the total amount due: ";
    cin >> amount;
    sum = c[0] * 0.25 + c[1] * 0.1 + c[2] * 0.05 + c[3] * 0.01;
    cout << "Can you pay the amount? ";
    if (sum < amount)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}
#include <iostream>
using namespace std;
int digitSum(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << digitSum(number);
}

int digitSum(int number)
{
    int mod = 0, count = 0;
    while (number > 0)
    {
        mod = number % 10;
        number = number / 10;
        count = count + mod;
    }
    return count;
}
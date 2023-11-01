#include <iostream>
using namespace std;

void generateFibonacci(int length);

int main()
{
    int length;
    cout << "Enter the length of fibonacci series: ";
    cin >> length;
    generateFibonacci(length);
    return 0;
}

void generateFibonacci(int length)
{

    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    if (length >= 1)
    {
        cout << num1;
    }

    for (int count = 0; count < length; count++)
    {
        cout << ", " << num2;
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}
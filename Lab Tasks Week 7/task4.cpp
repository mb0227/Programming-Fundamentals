#include <iostream>
using namespace std;

void frequencyChecker(int num, int digit)
{
    int mod = 0, frequency = 0;
    while (num > 0)
    {
        mod = num % 10;
        num = num / 10;
        if (mod == digit)
        {
            frequency = frequency + 1;
        }
    }
    cout << "Frequency: " << frequency;
}

int main()
{
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to check: ";
    cin >> digit;
    frequencyChecker(num, digit);
    return 0;
}
#include <iostream>
using namespace std;

int calculateGCD(int a, int b);
int calculateLCM(int a, int b);

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int GCD = calculateGCD(a, b);
    int LCM = calculateLCM(a, b);

    cout << "GCD: " << GCD << endl;
    cout << "LCM: " << LCM << endl;

    return 0;
}

int calculateGCD(int a, int b)
{
    int x;
    while (b != 0)
    {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int calculateLCM(int a, int b)
{
    int GCD = calculateGCD(a, b);
    int LCM = (a * b) / GCD;
    return LCM;
}

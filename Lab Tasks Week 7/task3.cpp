#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int checker(int num)
{
    if (num < 0)
    {
        num = num * -1;
    }
    string digits = to_string(num);
    int length = digits.length();
    return length;
}
int main()
{
    int num;
    int result;
    cout << "Enter a number: ";
    cin >> num;
    result = checker(num);
    cout << "Total number of digits: " << result;
}

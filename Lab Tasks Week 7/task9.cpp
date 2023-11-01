#include <iostream>
using namespace std;

int calculatePrice(int year, int money);

int main()
{
    int money, year;
    cout << "Enter money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;

    int result = calculatePrice(year, money);
    if (result >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << -result << " dollars to survive." << endl;
    }

    return 0;
}

int calculatePrice(int year, int money)
{
    int age = 18;
    for (int y = 1800; y <= year; y++)
    {
        if (y % 2 == 0)
        {
            money = money - 12000;
        }
        else
        {
            money = money - (12000 + 50 * age);
        }
        age++;
    }

    return money;
}
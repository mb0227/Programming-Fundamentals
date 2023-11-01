#include <iostream>
using namespace std;

int calculateMoney(int age, int washingMachinePrice, int toyPrice);

int main()
{
    int age, washingMachinePrice, toyPrice, remainingAmount;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;
    int totalMoneySaved = calculateMoney(age, washingMachinePrice, toyPrice);
    if (totalMoneySaved > washingMachinePrice)
    {
        remainingAmount = totalMoneySaved - washingMachinePrice;
        cout << "Yes!" << endl;
        cout << remainingAmount;
    }
    else
    {
        remainingAmount = washingMachinePrice - totalMoneySaved;
        cout << "No!" << endl;
        cout << remainingAmount;
    }
    return 0;
}

int calculateMoney(int age, int washingMachinePrice, int toyPrice)
{

    int moneyReceieved = 0, savedMoney = 0, numberOfToys = 0;
    for (int count = 1; count <= age; count++)
    {
        if (count % 2 == 0)
        {
            moneyReceieved = moneyReceieved + 10;
            savedMoney = moneyReceieved + savedMoney - 1;
        }
        else if (count % 2 == 1)
        {
            numberOfToys = numberOfToys + 1;
        }
    }
    int totalMoneySaved = (numberOfToys * toyPrice) + savedMoney;
    return totalMoneySaved;
}
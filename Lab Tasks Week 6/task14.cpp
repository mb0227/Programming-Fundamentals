#include <iostream>
#include<iostream>
using namespace std;


    
string calculateCost(float budget, string category, int numPeople);

int main()
{
    float budget;
    int numberOfPeople;
    string category;
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the number of people in the group: ";
    cin >> numberOfPeople;
    cout << calculateCost(budget, category, numberOfPeople);
    return 0;
}

string calculateCost(float budget, string category, int numberOfPeople)
{
    float ticketsPrice;
    float remainingMoney;
    float transportBudget;
    float extraMoneyRequired;
    if (numberOfPeople <= 4)
    {
        transportBudget = budget - budget * 0.75;
        if (category == "Normal")
        {
            ticketsPrice = numberOfPeople * 249.99;
            remainingMoney = transportBudget - ticketsPrice;
            if (remainingMoney > 0)
            {
                return "Yes! You have " + to_string(remainingMoney) + " leva left.";
            }
            if (remainingMoney < 0)
            {
                extraMoneyRequired = ticketsPrice - transportBudget;
                return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
            }
        }

            if (category == "VIP")
            {
                ticketsPrice = numberOfPeople * 499.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }
        }
        if (numberOfPeople > 4 && numberOfPeople < 10)
        {
            transportBudget = budget - budget * 0.60;
            if (category == "Normal")
            {
                ticketsPrice = numberOfPeople * 249.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }

            if (category == "VIP")
            {
                ticketsPrice = numberOfPeople * 499.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }
        }

        if (numberOfPeople > 9 && numberOfPeople <25)
        {
            transportBudget = budget - budget * 0.50;
            if (category == "Normal")
            {
                ticketsPrice = numberOfPeople * 249.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }

            if (category == "VIP")
            {
                ticketsPrice = numberOfPeople * 499.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }
        }

        if (numberOfPeople > 24 && numberOfPeople <50)
        {
            transportBudget = budget - budget * 0.40;
            if (category == "Normal")
            {
                ticketsPrice = numberOfPeople * 249.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }

            if (category == "VIP")
            {
                ticketsPrice = numberOfPeople * 499.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }
        }

        if (numberOfPeople > 49)
        {
            transportBudget = budget - budget * 0.25;
            if (category == "Normal")
            {
                ticketsPrice = numberOfPeople * 249.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }

            if (category == "VIP")
            {
                ticketsPrice = numberOfPeople * 499.99;
                remainingMoney = transportBudget - ticketsPrice;
                if (remainingMoney > 0)
                {
                    return "Yes! You have " + to_string(remainingMoney) + " leva left.";
                }
                if (remainingMoney < 0)
                {
                    extraMoneyRequired = ticketsPrice - transportBudget;
                    return "Not enough money! You need " + to_string(extraMoneyRequired) + " leva.";
                }
            }
        }
    }
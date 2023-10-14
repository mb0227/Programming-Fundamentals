#include <iostream>
using namespace std;

float discount(string day, string month, float amount)
{
    float payable;
    if(month=="October" && day=="Sunday")
    {
        payable=amount-amount*0.1;
        return payable;
    }
    if(day=="Sunday")
    {
        if(month !="October")
        {
            payable=amount-amount*0.05;
            return payable;
        }
    }
    if(day!="Sunday")
    {
        payable=amount;
        return payable;
    }
}
main()
{
    string day, month;
    float amount,payable;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>> month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    payable=discount(day, month, amount);
    cout<<"Payable Amount after discount: "<<payable<<endl;
}
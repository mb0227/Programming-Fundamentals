#include <iostream>
using namespace std;

float lowestPrice(int kilometers, string period)
{
    float amount;
    if(kilometers<20 && period=="day")
    {
        amount=(kilometers*0.79)+0.70;
        return amount;
    }

    if(kilometers<20 && period=="night")
    {
        amount=(kilometers*0.90)+0.70;
        return amount;
    }
    if(kilometers>19 && (period=="day"|| period=="night"))
    {
        amount=kilometers*0.09;
        return amount;
    }
    if(kilometers>99 && (period=="day"|| period=="night"))
    {
        amount=kilometers*0.06;
        return amount;
    }

    
}
main()
{
    int kilometers;
    string period;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;
    cout<<"Enter the period of the day (day/night): ";
    cin>>period;
    float price=lowestPrice(kilometers,period);
    cout<<"Lowest price for "<<kilometers<<" kilometers: "<<price<<" EUR";

}
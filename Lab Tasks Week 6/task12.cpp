#include <iostream>
using namespace std;

float totalIncome(string screening, float rows, float columns)
{
    float amount;
    if(screening=="Premiere")
    {
        amount=rows*columns*12;
        return amount;
    }
    if(screening=="Normal")
    {
        amount=rows*columns*7.5;
        return amount;
    }
    if(screening=="Discount")
    {
        amount=rows*columns*5;
        return amount;
    }
}
main()
{
    float rows,columns;
    string screening;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screening;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    cout<<totalIncome(screening, rows, columns);
}
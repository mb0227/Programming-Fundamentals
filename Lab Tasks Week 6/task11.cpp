#include <iostream>
using namespace std;

string checkSpeed(float speed)
{
    string result;
    if(speed<=10)
    {
        result= "slow";
        return result;
    }
    if(speed>10 && speed<=50)
    {
        result="average";
        return result;
    }
    if(speed>50 && speed<=150)
    {
        result="fast";
        return result;
    }
    if(speed>150 && speed<1000)
    {
        result="ultra-fast";
        return result;
    }
    if(speed>1000)
    {
        result="extremely fast";
        return result;
    }
}
main()
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    cout<<checkSpeed(speed);
}
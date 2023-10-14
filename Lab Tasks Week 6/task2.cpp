#include <iostream>
using namespace std;

bool parityAnalysis(int number)
{
    int remainder1,number2,remainder2,remainder3;
    string result;
    remainder1=number%10;
    number2=number/10;
    remainder2=number2%10;
    remainder3=number2/10;
    int sum=remainder1+remainder2+remainder3;
    if (sum%2==0 && number%2==0)
    {
        return true;
    }
    if (sum%2==1 && number%2==1)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
main()
{
    int number;
    cout<<"Enter a 3-digit number: ";
    cin>>number;
    cout<<parityAnalysis(number);
}
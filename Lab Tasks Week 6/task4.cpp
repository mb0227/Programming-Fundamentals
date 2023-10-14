#include <iostream>
using namespace std;

int findGreatest(int num1, int num2, int num3)
{
    int result;
    if(num1>num2 && num1>num3)
    {
        result=num1;
        return result;
    }
    if(num2>num1 && num2>num3)
    {
        result=2;
        return result;
    }
    if(num3>num2 && num3>num1)
    {
        result=num3;
        return result;
    }
}
main()
{
    int num1,num2,num3;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    int result=findGreatest(num1, num2, num3);
    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result;


}
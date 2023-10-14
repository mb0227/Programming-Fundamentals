#include <iostream>
using namespace std;

bool greaterNum(int num1,int num2)
{
if (num1>num2)
{
    return true;
}


return false;

}
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
cout<<greaterNum(num1, num2);
}

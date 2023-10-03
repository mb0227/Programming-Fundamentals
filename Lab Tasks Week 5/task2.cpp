#include <iostream>
#include<cmath>
using namespace std;

main(){
    float baseNumber,exponent,result;
    cout<<"Enter the base number: ";
    cin>> baseNumber;
    cout<<"Enter the exponent: ";
    cin>> exponent;
    result= pow(baseNumber, exponent);
    cout<<baseNumber<<" raised to the power "<<exponent<<" is: "<<result;
    

}
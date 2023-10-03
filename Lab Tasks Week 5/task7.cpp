#include <iostream>
#include<cmath>
using namespace std;

void IsSymmetrical(){
    int number, number2,number3,rem1,rem2,rem3;
    cout<<"Enter a three-digit number: ";
    cin>>number;
    rem1=number%10;
    number2=number/10;
    rem2=number2%10;
    number3=number2/10;
    if(rem1==number3){
        cout<<"The number is symmetrical.";
        
    }
    else {
        cout<<"The number is not symmetrical.";
    }
}

main(){
    IsSymmetrical();
} 


#include <iostream>
#include<cmath>
using namespace std;

void OddishOrEvenish(){
    int number1,number2, number3, number4, number5,rem1, rem2,rem3,rem4,rem5,sum,evenOrOdd;
    cout<<"Enter a five-digit number: ";
    cin>>number1;
    rem1=number1%10;
    number2=number1/10;
    rem2=number2%10;
    number3=number2/10;
    rem3=number3%10;
    number4=number3/10;
    rem4=number4%10;
    number5=number4/10;
    rem5=number5%5;

    sum=rem1+rem2+rem3+rem4+rem5;
    evenOrOdd=sum%2;

    if(evenOrOdd==0){
        cout<<"Evenish";
    }
    else{
        cout<<"Oddish";
    }
}
main(){
   OddishOrEvenish();

}
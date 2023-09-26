#include<iostream>
using namespace std

void evenOrOdd(int number){

if (number%2==0){
cout<<"Number "<<number<<" is even";
}
if (number%2!=0){
cout<<"Number "<<number<<" is odd";
}
}


main(){
int number;
cout<<"Enter a number: ";
cin>>number;
evenOrOdd(number);
}
#include<iostream>
using namespace std;

void addition(float number1,float number2){
int add;
add= number1+number2;
cout<<"Addition: "<<add;
}

void subtraction(float number1,float number2){
int minus;
minus=number1-number2;
cout<<"Subtraction: "<<minus;
}

void multiplication(float number1,float number2){
int multiply;
multiply=number1*number2;
cout<<"Multiplication: "<<multiply;
}

void division(float number1,float number2){
int divide;
divide=number1/number2;
cout<<"Division: "<<divide;
}

main(){
float number1,number2;
char op;
cout<<"Enter 1st number: ";
cin>>number1;
cout<<"Enter 2nd number: ";
cin>> number2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
	if(op =='+' )
	{
          addition(number1,number2);
      
	}
	if(op =='-' )
	{
      subtraction(number1,number2);
     
	}
	if(op =='*' )
	{
      multiplication(number1,number2);
     
	}
	if(op=='/' )
	{
        division(number1,number2);
     
	}
}
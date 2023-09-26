#include<iostream>
using namespace std;

void calculatePayableAmount(){
int amount;
string day;
int discount;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>amount;

if(day=="Sunday"){
discount=amount-amount/10;
cout<<"Payable Amount: $"<<discount; 
}
else
{
cout<<"Payable Amount: $"<<amount; 
}

}

main(){
calculatePayableAmount();
}

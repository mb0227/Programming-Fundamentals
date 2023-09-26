#include<iostream>
using namespace std;

void calculatePayableAmount(){
int amount;
int discount,discountSunday;
string day;
while(1){
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>amount;
if(day=="Sunday"){
discountSunday=amount-amount/10;
cout<<"Payable Amount: $"<<discountSunday<<endl;; 
}
else
{
discount=amount-amount*0.05;
cout<<"Payable Amount: $"<<discount<<endl; 
}

}
 
}

main(){
calculatePayableAmount();
}

#include<iostream>
using namespace std;

void passORfail(int marks){

if (marks>50){
cout<<"Pass";
} 
if (marks<=50){
cout<<"Fail";
}

}


main(){
int marks;
cout<<"Enter your score: ";
cin>>marks;
passORfail(marks);
}

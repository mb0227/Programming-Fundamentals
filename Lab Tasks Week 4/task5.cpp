#include<iostream>
using namespace std;

void vote(){
int age;
cout<<"Enter your age: ";
cin>>age;
if (age>=18){
cout<<"You are eligible to vote.";
} 
if (age<18){
cout<<"You are not eligible to vote.";
}
}
main(){
vote();
}

#include <iostream>
using namespace std;

main(){
double charge, time ;
cout<<"Enter the charge (Q) in Coulombs: ";
cin >>charge;
cout<<"Enter the time (t) in seconds: ";
cin >>time;
double current;
current = charge/time;
cout<<"The current (I) is: "<< current << " Amperes"<<endl;
}
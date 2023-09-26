#include <iostream>
using namespace std;

main(){
string name;
double matric_marks, inter_marks, ecat_marks;
cout<<"Enter the student's name: ";
cin>> name;
cout<<"Enter matriculation marks (out of 1100): ";
cin>> matric_marks ;
cout<<"Enter intermediate marks (out of 550): ";
cin>> inter_marks ;
cout<<"Enter Ecat marks (out of 400): ";
cin>> ecat_marks;
double aggregate ;
aggregate = ecat_marks/400*50 + inter_marks/550*40 + matric_marks/1100*10 ; 
cout<< "Aggregate score for " <<name<< " in UET is: " <<aggregate<< "%"<<endl; 
}
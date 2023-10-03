#include <iostream>
#include<cmath>
using namespace std;

void findHeight(){
    float distance, angle, radians, angleSolved, height;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    radians=angle*0.0174533;
    angleSolved=tan(radians);
    height=angleSolved*distance;
    cout<<"The height of the tree is: "<<height<<" feet";
   

}
main(){
    findHeight();
}
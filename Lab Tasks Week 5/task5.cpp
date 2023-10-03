#include <iostream>
#include<cmath>
using namespace std;

void quadratic(){
    float a,b,c,determinant,root,root1,root2, formula,x;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    determinant=pow(b,2)-4*a*c;
    if(determinant==0){
        root=-b/(2*a);
        cout<<"Solution: x = "<<root;
    }
    if(determinant>0){
        root1=(-b+sqrt(determinant))/(2*a);
        root2=(-b-sqrt(determinant))/(2*a);
        cout<<"Complex Solutions: x = "<<root1<<" and x = "<<root2;
    }

       if(determinant<0){
        root1=-b/(2*a);
        root2=(sqrt(-determinant))/(2*a);
        cout<<"Complex Solutions: x = "<<root1<<" + "<<root2<<"i and x = "<<root1<<" - "<<root2<<"i"<<endl;;
    }
    
   
}
main(){
    quadratic();
}
#include<iostream>
using namespace std;

main(){
string name;
int wins, draws, loses, points;
cout<<"Enter the name of the cricket team: ";
cin>> name;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>loses;
points =3*wins+1*draws+0*loses ;
cout<<name<<" has obtained "<<points<<" points in the Asia Cup Tournament."<<endl;


}

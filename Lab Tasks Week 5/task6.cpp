#include <iostream>
#include<cmath>
using namespace std;

main(){
    char character;
    cout<<"Enter a character (A/a): ";
    cin>> character;
    if(character=='A'){
        cout<<"You have entered Capital "<<character;
    }
    if(character=='a'){
        cout<<"You have entered small "<<character;
    }
}

#include<iostream>
using namespace std;

void howManyStickers(int length);

main(){
int length;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>length;
howManyStickers(length);
}

void howManyStickers(int length){
int stickers;
stickers=6*length*length;
cout<<"Number of stickers needed: "<<stickers;
}
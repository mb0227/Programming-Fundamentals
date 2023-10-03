#include<iostream>
using namespace std;

void calculatePoolState(int volume,int flowRate1stPipe,int flowRate2ndPipe,float hours){
    float firstPipeFlow,secondPipeFlow,poolState,poolStatePercent, overflow;
    int firstPipePercent, SecondPipePercent;
    firstPipeFlow=flowRate1stPipe*hours;
    secondPipeFlow=flowRate2ndPipe*hours;
    poolState=firstPipeFlow+secondPipeFlow;

    if(volume>poolState){
    poolStatePercent=(poolState/volume)*100;
    firstPipePercent=(firstPipeFlow/poolState)*100;
    SecondPipePercent=(secondPipeFlow/poolState)*100;
    cout<<"The pool is "<<poolStatePercent<< "% full. Pipe 1: "<<firstPipePercent<<"%. Pipe 2: "<<SecondPipePercent<<"%."<<endl;
    }

    else{
    overflow=poolState-volume;
    cout<<"For "<<hours<<" hours, the pool overflows with "<<overflow<<" liters.";
    }
  

    
}

main(){
    int volume,flowRate1stPipe, flowRate2ndPipe;
    float hours;
    cout<<"Enter volume of the pool in liters: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flowRate1stPipe;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>flowRate2ndPipe;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    calculatePoolState(volume,flowRate1stPipe,flowRate2ndPipe, hours);
}
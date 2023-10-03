#include <iostream>
#include<cmath>
using namespace std; 

void timetravel(){
    int hours, minutes,timeInMinutes,timeAfter,timeNow, timeLeap,hourInc;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>minutes;
    timeInMinutes=hours*60+minutes;
    timeLeap=timeInMinutes+15;
    timeAfter=timeLeap-hours*60;
    if(timeAfter<59){
        cout<<hours<<":"<<timeAfter;
    }
    if(timeAfter>59){
        hourInc=hours+1;
        timeNow=timeAfter-60;
        cout<<hourInc<<":"<<timeNow;
    }
}
main(){
timetravel();
}
#include <iostream>
using namespace std;

string checkTitle(int age, char gender)
{
    string answer;
    if(age<16 && gender=='f')
    {
        answer="Your personal title is: Miss";
        return answer;
    }
    if(age>=16 && gender=='f')
    {
         answer= "Your personal title is: Ms.";
         return answer;
    }
    if(age<16 && gender=='m')
    {
         answer= "Your personal title is: Master";
         return answer;
    }
    if(age>=16 && gender=='m')
    {
         answer= "Your personal title is: Mr.";
         return answer;
    }
}
main()
{
    int age;
    char gender;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    cout<<checkTitle(age,gender);
}
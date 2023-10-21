#include <iostream>
using namespace std;

main(){
double megabytes, bits;
cout<<"Enter the size in megabytes (MB): ";
cin>>megabytes;
bits= 1024*1024*8*megabytes;
cout<<megabytes<<" MB is equivalent to "<<bits<<" bits."<<endl;

}
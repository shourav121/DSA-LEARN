#include<iostream>
using namespace std;
int main()
{
   int principal,rate,time,si;
   cout<<"enter the principle : "<<endl;
   cin>>principal;
   cout<<"enter the rate "<<endl;
   cin>>rate;
   cout<<"enter the time "<<endl;
   cin>>time;
   si=((principal*rate*time)/100);
   cout<<"simple intrest is : "<<si<<endl;


    return 0;
}
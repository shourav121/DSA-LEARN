#include<iostream>
using namespace std;
int main()
{
     int a,b,c;
     cout<<"Enter a:"<<endl;
     cin>>a;
     cout<<"Enter b:"<<endl;
     cin>>b;
     
     c=b;
     b=a;
     a=c;
     cout<<"value of a is  "<<a<<endl;
     cout<<"the value of b is :"<<b<<endl;
    return 0;
}
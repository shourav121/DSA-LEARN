#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter a number"<<endl;
   cin>>a;
   if(a>=0)
   {
    cout<<"the absolute value of"<<a<<"is"<<a<<endl;
   }
   if(a<0)
   {
    cout<<"the absolute value of "<<a<<"is"<<(-a)<<endl;
   }
    return 0;
}
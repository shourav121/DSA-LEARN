#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"enter a number "<<endl;
   cin>>a;
   if(a%5==0 && a%3==0)
   {
    cout<<a <<" is divisible "<<endl;

   }
   else
   {
    cout<<a<<" not divisible"<<endl;
   }

    return 0;
}
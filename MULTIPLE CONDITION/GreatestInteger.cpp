#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter first no "<<endl;
   cin>>a;
   cout<<"enter second no "<<endl;
   cin>>b;
   cout<<"enter third no "<<endl;
   cin>>c;
   if(a>b && a>c)
   {
   cout<<a<<"is greater"<<endl;
   }
   if(b>a && b>c)
   {
    cout<<b<<"is greater"<<endl;
   }
   else{
    cout<<c<<"is greater"<<endl;
   }


    return 0;
}
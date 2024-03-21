#include<iostream>
using namespace std;
int main()
{
    int i,n,f=1;
    cout<<"enter your number"<<endl;
    cin>>n;
   for(i=1;i<=n;i++)
   {
        f=f*i;
        cout<<f<<endl;
   }
   
   return 0;
}
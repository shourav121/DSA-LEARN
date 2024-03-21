#include<iostream>
using namespace std;
int main()
{
    int r,temp,a,b,n;
    cout<<"enter the n";
    cin>>n;
    temp=0;
    a=0;
    b=1;
    for(r=0; r<=n; r++)
    {
        cout<<temp<<",";
       
        a=b; 
        b=temp;
         temp=a+b;

    }
    return 0;
}
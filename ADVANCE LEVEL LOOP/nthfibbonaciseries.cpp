#include<iostream>
using namespace std;
int main()
{
    int i,n,x,y;
    cout<<"enter a number ";
    cin>>n;
    x=0;
    y=1;
    for(i=0;i<=n;i=x+y)
    {
        x=y;
        y=i;
        cout<<" "<<i;
    }
    
    return 0;
}
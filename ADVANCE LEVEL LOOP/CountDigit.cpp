#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the number";
    cin>>n;
    for( ; n>0 ; n=n/10)
    {
        count=count+1;
    }
    cout<<count;
    return 0;
}
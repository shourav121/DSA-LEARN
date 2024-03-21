#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter any number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;

        }
        cout<<endl;
    }
    return 0;
}
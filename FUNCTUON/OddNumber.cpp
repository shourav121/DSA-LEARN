#include<iostream>
using namespace std;
void odd(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int a,b;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    odd(a,b);
    return 0;
}
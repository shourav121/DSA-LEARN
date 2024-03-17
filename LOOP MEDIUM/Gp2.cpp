//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number n ";
    cin>>n;
    int a=3;
    int r=4;
    int power=pow(r,n-1);
    int fg=a*power;
    for(i=3;i<=fg;i=i*4)
    cout<<i<<" ";
    return 0;

}
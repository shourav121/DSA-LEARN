#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter the number in backward"<<endl;
cin>>n;
for(i=100;i>100-(n*3);i=i-3)
{
    cout<<i<<" ";
}
return 0;
}
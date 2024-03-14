#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a%5==0)
    {
        cout<<"Yes it is divisible"<<endl;
    }
    else{
        cout<<"Not this is not divisible"<<endl;
    }
    return 0;
}
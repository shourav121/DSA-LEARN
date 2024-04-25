#include<iostream>
using namespace std;
int main()
{
    int n,s,f=0;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter";
    cin>>arr[i];
    }
    cout<<"enter the searching element";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"it is found ";
    }
    else{
        cout<<"not found ";
    }
    return 0;
}
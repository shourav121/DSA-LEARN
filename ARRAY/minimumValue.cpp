#include<iostream>
using namespace std;
int main()
{
    int n,min;
    int arr[n];
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter s ";
        cin>>arr[i];
    }
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
       
    }
     cout<<min;
    return 0;
}
//Find the maximum value out of all the elements
//in the array.
#include<iostream>
using namespace std;
int main()
{
    int arr[12],i,max;
    for(i=0;i<12;i++)
    {
        cout<<"enter number "<<endl;
        cin>>arr[i];

    }
    max = arr[0];
    for(i=0;i<12;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<max;
    return 0;
}
//Find the maximum value out of all the elements
//in the array.
#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,8,7,5,88,67,52,87};
    int max,i;
    max=arr[0];
    for(i=0;i<8;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }  
    cout<<"maximum element is "<<max;  
    return 0;
}
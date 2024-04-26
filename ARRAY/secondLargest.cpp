#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,87,9,77,98,47,56,45};
    int max=arr[0];
    int index =0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
       
    }
    // cout<<max<<endl;
    // cout<<index;
    
    arr[index]=-6767;
    int smax =arr[0];
    for(int i=0;i<8;i++)
{
    if(arr[i]>smax)
    {
        smax=arr[i];

    }
}
 cout<<smax;
   return 0;
}
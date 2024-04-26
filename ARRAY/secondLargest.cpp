#include<iostream>
using namesoace std;
int main()
{
   int arr[6]={4,6,7,3,5,9};
   int max=arr[0];
   int index=0;
   for(int i=0;i<6;i++)
   {
    if(arr[i]>max)
    {
        max=arr[i];
        index=i;

    }
   }
   
    return 0;
}
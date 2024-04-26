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
     cout<<"first largest"<<max<<endl;
     cout<<"it's index "<<index<<endl;
    
    arr[index]=-6767;
    int smax =arr[0];
    for(int i=0;i<8;i++)
{
    if(arr[i]>smax)
    {
        smax=arr[i];
        index=i;

    }
}
 cout<<"second largest "<<smax<<endl;
 cout<<"it's index "<<index;
   return 0;
}
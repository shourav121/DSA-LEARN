#include<iostream>
using namespace std;
int main()
{
   int i,arr[7]={8,56,78,34,67,22,67};
   int sum=0;
   cout<<"the sum of all element of array is ";
   for(i=0;i<7;i++)
   {
    sum=sum+arr[i];
   }
   cout<<sum;


    return 0;
}
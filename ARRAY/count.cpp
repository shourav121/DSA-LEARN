#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int arr[]{6,7,8,4,2,9,0,5,6,7,5,54};
    cout<<"enter the numer";
    cin>>n;
    for(int i=0;i<12;i++)
    {
        if(arr[i]>n)
        {
        count++;
        }
    }
    cout<<count;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int i,array[7]={3,2,4,8,9,6,3},product=1;
    cout<<"the product of all element is ";
    for(i=0;i<7;i++)
    {
        product=product*array[i];
    }
    cout<<product;


    return 0;
}
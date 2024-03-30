#include<iostream>
using namespace std;
int main()
{
   int a ,b ,c;
   cout<<"enter the first number ";
   cin>>a;
   cout<<"enter the second number ";
   cin>>b;
   int *ptr1=&a,*ptr2=&b;
   c=*ptr1+*ptr2;
   cout<<"the sum of "<<*ptr1<<" and "<<*ptr2<<" is "<<c;


    return 0;
}
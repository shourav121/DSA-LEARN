#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"enter the accurate age"<<endl;
   cin>>age;
   if(age<=12)
   {
    cout<<"this is child"<<endl;
   }
   else if (age<=18)
   {
    cout<<"this is teenager"<<endl;
   }
   else 
   {
    cout<<"adult"<<endl;
   }
   
    return 0;
}
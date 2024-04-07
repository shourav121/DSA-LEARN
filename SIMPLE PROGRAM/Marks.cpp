#include<iostream>
using namespace std;
int main()
{
   int marks;
   cout<<"enter the mark of student"<<endl;
   cin>>marks;
   
   if(marks>33)
   {
    if(marks<=100)
    cout<<"gracefully pass student"<<endl;
   }
   else
   {
    cout<<"fail"<<endl;
   }
    return 0;
}

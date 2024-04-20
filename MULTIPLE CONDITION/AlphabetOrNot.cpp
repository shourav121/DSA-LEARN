#include<iostream>
using namespace std;
int main()
{
   char khushi;
   cout<<"enter the character-->  "<<endl;
   cin>>khushi;
   if(khushi>='a' && khushi<='z' && khushi>='A' && khushi<='Z')
{
    cout<<" is a character  "<<khushi<<endl;
}
else
{
    cout<< khushi<<" is not a character"<<endl;
}
    return 0;
}
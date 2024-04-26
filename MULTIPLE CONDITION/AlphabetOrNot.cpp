#include<iostream>
using namespace std;
int main()
{
   char choice;
   cout<<"enter the character-->  "<<endl;
   cin>>choice;
   if(choice>='a' && choice<='z' || choice>='A' && choice<='Z')
{
    cout<<" is a character  "<<choice<<endl;
}
else
{
    cout<< choice<<" is not a character"<<endl;
}
    return 0;
}
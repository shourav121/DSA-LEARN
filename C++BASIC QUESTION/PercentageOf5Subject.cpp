#include<iostream>
using namespace std;
int main()
{
   int Hindi,English,Math,Drawing,Science;
   cout<<"Enter the mark of Hindi"<<endl;
   cin>>Hindi;
   cout<<"Enter the mark of English"<<endl;
   cin>>English;
   cout<<"Enter the marks of Math"<<endl;
   cin>>Math;
   cout<<"Enter the marks of Drawing"<<endl;
   cin>>Drawing;
   cout<<"Enter the marks of Science"<<endl;
   cin>>Science;
    
    float percentage;
    percentage= ((Hindi+English+Math+Drawing+Science)*100)/500;
    
    cout<<"percentage of five subject is "<<percentage<<"%";
    return 0;
} 
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter the first side of triangle"<<endl;
   cin>>a;
   cout<<"enter the second side of the triangle"<<endl;
   cin>>b;
   cout<<"enter the third side of a triangle"<<endl;
   cin>>c;
   if((a==b) && (b==c))
   {
    cout<<"this is an equiletral triangle"<<endl;
   }
   else if((a==b) || (b==c) || (c==a))
   {
    cout<<"it is isosceles triangle"<<endl;
   }
   else
   {
    cout<<"this is scalane triangle"<<endl;
   }
    return 0;
}
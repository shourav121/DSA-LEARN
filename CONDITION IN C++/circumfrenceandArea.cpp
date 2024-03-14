#include<iostream>
using namespace std;
int main()
{
   float r,cir,area;
   cout<<"enter the radius"<<endl;
   cin>>r;
   cir=2*3.14*r;
   area=3.14*r*r;
   if(cir>area)
   {
    cout<<"circumfrence is greater then area"<<endl;
   }
   else if (cir<area)
   {
    cout<<"circumfrence is less than area"<<endl;

   }
   else{
    cout<<"circumfrence and area are equal;"<<endl;
   }


    return 0;
}
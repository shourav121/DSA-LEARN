#include<iostream>
using namespace std;
int area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    cout<<"enter radius ";
    cin>>r;
    cout<<"area is "<<area(r);
    return 0;
}
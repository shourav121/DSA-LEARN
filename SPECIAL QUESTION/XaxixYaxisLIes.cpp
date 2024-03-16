#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x axis digit "<<endl;
    cin>>x;
    cout<<"enter y axis digit "<<endl;
    cin>>y;
    if(y!=0 && x==0)
    {
        cout<<"digit lies on y axis "<<endl;
    }
    else if(x!=0 && y==0)
    {
        cout<<"pont lies on x axis "<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"digit lies on origin"<<endl;
    }
    else{
        cout<<"digit lies between x and y axis "<<endl;
    }
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    int r,c;
    int mid;//mid is compulsory for plus...

cout<<"enter the value";
cin>>n;
    mid=(n/2)+1;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==mid || c==mid){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}
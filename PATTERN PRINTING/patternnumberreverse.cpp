#include<iostream>
using namespace std;
int main()
{
    int r,c;
    
    for(r=1;r<=5;r++)
    {
        for(c=5;c<=r;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}
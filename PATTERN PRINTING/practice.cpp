#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(r%2!=0)
            {
                cout<<" "<<c;
            }
            if(r%2==0)
            {
                cout<<" "<<char(c+64);
            }
        }
        cout<<endl;
    }
   return 0;
}
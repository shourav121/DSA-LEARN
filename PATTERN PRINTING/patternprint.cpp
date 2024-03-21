/*Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5*/

#include<iostream>
using namespace std;
int main(){
    int r,c,n;
    cout<<"etner the n number";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(r%2!=0)
            {
                cout<<c;
                cout<<" ";
            }
            if(r%2==0)
            {
                cout<<char(c+64);
                cout<<" ";
            }
            
        }
           cout<<endl;
    }
    }
/*Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D*/

#include<iostream>
using namespace std;
int main()
{
int r,c,n;
cout<<"enter the alphabet number"<<endl;
cin>>n;
for(r=1;r<=n;r++)
{
    for(c=1;c<=r;c++){
    cout<<char(c+64);
}
cout<<endl;
}

}

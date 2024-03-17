// 1,2,4,8,16,32......

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;
    int a =1;
    int r=2;
    int power =pow(r,n-1);
    int an = a*power;//an = a*r^(n-1)
    for(int i=1;i<=an;i=i*2)
    {
        cout<<i<<" ";
    }
}
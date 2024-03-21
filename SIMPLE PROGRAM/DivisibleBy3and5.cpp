#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    if((a%3==0)||(a%5==0)){
        cout<<"this is divisible by 3 and 5"<<endl;
    }

else{
    cout<<"this is not divisible by 3 and 5"<<endl;
}
    return 0;

}
/*PRINT THE FLOYD TRIANGLE PATTERN
   *    *
     * *
      * 
     *  * 
   *      *
   
    */

#include<iostream>
using namespace std;
int main()
{
    int r,c,n,m;//
    cout<<"enter the number";
    cin>>n;
    
   for(r=1; r<=n; r++){
    for(c=1; c<=n; c++){
        if(r==c || (r+c)==n+1)
        
        {
            cout<<"*";
        }
        cout<<" ";
    }
    
    cout<<endl;
   }
}//!m sdv dkfdkl
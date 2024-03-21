/*Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
**/
#include<iostream>
using namespace std;
int main()
{
      int r,c,n;
      for(r=1;r<=8;r++){
        for(c=1;c<=r;c++)
        {
            cout<<"*";
            
        }
         cout<<endl;
      }
       
        for(r=1;r<=8;r++)
        {
            for(c=1;c<=(8-r);c++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
      
    return 0;
}
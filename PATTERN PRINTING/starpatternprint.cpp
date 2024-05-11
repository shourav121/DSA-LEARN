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
      int r,c;
      for(r=1;r<=4;r++){
        for(c=1;c<=r;c++)
        {
            cout<<"*";
            
        }
         cout<<endl;
      }
       
        for(r=1;r<=4;r++)
        {
            for(c=1;c<=(4-r);c++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
      
    return 0;
}
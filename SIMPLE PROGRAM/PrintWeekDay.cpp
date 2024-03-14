#include<iostream>
using namespace std;
int main()
{
  int week_of_day;
  cout<<"Enter the day number : "<<endl;
  cin>>week_of_day;
  switch(week_of_day)
    {
     case 1:
     cout<<"MONDAY"<<endl;
     break;

     case 2:
     cout<<"TUESDAY"<<endl;
     break;

     case 3:
     cout<<"WEDNESDAY"<<endl;
     break;

     case 4:
     cout<<"THRUSDAY"<<endl;
     break;

     case 5:
     cout<<"FRIDAY"<<endl;
     break;

     case 6:
     cout<<"SATURDAY"<<endl;
     break;

     case 7:
     cout<<"SUNDAY"<<endl;
     break;

     default:
     cout<<"default case"<<endl;
    }
    

    return 0;
}
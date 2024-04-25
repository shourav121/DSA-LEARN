/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={55,77,23,34,12,58};
    cout<<"roll number ";
    for(int i=0;i<6;i++)
    {
        if(arr[i]<35)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

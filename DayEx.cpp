#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day No.";
    cin>>day;
    switch (day)
    {
    case 1: cout<<"mon";
        break;
    
    case 2: cout<<"Tue";
        break;
        
    case 3: cout<<"Wed";
    default:
        break;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int operation;
    cout<<"Menu\n";
    cout<<"1.Add\n"<<"2.Sub\n"<<"3.Mul\n"<<"4.Div\n";
    cout<<"Enter your choice";
    cin>>operation;
    int a,b,c;
    cout<<"Enter the 2 nos";
    cin>>a>>b;
      switch (operation)
      {
      case 1: c=a+b;
          break;
      case 2: c=a-b;
          break;

      case 3: c=a*b;
           break;
      case 4: c=a/b;
      default:
          break;
      }
      cout<<"Result is"<<c;
}
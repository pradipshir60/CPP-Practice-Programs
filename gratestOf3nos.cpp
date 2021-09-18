#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the 3 nos";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"A is greater"<<a;
    }
    else if(b>c)
    {
        cout<<"B is greater"<<b;
    }
    else{
        cout<<"C is greater"<<c;
    }
    return 0;
}
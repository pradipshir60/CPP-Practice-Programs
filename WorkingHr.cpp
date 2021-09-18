#include <iostream>
using namespace std;
int main()
{
    int hr;
    cout<<"Enter the houre";
    cin>>hr;
    if((hr>=9) && (hr<=18))
    {
        cout<<"It is working hr";
    }
    else{
        cout<<"It is leisure hr";
    }
    return 0;
}
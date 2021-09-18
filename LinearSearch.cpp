#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, i, key;
    cout << "Enter the elements";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key";
    cin >> key;
    {
        for (i = 0; i < n; i++)
        {
            if (key == arr[i])
            {
                cout << "\nfound at" << i;
                return 0;
            }
        }
    }
    cout << "Element not found";
    
}
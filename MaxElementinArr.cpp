#include <iostream>
using namespace std;
int main()
{
    int A[10], i, n, max;
    cout << "\nEnter the size of array";
    cin >> n;
    cout << "\nEnter the elements";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "\nMaxmimum Element is" << max;
    return 0;
}
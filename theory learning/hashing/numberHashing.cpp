#include <bits/stdc++.h>
using namespace std;
// globally, the maximum array size for integer is 10^7 and for BOOL it is 10^8
int hashh[10000000]; // declare a hashh array of size 10^7, filled with 0
int main()
{
    // inside main, the maximum array size for integer is 10^6 and for BOOL it is 10^7
    int n, q, num;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre-compute stage
  
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1; // index in hashh array is nothing but element of arr[]
    }

    cout << "Enter the no.of elements you want frequency for: ";
    cin >> q;
    while (q--)
    {
        cout << "Enter the number: ";
        cin >> num;
        cout << hashh[num];
        cout << endl;
    }
}
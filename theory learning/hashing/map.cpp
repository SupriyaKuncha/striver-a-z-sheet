#include<bits/stdc++.h>
using namespace std;
int main(){
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
    map<long, long> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1; // index in hashh array is nothing but element of arr[]
    }
    cout << "The number and frequency are stored in key, value respectively in SORTED ORDER"<<endl;
    cout << "\tKEY(number)\tELEMENT(frequency)\n";
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << "\t" << it->first << "\t \t \t" << it->second << "\n";
    }
    cout << endl;
    cout << "Enter the no.of elements you want frequency for: ";
    cin >> q;
    while (q--)
    {
        cout << "Enter the number: ";
        cin >> num;
        cout << mpp[num];
        cout << endl;
    }
}
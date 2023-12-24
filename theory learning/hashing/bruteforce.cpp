#include<bits/stdc++.h>
using namespace std;
int main(){
    //BRUTE FORCE
    int n, cnt=0, i, number;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "Enter number: ";
    cin >> number;
    for (i = 0; i < n;i++){
        if(number==arr[i])
            cnt += 1;
    }
    cout << "Frequency is: " << cnt << endl;
}
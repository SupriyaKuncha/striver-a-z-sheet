// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size" << endl;
    int n;
    cin >> n;
    cout << "enter array" << endl;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << "printing the array" << endl;
    for (int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    cout << "Finding the frrquency" << endl;
    //precomputing stage
    int hashh[n] = {0};
    for (int i = 0; i <n;i++){
        hashh[arr[i]-1]++ ;
    }
    //printing frequency
    for (int i = 0; i <n;i++){
        cout << hashh[i] << " ";
    }

        return 0;
}
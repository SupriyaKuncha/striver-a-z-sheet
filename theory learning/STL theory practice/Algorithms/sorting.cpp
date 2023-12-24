#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={3,5,1,7,8};
    //sorting whole vector in ascending order
    cout << "sorting whole vector in ascending order: " << endl;
    sort(v.begin(), v.end());
    for(auto it:v){
        cout << " "<<it; //{1,3,5,7,8}
    }
    cout << endl;
    //sorting a portion
    vector<int> v2 = {5,1,2,8,4,7};
    //I want to sort first 3 elements
    cout << "sort first 3 elements:" << endl;
    sort(v2.begin(), v2.begin() + 3);
    vector<int>::iterator it;
    for (it = v2.begin(); it != v2.end(); it++){
        cout << " " << *it;
    }
    cout << endl;
    //sorting ind decending order
    cout << "sort in decending order" << endl;
    sort(v2.begin(), v2.end(), greater<int>());
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << " " << *it;
    }
    //sorting as per user choice i.e customized sorting
    //COMPERATOR
    
}
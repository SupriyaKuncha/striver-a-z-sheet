#include <bits/stdc++.h>
using namespace std;
int main(){
    //syntax to declare pair
    pair < int, int >p = {1, 2};
    cout << p.first<<" ";
    cout << p.second << endl;
    pair<int, pair<int, pair<int, pair<int ,int>>>> p1 = {1, {2, {3, {4, 5}}}};
    cout << p1.second.second.first<<" ";
    cout << p1.second.second.second.first << endl;
    
    //pair array
    pair<int, int> arr[] = {{1, 0}, {2, 3},{4,5}};
    cout << arr[1].first<< endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> mpp;
    mpp[1] = 4;
    mpp.emplace(2, 3);
    cout << "\tKEY\tELEMENT\n";
    for (auto  it = mpp.begin(); it != mpp.end(); it++){
        cout <<"\t"<< it->first<<"\t"<<it->second<<"\n";
    }
}
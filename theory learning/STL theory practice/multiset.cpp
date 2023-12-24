#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms={2,1,1,6,3,4,3};
    //the above set is stored in sorted order {1,1,2,3,3,4,6}
    cout << *(ms.find(1)) << endl;//1
    //erasing element
    ms.erase(1);//all 1's are erased
    for (auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << " "; //{2,3,3,4,6}
    cout << endl;
    // to erase a specific element pass the address of that element using ms.find();
    auto address = ms.find(3);
    ms.erase(address);
    for (auto ad = ms.begin(); ad != ms.end(); ad++)
        cout << *ad << " "; //{2,3,4,6}
    cout << endl;
    // to erase contagious elemets, i.e , I want to delete first 2 elements from {2,3,4,6}
    //Output will be {4,6}
    
    ms.erase(ms.find(2), next(ms.find(2) , 2));//next( function is used)
    for (auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << " "; //{4,6}
    cout << endl;
}
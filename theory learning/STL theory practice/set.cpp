#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> ms = {2, 1, 6, 4, 3};//duplicate elements are not stored.
    // the above set is stored in sorted order {1,2,3,4,6}
    cout << *(ms.find(1)) << endl; // 1
    // erasing element
    ms.erase(1); // 1 is erased
    for (auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << " "; //{2,3,4,6}
    cout << endl;
    // other way to erase a specific element pass the address of that element using ms.find();
    auto address = ms.find(3);
    ms.erase(address);
    for (auto ad = ms.begin(); ad != ms.end(); ad++)
        cout << *ad << " "; //{2,4,6}
    cout << endl;
    // to erase contagious elemets, i.e , I want to delete first 2 elements from {2,4,6}
    // Output will be {6}

    ms.erase(ms.find(2), next(ms.find(2), 2)); // next( function is used)
    for (auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << " "; //{6}
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
int hashh[10000000];
int main()
{

    cout << "Character frequency by hashing" << endl;
    string str;
    int cnt;
    cout << "Enter the string: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        hashh[str[i]] += 1;
    }
    int q;
    cout << "Enter for how many character you want frequency: ";
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter character: ";
        cin >> c;
        cout << "Frequency of " << c << " is: " << hashh[c] << endl;
    }
    //ONLY FOR LOWER CASE
    // cout << "Character frequency by hashing" << endl;
    // string str;
    // int cnt;
    // cout << "Enter the string: ";
    // cin >> str;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     hashh[str[i] - 'a'] += 1;
    // }
    // int q;
    // cout << "Enter for how many character you want frequency: ";
    // cin >> q;
    // while (q--)
    // {
    //     char c;
    //     cout << "Enter character: ";
    //     cin >> c;
    //     int integerOfGivenChar = c - 'a'; //this for lower case only
    //     cout <<"Frequency of "<<c<<" is: " <<hashh[integerOfGivenChar] << endl;
    // }
}
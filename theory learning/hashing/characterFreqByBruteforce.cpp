#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "supriya";
    for (int i = 0; i < s.length();i++){
        cout << s[i] << endl;
    }
    cout << "\n"
         << s[0] << endl;
    string name;
    cout << "##########################" << endl;
    cout << "Enter name" << endl;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << endl;
    }
    cout << "##########################" << endl;
    cout << "Character frequency by brute force" << endl;
    string str;
    int cnt;
    cout << "Enter the string: ";
    cin >> str;
    char c;
    cout << "Enter the character: ";
    cin >> c;
    for (int i = 0; i < str.length(); i++)
    {
        if(c==str[i]){
            cnt = cnt + 1;
        }
            

    }
    cout << "The frequency of " << c << " is " << cnt << endl;
}
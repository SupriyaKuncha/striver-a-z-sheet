#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    cout << v[0] << endl;
    for(auto it:v){
        cout << it << " " ;
    }
    cout << endl;
    cout << ".............." << endl;
    vector<string> names;
    names.push_back("supriya");
    names.push_back("Nagaveni");
    names.push_back("Gopal");
    names.push_back("Nani");
    for (auto name : names)
    {
        cout << name << " ";
    }
    cout << endl;
    cout << "###############" << endl;
    //there are other ways to access elements of a vector
    //using iterators
    //lets understand begin(), and end()
    vector<string>::iterator demo;
    cout << "[by default, iterator locates to memory address just like pointers but inorder to access elements, * is used]" << endl;
    for (demo = names.begin(); demo != names.end();demo++){
        cout << *(demo) << endl;
    }
}
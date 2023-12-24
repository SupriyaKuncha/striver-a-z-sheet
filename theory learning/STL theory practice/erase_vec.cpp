#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << endl;
    cout << "Erasing single element" << endl;
    cout << endl;
    vector<int> vec0{1, 2, 3, 4, 5};
    cout << "Intially vector: ";
    for (auto i = vec0.begin(); i < vec0.end(); i++)
    {
        cout << " " << *i;
    }
    cout << endl;
    cout << "Modified vector: ";
    vec0.erase(vec0.begin() + 1);
    for (auto i = vec0.begin(); i < vec0.end(); i++)
    {
        cout << " " << *i;
    }
    cout << endl;
    cout << "##################";
    cout << endl;
    cout << "Erasing contagious elements" << endl;
    cout << endl;
    cout << "I want to delete 3,4 elements" << endl;
    vec0.erase(vec0.begin() + 1, vec0.begin()+3);
  
    cout << "Modified vector: ";
    for (auto i = vec0.begin(); i < vec0.end(); i++)
    {
        cout << " " << *i;
    }
    return 0;
}
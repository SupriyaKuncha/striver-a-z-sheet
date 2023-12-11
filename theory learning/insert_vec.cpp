#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << endl;
    cout << "Inserting single element" << endl;
    vector<int> vec0{1, 2, 3, 4, 5};
    cout << "Intially vector: ";
    for (auto i = vec0.begin(); i < vec0.end(); i++)
    {
        cout << " " << *i;
        }

        vec0.insert(vec0.begin(), 10); // Inserting 10 to the vector

        cout << "\n\nThe modified vector is: ";
        for (auto i = vec0.begin(); i < vec0.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Inserting same values multiple times" << endl;
        vector<int> example_vec{13, 14, 15, 16};
        cout << "Intially vector: ";
        for (auto i = example_vec.begin(); i != example_vec.end();i++){
            cout << " " << *i;
        }
        example_vec.insert(example_vec.begin(),3,10);
        cout << "\n\nThe modified vector is: ";
        for (auto i = example_vec.begin(); i != example_vec.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Insert Another Vector" << endl;
        vector<int> vec{2, 4, 6, 8};
        vector<int> vec2{1, 3, 5, 7};
        cout << "Intially first vector: ";
        for (auto i = vec.begin(); i < vec.end(); i++)
        {
            cout << " " << *i;
    }
    cout << "\nIntially second vector: ";
    for (auto i = vec2.begin(); i < vec2.end(); i++)
    {
        cout << " " << *i;
    }

    // Inserting vec2 at the beginning of the vec vector
    vec.insert(vec.begin(), vec2.begin()+1, vec2.end()-1);

    cout << "\n\nThe modified vector is: ";
    for (auto i = vec.begin(); i < vec.end(); i++)
    {
        cout << " " << *i;
    }
    return 0;
}
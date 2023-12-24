#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int reverse, last_digit;
        int temp = x;
        while (x != 0)
        {
            last_digit = x % 10;
            x = x / 10;
            if (reverse > INT_MAX / 10 || reverse == INT_MAX / 10 && last_digit > 7)
                return false;
            if (reverse > INT_MIN / 10 || reverse == INT_MIN / 10 && last_digit < -8)
                return false;
            reverse = (reverse * 10) + last_digit;
        }
        if (temp == reverse)
            return true;
        else
            return false;
    }
};

int main(){
    cout << "Largest 32 bit integer: "<<INT_MAX << endl;
    cout << "Smallest 32 bit integer: "<<INT_MIN << endl;
}
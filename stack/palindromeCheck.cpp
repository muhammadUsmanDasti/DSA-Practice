#include <iostream>
#include <stack>
using namespace std;
class PalindromeCheck {
private:
    string s;
public:
    PalindromeCheck(string st) {
        s = st;
    }
    
    bool isPalindrome() {
        stack<char> stac;
        int n = s.size();
        for (int i = 0; i < n/2; i++) {
            stac.push(s[i]);
        }

        int nextHalf;
        if(n%2 == 0) {
            nextHalf = (n/2);
        } else{
            nextHalf = (n/2) + 1;
        }

        for(int i = nextHalf; i < n; i++) {
            if(stac.top() != s[i]){
                return false;
            }
            stac.pop();
        }
        return true;
    }
};
int main() {
    string st;
    cout << "Enter the string: ";
    getline(cin, st);
    PalindromeCheck P(st);
    bool flag = P.isPalindrome();
    if(flag) {
        cout << "The given string "<< st <<" is a PALINDROME";
    }else {
        cout << "The given string "<< st <<" is NOT a PALINDROME";
    }
    return 0;
}
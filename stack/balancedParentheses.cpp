#include <iostream>
#include <string>
#include <stack>
using namespace std;
class balancedParentheses {
private:
    string s;
public:
    balancedParentheses(string st) {
        s = st;
    }
    bool isBalancedParentheses(){
        stack<char> ch;
        int n = s.size();
        if(n <= 0) {
            return true;
        }
        for(int i = 0; i < n; i++) {
            if( s[i] == '(' || s[i] == '{' || s[i] == '[' ) {
                ch.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(ch.empty()) {
                    return false;
                }
                if( (s[i] == ')' && ch.top() == '(') ||
                    (s[i] == '}' && ch.top() == '{') ||
                    (s[i] == ']' && ch.top() == '[') ) 
                {
                    ch.pop();
                }
                else {
                   return false;
                }
            }
        }
        return ch.empty();
    }
};
int main() {
    string st;
    cout<<"Enter a string: ";
    getline(cin, st);
    balancedParentheses bl(st);
    bool check = bl.isBalancedParentheses();
    cout<<check;
    return 0;
}
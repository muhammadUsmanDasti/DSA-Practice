#include <iostream>
#include <stack>
using namespace std;
bool hasHigherPrecedence(char str, char sta) {
    if(sta == '+' && str == '-') return true; 
    else if(sta == '/' && str == '*') return true;
    else if((sta == '/' || sta == '*') && (str == '+' || str == '-')) return true;
    else return false;
}
string infixToPostfixWithoutBrackets(string infix) {
    stack<char> s;
    string res;
    for(int i = 0; i < infix.size(); i++) {
        if(infix[i] != '+' && infix[i] != '-' && infix[i] != '*' && infix[i] != '/') {
            res += infix[i];
        }
        else {
            while(!s.empty() && hasHigherPrecedence(infix[i], s.top())) {
                res += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while(!s.empty()) {
        res += s.top();
        s.pop();
    }
    return res;
}
int main() {
    string infix = "A+B*C-D*E";
    string postfix = infixToPostfixWithoutBrackets(infix);
    cout<<"prefix"<<infix<<endl;
    cout<<"Postfix: "<<postfix;
    return 0;
}
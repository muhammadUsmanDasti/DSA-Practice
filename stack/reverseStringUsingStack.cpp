#include <iostream>
#include <stack>
using namespace std;
class ReverseString {
private:
    stack<char> c;
    string s;
public:
    ReverseString (string st) {
        s = st;
    }
    string reverseString() {
        for(int i = 0; i < s.size(); i++) {
            c.push(s[i]);
        }
        for(int i = 0; i < s.size(); i++) {
            s[i] = c.top();
            c.pop();
        }

        //two pointer approuch
        // int i = 0;
        // int j = s.size() - 1;
        // while (i < j) {
        //     swap(s[i],s[j]);
        //     i++;
        //     j--;
        // }

        return s;
    }
};
int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    //cin>>str;
    ReverseString r(str);
    str = r.reverseString();
    cout<<"Reversed String: ";
    cout<<str;
    return 0;
}
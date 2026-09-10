#include <iostream>
#include <stack>
#include <string>
using namespace std;
class DecimalToBinary {
private:
    int decimal;
public:
    stack<int> S;
    DecimalToBinary(int deci) {
        decimal = deci;
    }
    string decimalToBinary() {
        int n = decimal;
        if (n == 0) return "0";

        while (n != 0) {
            int remainder = n % 2;
            S.push(remainder);
            n /= 2;
        }
        string res;
        while (!S.empty()) {
            res += to_string(S.top());
            S.pop();
        }
        return res;
    }
};
int main() {
    int decimal;
    cout<< "Enter the number: ";
    cin>>decimal;
    DecimalToBinary dtob(decimal);
    string binary = dtob.decimalToBinary();
    cout<<"The binary of "<<decimal << " is: " << binary;
    return 0;
}
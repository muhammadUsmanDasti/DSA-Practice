#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
double performOperations(string opera, double operand1, double operand2);
double evaluatePostfix(vector<string> A) {
    int n = A.size();
    stack<double> eva;
    for(int i = 0; i < n; i++) {
        if(A[i] != "+" && A[i] != "-" && A[i] != "*" && A[i] != "/") {
            eva.push(stod(A[i]));
        } 
        else {
            double p2 = eva.top();
            eva.pop();
            double p1 = eva.top();
            eva.pop();
            
            double res = performOperations(A[i], p1, p2);
            eva.push(res);
        }
    }
    return eva.top();
}
double evaluatePrefix(vector<string> A) {
    int n = A.size();
    stack<double> s;
    for(int i = n-1; i >= 0; i--) {
        if(A[i] != "+" && A[i] != "-" && A[i] != "*" && A[i] != "/") {
            s.push(stod(A[i]));
        }
        else {
            double p1 = s.top();
            s.pop();
            double p2 = s.top();
            s.pop();
            double res = performOperations(A[i], p1, p2);
            s.push(res);
        }
    }
    return s.top();
}
double performOperations(string opera, double operand1, double operand2) {
    if(opera == "+") return operand1 + operand2;
    else if(opera == "-") return operand1 - operand2;
    else if(opera == "*") return operand1 * operand2;
    else if(opera == "/") return operand1 / operand2;
    else cout<<"error";
}
int main() {
    vector<string> A = {"2","3","*","5", "4", "*", "+", "9", "-"};
    vector<string> B = {"-", "+", "*", "2", "3", "*", "5", "4", "9"};
    double result = evaluatePostfix(A);
    double result1 = evaluatePrefix(B);
    cout<< result<<endl;
    cout<< result1;
    return 0;
}
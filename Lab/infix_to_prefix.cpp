#include <iostream>
#include <stack>
#include <algorithm> // For reverse function
using namespace std;

// Function to determine operator precedence
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix to prefix
string infixToPrefix(string infix) {
    stack<char> operators; // To store operators
    string result = "";    // Final prefix result
    
    // Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Replace '(' with ')' and vice versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }

    // Process the reversed expression
    for (char c : infix) {
        if (isalnum(c)) {
            result += c; // Append operands directly
        } 
        else if (c == '(') {
            operators.push(c); // Push '(' to the stack
        } 
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                result += operators.top();
                operators.pop();
            }
            operators.pop(); // Pop '('
        } 
        else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                result += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Pop all remaining operators from the stack
    while (!operators.empty()) {
        result += operators.top();
        operators.pop();
    }

    // Reverse the result to get prefix
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;   // operator (+, -, *, /)

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    float result;

    if (op == '+'){
        cout << "result:" << a+b ;}
        
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else {
        cout << "Invalid operator!";
        return 0;
    }

    cout << "Result = " << result << endl;

    return 0;
}

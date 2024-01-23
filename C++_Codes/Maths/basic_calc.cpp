#include <iostream>

using namespace std;

int main() {
    char oper;
    float num1, num2;
    do{
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    cout << "\nDo you wish to continue: ";
    cin >> oper;
    }while (oper == 'y' || oper == 'Y');

    return 0;
}
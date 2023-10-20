#include <iostream>

using namespace std;

class calc {
public:
int a, b;
float sum (float a, float b) {
    return a+b;
}
float diff (float a, float b) {
    return a - b;
}
float prod (float a, float b) {
    return a*b;
}
float quo (float a, float b) {
    return a/b;
}
int mod (int a, int b) {
    return a%b;
}
};

int main() {
    float num1, num2;
    char oper;
    do {
        system("cls");
        calc c1;
        cout << "Operations: +, -, *, /, %\nNote: % is for integer values only!\nEnter Expression: \n";
        cin >> num1 >> oper >> num2;
        switch (oper) {
            case '+':
            cout << c1.sum(num1, num2) << endl;;
            break;
            case '-':
            cout << c1.diff(num1, num2) << endl;
            break;
            case '*':
            cout << c1.prod(num1, num2) << endl;
            break;
            case '/':
            cout << c1.quo(num1, num2) << endl;
            break;
            case '%':
            int temp1, temp2;
            temp1 = num1;
            temp2 = num2;
            if (temp1 == num1 && temp2 == num2) {
                cout << c1.mod(temp1, temp2) << endl;
            }
            else {
                cout << "Error! Modulus function cannot be done for non-integer values!\n";
            }
        }

        cout << "Do you want to continue? (y/n)\n";
        cin >> oper;

    }while (oper == 'y' || oper == 'Y');
    return 0;
}

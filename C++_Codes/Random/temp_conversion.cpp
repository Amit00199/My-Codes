#include <iostream>

using namespace std;

//all temperature conversions

void input_and_checker();
double c_to_f(double);
double c_to_k(double);
double f_to_c(double);
double f_to_k(double);
double k_to_c(double);
double k_to_f(double);

int main() {
    cout << "\tThis program converts between the different units of temperature\n";
    cout << "\tInput all characters in lowercase and all numericals in decimal form\n\n";
    input_and_checker();
    return 0;
}

void input_and_checker() {
    string input_unit, output_unit;
    double input_temp, output_temp;
    cout << "Enter input unit (c/f/k) : ";
    cin >> input_unit;

        if (input_unit == "c") {
            cout << "Input temperature in Celsius: ";
            cin >> input_temp;
            cout << "Enter output unit (f/k) : ";
            cin >> output_unit;
                if (output_unit == "f") {
                    cout << c_to_f(input_temp) << endl;
                }
                else if (output_unit == "k") {
                    cout << c_to_k(input_temp) << endl;
                }
                else {
                    cout << "Invalid Input... Program Terminated!\n";
                }
        }
        else if (input_unit == "k") {
            cout << "Input temperature in Kelvin: ";
            cin >> input_temp;
            cout << "Enter output unit (c/f) : ";
            cin >> output_unit;
            if (output_unit == "c") {
                    cout << k_to_c(input_temp) << endl;
                }
                else if (output_unit == "f") {
                    cout << k_to_f(input_temp) << endl;
                }
                else {
                    cout << "Invalid Input... Program Terminated!\n";
                }
        }
        else if (input_unit == "f") {
            cout << "Input temperature in Fahrenheit: ";
            cin >> input_temp;
            cout << "Enter output unit (c/k) : ";
            cin >> output_unit;
            if (output_unit == "c") {
                    cout << f_to_c(input_temp) << endl;
                }
                else if (output_unit == "k") {
                    cout << f_to_k(input_temp) << endl;
                }
                else {
                    cout << "Invalid Input... Program Terminated!\n";
                }
        }
        else {
            cout << "Invalid Input... Program Terminated!\n";
        }
}

double c_to_f(double input_temp) {
    return (input_temp*1.8)+32;
}
double c_to_k(double input_temp) {
    return (input_temp+273.15);
}
double f_to_c(double input_temp) {
    return (input_temp - 32)/1.8;
}
double f_to_k(double input_temp) {
    return ((input_temp - 32)/1.8)+273.15;
}
double k_to_c(double input_temp) {
    return (input_temp - 273.15);
}
double k_to_f(double input_temp) {
    return ((input_temp-273.15)*1.8)+32;
}

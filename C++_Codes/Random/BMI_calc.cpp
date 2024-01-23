#include <iostream>

using namespace std;

int main() {
    
    float weight, height;
    cout << "Enter your height(m): ";
    cin >> height;
    cout << "Enter you weight(kg): ";
    cin >> weight;

    int bmi = weight/(height*height);

    cout << "Your BMI is " << bmi << endl;
    if (bmi < 18.5) {
        cout << "You are underweight!\n";
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "You are healthy!\n";
    }
    else {
        cout << "You are overweight!\n";
    }

    return 0;
}
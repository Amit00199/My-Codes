#include <iostream>

using namespace std;

float power(float base, int exponent) {
    float result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {

    int principal, times_per_year, years;
    float rate_of_interest, final_amt, interest;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (in %): ";
    cin >> rate_of_interest;
    rate_of_interest /= 100;
    cout << "Enter number of Years: ";
    cin >> years;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> times_per_year;

    final_amt = ((principal)* power((1+(rate_of_interest/times_per_year)), (times_per_year*years)));

    cout << "The final amount is: " << final_amt << endl;


    return 0;
}
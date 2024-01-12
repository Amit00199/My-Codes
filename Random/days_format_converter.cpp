#include <iostream>
using namespace std;

int main() {
    int days;
    int days_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter the number of days: ";
    cin >> days;
    
    int years = 0, months = 0;
    while (days >= 365) {
        if ((years + 1) % 4 == 0 && (years + 1) % 100 != 0 || (years + 1) % 400 == 0) {
            if (days >= 366) {
                days -= 366;
                years++;
            }
        } else {
            days -= 365;
            years++;
        }
    }
    
    while (days > 0) {
        int daysInMonth = days_month[months];
        
        if (months == 1 && ((years + 1) % 4 == 0 && (years + 1) % 100 != 0 || (years + 1) % 400 == 0)) {
            daysInMonth = 29;
        }
        
        if (days >= daysInMonth) {
            days -= daysInMonth;
            months++;
        } else {
            break;
        }
    }
    
    cout << "Years: " << years << ", Months: " << months << ", Days: " << days << endl;
    
    return 0;
}

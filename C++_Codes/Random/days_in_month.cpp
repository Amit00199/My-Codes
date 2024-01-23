#include <iostream>

using namespace std;

int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    switch(month) {
        case 2:
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
            cout << "The month has 29 days\n";
        }
        else {
            cout << "The month has 28 days\n";
        }
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "The month has 31 days\n";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "The month has 30 days\n";
        break;
        default:
        cout << "Error! Invalid Input!";
        break;
    }

    return 0;
}
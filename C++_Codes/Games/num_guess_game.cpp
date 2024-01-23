#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int num, guess, tries = 0;
    cout << "\t**Number Guessing Game**\n\n";
    srand(time(NULL));
    num = rand() % 100 + 1;

    do {
    cout << "Enter a guess between (1-100): ";
    cin >> guess;
    if (guess < num) {
        cout << "Too Low!\n";
        tries++;
    }
    else if (guess == num) {
        break;
    }
    else {
        cout << "Too High!\n";
        tries++;
    }
    } while(guess != num);
    cout << "Correct! You took " << tries+1 << " tries\n";

    return 0;
}
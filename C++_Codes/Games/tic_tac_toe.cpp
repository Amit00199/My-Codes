#include <iostream>
#include <ctime>

using namespace std;

void draw_board(char* spaces) {
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
}
void player_move(char* spaces, char player) {
    int number;
    do {
        cout << "Enter a spot to place a marker (1 to 9): ";
        cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
        else {
            number = 100;
        }
    } while (number < 0 || number > 8);
}
void computer_move(char* spaces, char computer) {
    int number;
    srand(time(NULL));
    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}
bool check_winner(char* spaces, char player, char computer) {

    for (int i = 0; i < 7; i += 3) {
        if (spaces[i]!= ' ' && spaces[i] == spaces[i+1] && spaces[i+1] == spaces[i+2]) {
            spaces[i] == player ? cout << "\nYou Win!\n" : cout << "\nYou Lose!\n";
            return 1;
        }       
    }
    for (int i = 0; i < 3; i++) {
        if (spaces[i]!= ' ' && spaces[i] == spaces[i+3] && spaces[i+3] == spaces[i+6]) {
            spaces[i] == player ? cout << "\nYou Win!\n" : cout << "\nYou Lose!\n";
            return 1;
        }
    }
    if (spaces[0]!= ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        spaces[0] == player ? cout << "\nYou Win!\n" : cout << "\nYou Lose!\n";
        return 1;
    }
    if (spaces[2]!= ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        spaces[2] == player ? cout << "\nYou Win!\n" : cout << "\nYou Lose!\n";
        return 1;
    }

    return 0;
}
bool check_tie(char* spaces) {

    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    cout << "\nIt's A Tie!\n";
    return true;
}

int main() {

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running =  true;

    draw_board(spaces);
    while (running) {
        player_move(spaces, player);
        draw_board(spaces);
        if (check_winner(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (check_tie(spaces)) {
            running = false;
            break;
        }
        computer_move(spaces, computer);
        draw_board(spaces);
        if (check_winner(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (check_tie(spaces)) {
            running = false;
            break;
        }
    }

    cout << "\n\n\tThanks for playing!";

    return 0;
}
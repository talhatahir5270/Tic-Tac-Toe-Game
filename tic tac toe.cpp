#include <iostream>
#include <string>
using namespace std;

void intro();
void drawBoard();
bool is_winner();
void input();

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

char choice = 'X';
string player1, player2;
int row, column;
bool tie = false;

int main() {
    intro();
    while (!is_winner()) {
        drawBoard();
        input();
    }

    drawBoard(); // Show final board

    if (tie) {
        cout << "It's a draw!" << endl;
    } else if (choice == 'O') {
        cout << player1 << " wins!" << endl;
    } else {
        cout << player2 << " wins!" << endl;
    }

    return 0;
}

void intro() {
    cout << "Press [Enter] to begin";
    getchar();
    cout << "\nTic-Tac-Toe Game\n\n";

    cout << "Enter the name of Player 1 (X): ";
    cin >> player1;
    cout << "Enter the name of Player 2 (O): ";
    cin >> player2;
    cout << player1 << " goes first.\n\n";
}

void drawBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " \n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

void input() {
    int digit;
    cout << (choice == 'X' ? player1 : player2) << "'s turn. Enter a number (1-9): ";
    cin >> digit;

    switch (digit) {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;
        default:
            cout << "Invalid input. Try again.\n";
            input();
            return;
    }

    if (board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = choice;
        choice = (choice == 'X') ? 'O' : 'X';
    } else {
        cout << "Cell already taken. Try again.\n";
        input();
    }
}

bool is_winner() {
    // Rows and Columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }

    // Diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }

    // Check for tie
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false; // Game still in progress
            }
        }
    }

    tie = true;
    return true; // It's a draw
}


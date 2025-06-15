#include<iostream>
using namespace std;

class TicTacToe {

private:
    char square[10];
    int player;
public:
    TicTacToe();
    int checkwin();
    void board();
    void play();
};


TicTacToe::TicTacToe() {
    for (int i = 0; i < 10; ++i) {
        square[i] = '0' + i;
    }
    player = 1;
}


int TicTacToe::checkwin() {
    if (square[1] == square[2] && square[2] == square[3]) return 1;
    else if (square[4] == square[5] && square[5] == square[6]) return 1;
    else if (square[7] == square[8] && square[8] == square[9]) return 1;
    else if (square[1] == square[4] && square[4] == square[7]) return 1;
    else if (square[2] == square[5] && square[5] == square[8]) return 1;
    else if (square[3] == square[6] && square[6] == square[9]) return 1;
    else if (square[1] == square[5] && square[5] == square[9]) return 1;
    else if (square[3] == square[5] && square[5] == square[7]) return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9') return 0;
    else return -1;
}


void TicTacToe::board() {

    system("cls");
    cout << "\n\n TIC TAC TOE GAME " << endl << endl;
    cout << " Player 1 (X), Player 2 (O)" << endl << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl;
}


void TicTacToe::play() {

    int choice;
    char mark;
    int status;

    do {

        board();
        player = (player % 2) ? 1 : 2;
        cout << "Player " << player << ", your turn. Enter the number you want to mark: ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice) {
            square[choice] = mark;
        } else {
            cout << "Invalid move! Try again." << endl;
            player--;
            cin.ignore();
            cin.get();
        }

        status = checkwin();
        player++;
    } while (status == -1);

    board();

    if (status == 1) {
        cout << "CONGRATULATIONS! Player " << --player << " wins!" << endl;
    } else {
        cout << "GAME DRAW!" << endl;
    }
}

int main() {

    TicTacToe game;
    game.play();
    return 0;

}

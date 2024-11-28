#include <stdio.h>
#define SIZE 3
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int checkWin(char board[SIZE][SIZE], char player) {
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}
int isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0; 
            }
        }
    }
    return 1; 
}

void computerMove(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = 'O';
                return;
            }
        }
    }
}

int main() {
    char board[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    
    int row, col;
    int playerTurn = 1; 

    printf("Welcome to Tic Tac Toe!\n");
    printBoard(board);

    while (1) {
        if (playerTurn) {
            printf("Player's turn (X). Enter row and column (0-2): ");
            scanf("%d %d", &row, &col);
            if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
                printf("Invalid move! Try again.\n");
                continue;
            }
            board[row][col] = 'X';
        } else {
            printf("Computer's turn (O).\n");
            computerMove(board);
        }

        printBoard(board);
        if (checkWin(board, playerTurn ? 'X' : 'O')) {
            printf("%s wins!\n", playerTurn ? "Player" : "Computer");
            break;
        }
        if (isBoardFull(board)) {
            printf("It's a draw!\n");
            break;
        }
        playerTurn = !playerTurn;
    }

    return 0;
}

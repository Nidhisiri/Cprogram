ASSIGNMENT-6


INPUT
#include <stdio.h>
#define SIZE 3

void printBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
int isDraw(char board[SIZE][SIZE]);

int main() {
    char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col, turn = 0;
    char player = 'X';

    while (1) 
    {
        printBoard(board);
        printf("Player %c, enter row (1-3) and column (1-3): ", player);
        scanf("%d %d", &row, &col);
        row--; col--;  

        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') 
        {
            board[row][col] = player;
            turn++;

            if (checkWin(board)) 
            {
                printBoard(board);
                printf("Player %c wins!\n", player);
                break;
            }

            if (isDraw(board))
            {
                printBoard(board);
                printf("It's a draw!\n");
                break;
            }

            player = (player == 'X') ? 'O' : 'X';  
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
    return 0;
}
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}
int checkWin(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
    {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' '))
            {
            return 1;
            }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '))
        {
        return 1;
        }
    return 0;
}
int isDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

    

Output
/tmp/GzYCUTb4gx.o

   |   |   
---|---|---
   |   |   
---|---|---
   |   |   

Player X, enter row (1-3) and column (1-3): 2 2

   |   |   
---|---|---
   | X |   
---|---|---
   |   |   

Player O, enter row (1-3) and column (1-3): 3 3

   |   |   
---|---|---
   | X |   
---|---|---
   |   | O 

Player X, enter row (1-3) and column (1-3): 1 1

 X |   |   
---|---|---
   | X |   
---|---|---
   |   | O 

Player O, enter row (1-3) and column (1-3): 1 3

 X |   | O 
---|---|---
   | X |   
---|---|---
   |   | O 

Player X, enter row (1-3) and column (1-3): 2 3

 X |   | O 
---|---|---
   | X | X 
---|---|---
   |   | O 

Player O, enter row (1-3) and column (1-3): 3 1

 X |   | O 
---|---|---
   | X | X 
---|---|---
 O |   | O 

Player X, enter row (1-3) and column (1-3): 2 1

 X |   | O 
---|---|---
 X | X | X 
---|---|---
 O |   | O 

Player X wins!


=== Code Execution Successful ===

ASSIGNMENT-4

INPUT
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

const char* get_computer_choice() {
    int random_number = rand() % 101;  
    if (random_number >= 0 && random_number <= 33)
    {
        return "Rock";
    } else if (random_number >= 34 && random_number <= 66) 
    {
        return "Paper";
    } else {
        return "Scissors";
    }
}

const char* determine_winner(const char* user_choice, const char* computer_choice){
     if (strcmp(user_choice, computer_choice) == 0) 
     {
          return "It's a tie.";
     } else if ((strcmp(user_choice, "Rock") == 0 && strcmp(computer_choice, "Scissors") == 0) ||
         (strcmp(user_choice, "Paper") == 0 && strcmp(computer_choice, "Rock") == 0) ||
             (strcmp(user_choice, "Scissors") == 0 && strcmp(computer_choice, "Paper") == 0))
       {
          return "You win.";
       } else {
          return "Computer wins.";
    }
}
int main(){
    srand(time(0));
    char user_choice[10];
    printf("Enter your choice (Rock, Paper, Scissors): ");
    scanf("%s", user_choice);
    
    for (int i = 0; user_choice[i]; i++)
    {
        user_choice[i] = tolower(user_choice[i]);
    }
        user_choice[0] = toupper(user_choice[0]);

    
    if (strcmp(user_choice, "Rock") != 0 && strcmp(user_choice, "Paper") != 0 && strcmp(user_choice, "Scissors") != 0) 
    {
        printf("Invalid choice! Please choose Rock, Paper, or Scissors.\n");
        return 1;
    }
    
    const char* computer_choice = get_computer_choice();
    printf("\nYour choice: %s\n", user_choice);
    printf("Computer's choice: %s\n", computer_choice);
    printf("%s\n", determine_winner(user_choice, computer_choice));
    return 0;
}




OUTPUT
/tmp/upqxBTeB0Q.o
Enter your choice (Rock, Paper, Scissors): SCISSORS

Your choice: Scissors
Computer's choice: Paper
You win.


=== Code Execution Successful ===

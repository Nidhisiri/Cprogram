ASSIGNMENT-5


INPUT
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char word[] = "coding";
char guessedWord[20];
int wordLength = strlen(word);
int attempts = 3;
int correctGuesses = 0;
char guess;

for (int i = 0; i < wordLength; i++)
{
  guessedWord[i] = '_';
}
  guessedWord[wordLength] = '\0';

printf("Welcome to Hangman!\n");
printf("You have %d attempts to guess the word.\n", attempts);

while (attempts > 0 && correctGuesses < wordLength) 
{
   printf("Current word: %s\n", guessedWord);
   printf("Enter your guess: ");
   scanf(" %c", &guess);
   guess = tolower(guess);

int found = 0;
for (int i = 0; i < wordLength; i++) 
{
   if (word[i] == guess && guessedWord[i] == '_') 
   {
      guessedWord[i] = guess;
      correctGuesses++;
      found = 1;
   }
}

if (!found)
{
     attempts--;
     printf("Wrong guess! Attempts remaining: %d\n",

     attempts);
} else {
     printf("Good guess!\n");
 }
}

if (correctGuesses == wordLength) 
{
  printf("Congratulations! You guessed the word: %s\n", word);
  printf("The Man survives!\n");
} else {
  printf("You ran out of attempts! The word was: %s\n", word);
  printf("The Man is hanged!\n");
} 
return 0;
}




OUTPUT
/tmp/KDmuZipTi7.o
Welcome to Hangman!
You have 3 attempts to guess the word.
Current word: ______
Enter your guess: C
Good guess!
Current word: c_____
Enter your guess: R
Wrong guess! Attempts remaining: 2
Current word: c_____
Enter your guess: O
Good guess!
Current word: co____
Enter your guess: I
Good guess!
Current word: co_i__
Enter your guess: G
Good guess!
Current word: co_i_g
Enter your guess: F
Wrong guess! Attempts remaining: 1
Current word: co_i_g
Enter your guess: U
Wrong guess! Attempts remaining: 0
You ran out of attempts! The word was: coding
The Man is hanged!


=== Code Execution Successful ===



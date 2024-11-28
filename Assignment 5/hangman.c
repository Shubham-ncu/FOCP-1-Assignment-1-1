#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TRIES 3
#define WORD_LENGTH 20
#define WORD_COUNT 5

int main() {
    const char *words[WORD_COUNT] = {"hangman", "programming", "computer", "challenge", "development"};
    srand(time(0));
    const char *word = words[rand() % WORD_COUNT];
    char guessed[WORD_LENGTH]; 
    char display[WORD_LENGTH];
    int chances = MAX_TRIES; 
    int wordLength = strlen(word);
    int correctGuess;
    for (int i = 0; i < wordLength; i++) {
        display[i] = '_';
    }
    display[wordLength] = '\0'; 

    printf("Welcome to Hangman Game!\n");
    while (chances > 0 && strcmp(display, word) != 0) {
        printf("\nCurrent word: %s\n", display);
        printf("You have %d chances left.\n", chances);
        printf("Guess a letter: ");
        char guess;
        scanf(" %c", &guess); 
        correctGuess = 0; 
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                display[i] = guess; 
                correctGuess = 1; 
            }
        }
        if (!correctGuess) {
            chances--;
            printf("Incorrect guess!\n");
        }
    }
    if (strcmp(display, word) == 0) {
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    } else {
        printf("\nGame Over! The word was: %s\n", word);
    }
    return 0;
}

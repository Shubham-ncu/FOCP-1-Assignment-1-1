#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Please select:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please select 0, 1, or 2.\n");
        return 1; 
    }
    int randomNum = rand() % 101;
    if (randomNum >= 0 && randomNum <= 33) {
        computerChoice = 0; 
    } else if (randomNum > 33 && randomNum <= 66) {
        computerChoice = 1;
    } else {
        computerChoice = 2; 
    }
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) { 
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

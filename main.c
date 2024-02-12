#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get user's choice
int getUserChoice() {
    int choice;
    printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
    scanf("%d", &choice);
    return choice;
}

// Function to generate computer's choice
int getComputerChoice() {
    // Seed the random number generator
    srand(time(NULL));
    // Generate a random number between 1 and 3
    return rand() % 3 + 1;
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    printf("\n");

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;

    printf("Welcome to Rock, Paper, Scissors Game!\n");

    // Get user's choice
    userChoice = getUserChoice();

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Display choices
    printf("You chose: %d\n", userChoice);
    printf("Computer chose: %d\n", computerChoice);

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}

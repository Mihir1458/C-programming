#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserPick() {
    int pick;
    do {
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        if (scanf("%d", &pick) != 1) {
            while (getchar() != '\n'); // clear invalid input
            pick = 0;
        }
        if (pick < 1 || pick > 4)
            printf("Invalid choice. Please pick between 1 and 4 matchsticks.\n");
    } while (pick < 1 || pick > 4);
    return pick;
}

int getComputerPick(int remaining, int strategic) {
    int pick;
    if (strategic && remaining > 1) {
        pick = 5 - (remaining % 5);
        if (pick < 1 || pick > 4 || pick >= remaining)
            pick = 1; // fallback
    } else {
        pick = (rand() % 4) + 1;
        if (pick >= remaining) pick = 1;
    }
    return pick;
}

void playGame(int userStarts, int strategic, int *userWins, int *computerWins) {
    int matchsticks = 21;
    int userPick, computerPick;
    int userTurn = userStarts;

    printf("\n--- New Matchstick Game Started ---\n");
    printf("Starting with 21 matchsticks. Don't pick the last one!\n\n");

    while (matchsticks > 1) {
        printf("Matchsticks remaining: %d\n", matchsticks);

        if (userTurn) {
            userPick = getUserPick();
            matchsticks -= userPick;
            if (matchsticks == 1) {
                printf("Only 1 matchstick left. You have to pick it.\n");
                printf("Computer wins!\n");
                (*computerWins)++;
                return;
            }
            userTurn = 0;
        } else {
            computerPick = getComputerPick(matchsticks, strategic);
            printf("Computer picks %d matchstick%s.\n", computerPick, computerPick > 1 ? "s" : "");
            matchsticks -= computerPick;
            if (matchsticks == 1) {
                printf("Only 1 matchstick left. Computer forced to pick it.\n");
                printf("You win!\n");
                (*userWins)++;
                return;
            }
            userTurn = 1;
        }
    }
}

int main() {
    int userWins = 0, computerWins = 0;
    int playAgain = 1, userStarts, mode;
    char choice;

    srand(time(NULL)); // Seed random for alternate mode

    printf("====== Matchstick Game ======\n");

    while (playAgain) {
        // Mode selection
        printf("\nSelect Mode:\n1. Computer plays strategically (always wins)\n2. Computer plays randomly\nEnter choice (1 or 2): ");
        scanf("%d", &mode);
        int strategic = (mode == 1);

        // Choose who starts
        printf("Who should start first?\n1. You\n2. Computer\nEnter choice (1 or 2): ");
        scanf("%d", &userStarts);
        userStarts = (userStarts == 1) ? 1 : 0;

        playGame(userStarts, strategic, &userWins, &computerWins);

        printf("\nScoreboard:\nYou: %d | Computer: %d\n", userWins, computerWins);

        printf("Do you want to play again? (Y/N): ");
        while (getchar() != '\n'); // clear input buffer
        scanf("%c", &choice);
        playAgain = (choice == 'Y' || choice == 'y');
    }

    printf("Thanks for playing! Final Score:\nYou: %d | Computer: %d\n", userWins, computerWins);
    return 0;
}

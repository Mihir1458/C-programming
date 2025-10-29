#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

// Nested structure: Coach inside Team
struct Coach {
    char name[50];
    int age;
    int experience;
};

struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach; // nested structure
};

int main() {
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;
    char searchName[50];

    do {
        printf("\n===== CHARUSAT Sports Management System =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1: {
                if (teamCount >= MAX_TEAMS) {
                    printf("Cannot add more teams. Limit reached.\n");
                    break;
                }

                struct Team newTeam;

                printf("Enter Team Name: ");
                fgets(newTeam.teamName, sizeof(newTeam.teamName), stdin);
                newTeam.teamName[strcspn(newTeam.teamName, "\n")] = 0; // remove newline

                // Check for duplicate team name
                int duplicate = 0;
                for (int i = 0; i < teamCount; i++) {
                    if (strcmp(teams[i].teamName, newTeam.teamName) == 0) {
                        duplicate = 1;
                        break;
                    }
                }

                if (duplicate) {
                    printf("Team already exists!\n");
                    break;
                }

                printf("Enter Sport Type: ");
                fgets(newTeam.sportType, sizeof(newTeam.sportType), stdin);
                newTeam.sportType[strcspn(newTeam.sportType, "\n")] = 0;

                printf("Enter Coach Name: ");
                fgets(newTeam.coach.name, sizeof(newTeam.coach.name), stdin);
                newTeam.coach.name[strcspn(newTeam.coach.name, "\n")] = 0;

                printf("Enter Coach Age: ");
                scanf("%d", &newTeam.coach.age);
                printf("Enter Coach Experience (in years): ");
                scanf("%d", &newTeam.coach.experience);
                getchar();

                teams[teamCount++] = newTeam;
                printf("✅ Team added successfully!\n");
                break;
            }

            case 2: {
                printf("Enter Team Name to Search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = 0;

                int found = 0;
                for (int i = 0; i < teamCount; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0) {
                        printf("\nTeam Found!\n");
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d years\n", teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("❌ Team not found.\n");
                break;
            }

            case 3: {
                if (teamCount == 0) {
                    printf("No teams to display.\n");
                    break;
                }

                printf("\n--- All Teams and Coach Details ---\n");
                for (int i = 0; i < teamCount; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Coach Experience: %d years\n", teams[i].coach.experience);
                }
                break;
            }

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

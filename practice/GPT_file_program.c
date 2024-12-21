#include <stdio.h>
#include <stdlib.h>

#define MAX_GROUPS 100
#define TASK_COUNT 5
#define FILE_NAME "CompRecord.txt"

// Structure to represent group information
struct Group {
    int groupID;
    char groupName[50];
    int tasks[TASK_COUNT];
};
// Function to input data for a new group and store it in the file
void Input() {
    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    struct Group newGroup;
    printf("Enter Group ID: ");
    scanf("%d", &newGroup.groupID);
    printf("Enter Group Name: ");
    scanf("%s", newGroup.groupName);
    printf("Enter task results (0 or 1):\n");
    for (int i = 0; i < TASK_COUNT; ++i) {
        do {
            printf("Task %d: ", i + 1);
            scanf("%d", &newGroup.tasks[i]);
        } while (newGroup.tasks[i] != 0 && newGroup.tasks[i] != 1);
    }
    // Append data to file
    fprintf(file, "%d %s", newGroup.groupID, newGroup.groupName);
    for (int i = 0; i < TASK_COUNT; ++i) {
        fprintf(file, " %d", newGroup.tasks[i]);
    }
    fprintf(file, "\n");

    fclose(file);
}

// Function to display information about winning groups
void DisplayWinner() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    int successCount[MAX_GROUPS] = {0};
    int maxSuccess = 0;
    while (!feof(file)) {
        struct Group currentGroup;
        fscanf(file, "%d %s", &currentGroup.groupID, currentGroup.groupName);
        for (int i = 0; i < TASK_COUNT; ++i) {
            fscanf(file, " %d", &currentGroup.tasks[i]);
            successCount[currentGroup.groupID - 1] += currentGroup.tasks[i];
        }

        if (successCount[currentGroup.groupID - 1] > maxSuccess) {
            maxSuccess = successCount[currentGroup.groupID - 1];
        }
    }

    printf("Winning group(s) with %d successful tasks:\n", maxSuccess);

    // Display winning group(s)
    for (int i = 0; i < MAX_GROUPS; ++i) {
        if (successCount[i] == maxSuccess) {
            printf("Group ID: %d, Group Name: %s\n", i + 1, "Group Name");  // Modify as per actual group name
        }
    }

    fclose(file);
}

// Function to search and display details of a specific group
void Search() {
    int searchID;
    do {
        printf("Enter Group ID to search (enter 0 to exit): ");
        scanf("%d", &searchID);

        if (searchID == 0) {
            break;
        }

        FILE *file = fopen(FILE_NAME, "r");
        if (file == NULL) {
            printf("Error opening file!\n");
            exit(1);
        }

        while (!feof(file)) {
            struct Group currentGroup;
            fscanf(file, "%d %s", &currentGroup.groupID, currentGroup.groupName);
            if (currentGroup.groupID == searchID) {
                printf("Group ID: %d, Group Name: %s\n", currentGroup.groupID, currentGroup.groupName);
                printf("Task Results: ");
                for (int i = 0; i < TASK_COUNT; ++i) {
                    fscanf(file, " %d", &currentGroup.tasks[i]);
                    printf("%d ", currentGroup.tasks[i]);
                }
                printf("\n");
                break;
            } else {
                // Skip task results
                for (int i = 0; i < TASK_COUNT; ++i) {
                    int dummy;
                    fscanf(file, " %d", &dummy);
                }
            }
        }

        fclose(file);

    } while (searchID != 0);
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Group\n");
        printf("2. Display Winners\n");
        printf("3. Search Group\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Input();
                break;
            case 2:
                DisplayWinner();
                break;
            case 3:
                Search();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

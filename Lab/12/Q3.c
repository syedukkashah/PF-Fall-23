/*Programmer: Syed Ukkashah
*Date: 11/28/2023
*Description: Create a structure to keep record of each course (course code, course name, course gpa, semester). Make a console application that allows to input course infromation and save data to a file. Then it has an option to view transcript, calculate CGPA and SGPAs.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_COURSES 100

// Structure to represent a course
struct Course {
    char code[20];
    char name[50];
    float gpa;
    int semester;
};

// Function prototypes
void inputCourse(struct Course *course);
void saveToFile(const struct Course *courses, int numCourses);
void viewTranscript(const struct Course *courses, int numCourses);
float calculateCGPA(const struct Course *courses, int numCourses);
float calculateSGPA(const struct Course *courses, int numCourses, int semester);

int main() {
    struct Course courses[MAX_COURSES];
    int numCourses = 0;
    int option;

    do {
        printf("\n1. Input Course\n");
        printf("2. View Transcript\n");
        printf("3. Calculate CGPA\n");
        printf("4. Calculate SGPA\n");
        printf("5. Save to File\n");
        printf("0. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (numCourses < MAX_COURSES) {
                    inputCourse(&courses[numCourses]);
                    numCourses++;
                } else {
                    printf("Maximum number of courses reached.\n");
                }
                break;
            case 2:
                viewTranscript(courses, numCourses);
                break;
            case 3:
                printf("CGPA: %.2f\n", calculateCGPA(courses, numCourses));
                break;
            case 4:
                {
                    int semester;
                    printf("Enter semester for SGPA calculation: ");
                    scanf("%d", &semester);
                    printf("SGPA: %.2f\n", calculateSGPA(courses, numCourses, semester));
                }
                break;
            case 5:
                saveToFile(courses, numCourses);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 0);

    return 0;
}

void inputCourse(struct Course *course) {
    printf("Enter Course Code: ");
    scanf("%s", course->code);
    printf("Enter Course Name: ");
    scanf("%s", course->name);
    printf("Enter Course GPA: ");
    scanf("%f", &course->gpa);
    printf("Enter Semester: ");
    scanf("%d", &course->semester);
}

void saveToFile(const struct Course *courses, int numCourses) {
    FILE *file = fopen("transcript.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < numCourses; i++) {
        fprintf(file, "Course Code: %s\n", courses[i].code);
        fprintf(file, "Course Name: %s\n", courses[i].name);
        fprintf(file, "Course GPA: %.2f\n", courses[i].gpa);
        fprintf(file, "Semester: %d\n", courses[i].semester);
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Data saved to file.\n");
}

void viewTranscript(const struct Course *courses, int numCourses) {
    printf("\nTranscript:\n");
    for (int i = 0; i < numCourses; i++) {
        printf("Course Code: %s\n", courses[i].code);
        printf("Course Name: %s\n", courses[i].name);
        printf("Course GPA: %.2f\n", courses[i].gpa);
        printf("Semester: %d\n", courses[i].semester);
        printf("\n");
    }
}

float calculateCGPA(const struct Course *courses, int numCourses) {
    float totalGPA = 0.0;

    for (int i = 0; i < numCourses; i++) {
        totalGPA += courses[i].gpa;
    }

    return (numCourses > 0) ? (totalGPA / numCourses) : 0.0;
}

float calculateSGPA(const struct Course *courses, int numCourses, int semester) {
    float totalGPA = 0.0;
    int count = 0;

    for (int i = 0; i < numCourses; i++) {
        if (courses[i].semester == semester) {
            totalGPA += courses[i].gpa;
            count++;
        }
    }

    return (count > 0) ? (totalGPA / count) : 0.0;
}

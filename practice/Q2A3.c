#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<stdbool.h>
struct Employee{
    char name[20];
    char role[10];
    int creativity;
    int teamwork;
    int communication;
};
struct departments{
    char dept_name[20];
    struct Employee[];
};
void fill_depts(struct departments depts[4][5], struct Employee employees[20]){
    int k=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            depts[i][j] = employees[k];
            k++;
        }
    }
}
char names [][20]= {
        "Akio Tanaka",
        "Isabella Rossi",
        "Alejandro Fernandez",
        "Svetlana Ivanova",
        "Ahmed Al-Mansoori",
        "Mei Chen",
        "Lars Andersen",
        "Katarina Petrovic",
        "Rajesh Patel",
        "Gabriela Silva",
        "Juan Carlos Ramirez",
        "Aisha Khan",
        "Pierre Dubois",
        "Ingrid Johansson",
        "Carlos Gutierrez",
        "Leila Nasser",
        "Diego Martinez",
        "Sofia Costa",
        "Mateo Rodriguez",
        "Anika Schmidt"
    };
char roles [5][10] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
    int isRoleAssigned(char role [], employees) {
    return 0; // Role is not assigned
}
void assign(struct Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        employees[i].creativity = rand() % 101;
        employees[i].communication = rand() % 101;
        employees[i].teamwork = rand() % 101;
        strcpy(employees[i].name, names[i]);
        int emp_dept = rand()%5;
    }
}
void printEmployeeInfoPerDepartment(struct Employee employees[], int size) {
    for (int i = 0; i < 4; i++) {
        printf("Department: %s\n", dept[i]);
        for (int j = 0; j < size; j++) {
            if (strcmp(dept[i], employees[j].role) == 0) {
                printf("Name: %-20s Role: %-10s Communication: %-3d Teamwork: %-3d Creativity: %-3d\n",
                       employees[j].name, employees[j].role, employees[j].communication,
                       employees[j].teamwork, employees[j].creativity);
            }
        }
        printf("\n");
    }
}
int main(){
    time_t t;
    srand((unsigned int)time(&t));
    struct Employee employees[20];
    struct departments depts[4][5];
    void fill_depts(struct departments[4][5], struct Employee employees[20]);
    assign(employees, sizeof(employees));
    printEmployeeInfoPerDepartment(employees,sizeof(employees));
    return 0;
}


#include <stdio.h>
#include<string.h>
struct Employee{ //making a structure to store employee info
    int id;
    char first_name [20];
    char last_name [20];
    int salary;
    char joining_date [20];
    char dept [20];
};
void display_maxsalaries(int indexes [], struct Employee employees[], int size){ //function displays the max salaries. Arguments(Structure array and size of array)
    printf("MAX SALARIES PER DEPARTMENT:\n");
    for(int i=0; i<size; i++){
        if(indexes[i]!=size){
            printf("ID: %d, Name: %s %s, Department: %s, Joining Date: %s, Salary: %d\n", employees[indexes[i]].id, employees[indexes[i]].first_name, employees[indexes[i]].last_name, employees[indexes[i]].dept, employees[indexes[i]].joining_date, employees[indexes[i]].salary);
        }

    }
}
void max_salaries(struct Employee employees [], int size){ //function sorts max salaries
    int max_HR, max_Admin, max_Account;
    max_HR= employees[0].salary;
    max_Account = employees[5].salary;
    max_Admin = employees[1].salary;
    int max_indexes[size]; //declaration of an array that stores indexes of Structure array that have max salary employees
    for(int i=0; i<size; i++){
        max_indexes[i]=size; // initializing max index array with out of bounds index
    }
    int j=0;
    for(int i=0; i<size; i++){
        if(max_HR<employees[i].salary && strcmp(employees[i].dept, "HR") == 0){
            max_HR = employees[i].salary;
        }
        if(max_Account<employees[i].salary && strcmp(employees[i].dept, "Account") == 0){
            max_Account = employees[i].salary;
        }
        if(max_Admin<employees[i].salary && strcmp(employees[i].dept, "Admin") == 0){
            max_Admin = employees[i].salary;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        if(employees[i].salary == max_HR || employees[i].salary == max_Admin || employees[i].salary == max_Account){
            max_indexes[i] = i; //storing indexes of Structure array that have max salary employees
        }
    }
    display_maxsalaries(max_indexes, employees, size); //display function called 
}
void net_salaries(struct Employee employees[], int size){ //function calculates net salaries per department
    int HR_salaries, Admin_salaries, Account_salaries;
    HR_salaries = Admin_salaries = Account_salaries = 0;
    for(int i=0; i<size; i++){
        if(strcmp(employees[i].dept,"HR") == 0){
            HR_salaries+=employees[i].salary;
        }
        if(strcmp(employees[i].dept,"Admin") == 0){
            Account_salaries+=employees[i].salary;
        }
        if(strcmp(employees[i].dept,"Account") == 0){
            Admin_salaries+=employees[i].salary;
        }
    }
      printf("Salary distribution:\nHR: %d\nAdmin: %d\nAccount: %d\n", HR_salaries, Admin_salaries, Account_salaries);

}

int main()
{
    printf("Syed Ukkashah Ahmed Shah (23K-0055)\n");
     struct Employee employees[] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };
    max_salaries(employees, sizeof(employees));
    printf("\n");
    net_salaries(employees, sizeof(employees));
}
    

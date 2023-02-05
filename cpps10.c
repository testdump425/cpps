#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

void addEmployee(FILE *fp, struct Employee *employee, int *count) {
    printf("Enter employee id: ");
    scanf("%d", &employee[*count].id);
    printf("Enter employee name: ");
    scanf("%s", employee[*count].name);
    printf("Enter employee age: ");
    scanf("%d", &employee[*count].age);
    printf("Enter employee salary: ");
    scanf("%f", &employee[*count].salary);
    fprintf(fp, "%d %s %d %f\n", employee[*count].id, employee[*count].name, employee[*count].age, employee[*count].salary);
    (*count)++;
}

void Search_Employee(FILE *fp, struct Employee *employee, int id, int count) {
    int i;
    for (i = 0; i < count; i++) {
        if (employee[i].id == id) {
            printf("Employee id: %d\n", employee[i].id);
            printf("Employee name: %s\n", employee[i].name);
            printf("Employee age: %d\n", employee[i].age);
            printf("Employee salary: %f\n", employee[i].salary);
            return;
        }
    }
    printf("Employee with id %d not found\n", id);
}

void displayAllEmployees(FILE *fp, struct Employee *employee, int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf("Employee id: %d\n", employee[i].id);
        printf("Employee name: %s\n", employee[i].name);
        printf("Employee age: %d\n", employee[i].age);
        printf("Employee salary: %f\n", employee[i].salary);
        printf("\n");
}
}

int main() {
struct Employee employees[MAX_EMPLOYEES];
int count = 0, choice, id;
FILE *fp;
fp = fopen("employees.txt", "a+");
if (fp == NULL) {
printf("Error opening file\n");
return 1;
}
while (1) {
printf("1. Add Employee\n");
printf("2. Display Employee\n");
printf("3. Display All Employees\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
addEmployee(fp, employees, &count);
break;
case 2:
printf("Enter employee id: ");
scanf("%d", &id);
Search_Employee(fp, employees, id, count);
break;
case 3:
displayAllEmployees(fp, employees, count);
break;
case 4:
fclose(fp);
return 0;
default:
printf("Invalid choice\n");
}
}
return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LEN 50
#define MAX_USN_LEN 11

struct Student {
  char usn[MAX_USN_LEN];
  char name[MAX_NAME_LEN];
  int marks[6];
  int total;
  float average;
  int rank;
};



int main() {
  int n, choice;
  struct Student students[MAX_STUDENTS];
  char usn[MAX_USN_LEN];

  printf("Enter the number of students: ");
  scanf("%d", &n);

  inputData(students, n);
  computeData(students, n);

  do {
    printf("\nEnter your choice:\n");
    printf("1. Print data for entire class\n");
    printf("2. Print data for specific USN\n");
    printf("3. Exit\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printData(students, n);
        break;
      case 2:
        printf("Enter USN: ");
        scanf("%s", usn);
        displayDataByUSN(students, n, usn);
        break;
      case 3:
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while(choice != 3);

  return 0;
}

void inputData(struct Student students[], int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    printf("\nEnter data for student %d:\n", i + 1);

    printf("USN: ");
    scanf("%s", students[i].usn);

    printf("Name: ");
    scanf("%s", students[i].name);

    printf("Marks in 6 subjects:\n");
    for (j = 0; j < 6; j++) {
      printf("Subject %d: ", j + 1);
      scanf("%d", &students[i].marks[j]);
    }
  }
}

void computeData(struct Student students[], int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    students[i].total = 0;
    for (j = 0; j < 6; j++) {
      students[i].total += students[i].marks[j];
    }
    students[i].average = (float) students[i].total / 6;
  }

  for (i = 0; i < n; i++) {
    students[i].rank = 1;
    for (j = 0; j < n; j++) {
       if(students[j].total > students[i].total)
                students[i].rank++;
    }
  }
}

     
int displayDataByUSN(struct Student students[], int n, char USN[])
{
    int i, j;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        if(strcmp(students[i].usn, USN) == 0)
        {
            flag = 1;
            printf("USN\tName\tMarks\tTotal\tAvg\tRank\n");
            printf("%s\t%s\t", students[i].usn, students[i].name);
            for(j = 0; j < 6; j++)
            {
                printf("%d\t", students[i].marks[j]);
            }
            printf("%d\t%.2f\t%d\n", students[i].total, students[i].average,students[i].rank);
            return;
        }
    }
    printf("Invalid USN :\n");
}
void printData(struct Student students[], int n)
{
    int i, j;
    printf("USN\tName\tMarks\tTotal\tAvg\tRank\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\t%s\t", students[i].usn, students[i].name);
        for(j = 0; j < 6; j++)
        {
            printf("%d\t", students[i].marks[j]);
        }
        printf("%d\t%.2f\t%d\n", students[i].total, students[i].average, students[i].rank);
    }
}






/*#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME 50
#define MAX_USN 15

struct student {
    char usn[MAX_USN];
    char name[MAX_NAME];
    int marks[6];
    int total;
    float average;
    int rank;
};

void inputStudent(struct student *s) {
    int i;
    printf("Enter USN: ");
    scanf("%s", s->usn);
    printf("Enter name: ");
    scanf("%s", s->name);
    for (i = 0; i < 6; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &s->marks[i]);
    }
}

void computeTotal(struct student *s) {
    int i;
    s->total = 0;
    for (i = 0; i < 6; i++) {
        s->total += s->marks[i];
    }
}

void computeAverage(struct student *s) {
    s->average = (float)s->total/6;
}

void assignRank(struct student *students, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        students[i].rank = 1;
        for (j = 0; j < n; j++) {
            if (students[j].total > students[i].total) {
                students[i].rank++;
            }
        }
    }
}

void displayStudent(struct student s) {
    int i;
    printf("USN: %s\n", s.usn);
    printf("Name: %s\n", s.name);
    printf("Marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", s.marks[i]);
    }
    printf("\n");
    printf("Total: %d\n", s.total);
    printf("Average: %.2f\n", s.average);
    printf("Rank: %d\n", s.rank);
}

void displayAllStudents(struct student *students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        displayStudent(students[i]);
        printf("\n");
    }
}

int main() {
    int n, i, choice;
    char usn[MAX_USN];
    struct student students[MAX_STUDENTS];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        inputStudent(&students[i]);
    }
    for (i = 0; i < n; i++) {
        computeTotal(&students[i]);
        computeAverage(&students[i]);
    }
    assignRank(students, n);
    while (1) {
        printf("\n");
        printf("1. Add Student\n");
        printf("2. Display Employee\n");
        printf("3. Display All Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        */

/*#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX_STUDENTS 100
#define MAX_NAME 100
#define MAX_USN 10

struct student
{
char name[MAX_NAME];
char usn[MAX_USN];
int marks[6];
int total;
float avg;
int rank;
};

void inputData(struct student students[], int n)
{
int i, j;
for (i = 0; i < n; i++)
{
printf("Enter the details of student %d\n", i + 1);
printf("Enter name: ");
scanf("%s", students[i].name);
printf("Enter USN: ");
scanf("%s", students[i].usn);
printf("Enter marks in 6 subjects: ");
for (j = 0; j < 6; j++)
{
scanf("%d", &students[i].marks[j]);
students[i].total += students[i].marks[j];
}
students[i].avg = (float)students[i].total / 6;
}
}

void writeToFile(struct student students[], int n)
{
int i, j;
FILE *fp;
fp = fopen("Student_db.txt", "w");
for (i = 0; i < n; i++)
{
fprintf(fp, "Name: %s\n", students[i].name);
fprintf(fp, "USN: %s\n", students[i].usn);
fprintf(fp, "Marks: ");
for (j = 0; j < 6; j++)
{
fprintf(fp, "%d ", students[i].marks[j]);
}
fprintf(fp, "\nTotal: %d\n", students[i].total);
fprintf(fp, "Average: %.2f\n", students[i].avg);
fprintf(fp, "Rank: %d\n\n", students[i].rank);
}
fclose(fp);
}

void retrieveFromFile(struct student students[], int n)
{
int i, j;
FILE *fp;
fp = fopen("student_db.txt", "r");
for (i = 0; i < n; i++)
{
fscanf(fp, "Name: %s\n", students[i].name);
fscanf(fp, "USN: %s\n", students[i].usn);
fscanf(fp, "Marks: ");
for (j = 0; j < 6; j++)
{
fscanf(fp, "%d ", &students[i].marks[j]);
students[i].total += students[i].marks[j];
}
fscanf(fp, "\nTotal: %d\n", &students[i].total);
fscanf(fp, "Average: %f\n", &students[i].avg);
fscanf(fp, "Rank: %d\n\n", &students[i].rank);
}
fclose(fp);
}

void display(struct student students[], int n)
{
int i, j;
printf("Student Database:\n");
for (i = 0; i < n; i++)
{
printf("Name: %s\n", students[i].name);
printf("USN: %s\n", students[i].usn);
printf("Marks: ");
for (j = 0; j < 6; j++)
{
printf("%d ", students[i].marks[j]);
}
printf("\nTotal: %d\n", students[i].total);
printf("Average: %.2f\n", students[i].avg);
printf("Rank: %d\n\n", students[i].rank);
}
}

void displayByUSN(struct student students[], int n, char usn[])
{
int i, flag = 0;
for (i = 0; i < n; i++)
{
if (strcmp(students[i].usn, usn) == 0)
{
flag = 1;
printf("Name: %s\n", students[i].name);
printf("USN: %s\n" ,  students[i].usn);
printf("Enter marks in 6 subjects: ");
for (int j = 0; j < 6; j++)
{
scanf("%d", &students[i].marks[j]);
students[i].total += students[i].marks[j];
}
students[i].avg = (float)students[i].total / 6;
}
}
}

int inputData(struct Student *s, int num_students);
void writeToFile(struct Student *s, int num_students);
int retrieveFromFile(struct Student *s, int num_students);
void display(struct Student *s, int num_students);
void displayByUSN(struct Student *s, int num_students, char *usn);

int main() {
  int choice;
  int num_students;
  char usn[MAX_USN];
  struct Student students[MAX_STUDENTS];

  while (1) {
    printf("1. Input data\n");
    printf("2. Write to file\n");
    printf("3. Retrieve from file\n");
    printf("4. Display entire class\n");
    printf("5. Display specific USN\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        num_students = inputData(students, MAX_STUDENTS);
        break;
      case 2:
        writeToFile(students, num_students);
        break;
      case 3:
        num_students = retrieveFromFile(students,num_students);
        break;
      case 4:
        display(students, num_students);
        break;
      case 5:
        printf("Enter USN: ");
        scanf("%s", usn);
        displayByUSN(students, num_students, usn);
        break;
      case 6:
        exit(0);
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
  }

  return 0;
}
*/
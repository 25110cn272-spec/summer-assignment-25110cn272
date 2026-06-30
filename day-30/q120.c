#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX], n = 0;
char name[MAX][50];

/* Function Declarations */
void addStudent();
void displayStudents();
void searchStudent();
void updateMarks();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

/* Add Student */
void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;

    printf("Student added successfully.\n");
}

/* Display Students */
void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("No records available.\n");
        return;
    }

    printf("\nStudent Records\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

/* Search Student */
void searchStudent()
{
    int i, r;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

/* Update Marks */
void updateMarks()
{
    int i, r;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("Enter New Marks: ");
            scanf("%d", &marks[i]);

            printf("Marks updated successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}
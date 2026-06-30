#include <stdio.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice, search;

    printf("Enter number of students: ");
    scanf("%d", &n);

    while (1)
    {
        printf("\n--- Student Record System ---\n");
        printf("1. Enter Records\n");
        printf("2. Display Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", name[i]);

                    printf("Enter Marks: ");
                    scanf("%d", &marks[i]);
                }
                printf("Records added successfully.\n");
                break;

            case 2:
                printf("\nStudent Records\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nRoll Number : %d", roll[i]);
                    printf("\nName        : %s", name[i]);
                    printf("\nMarks       : %d\n", marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &search);

                for (i = 0; i < n; i++)
                {
                    if (roll[i] == search)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %d\n", marks[i]);
                        break;
                    }
                }

                if (i == n)
                    printf("Student not found.\n");

                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
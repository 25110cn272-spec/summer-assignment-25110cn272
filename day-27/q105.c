#include <stdio.h>
#include <stdlib.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    FILE *fp;
    struct Student s;
    int choice;

    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                fp = fopen("student.txt", "a");

                printf("Enter Roll Number: ");
                scanf("%d", &s.roll);

                printf("Enter Name: ");
                scanf("%s", s.name);

                printf("Enter Marks: ");
                scanf("%f", &s.marks);

                fprintf(fp, "%d %s %.2f\n",
                        s.roll, s.name, s.marks);

                fclose(fp);
                printf("Record Saved Successfully.\n");
                break;

            case 2:
                fp = fopen("student.txt", "r");

                if (fp == NULL) {
                    printf("No records found.\n");
                    break;
                }

                printf("\nRoll\tName\tMarks\n");

                while (fscanf(fp, "%d %s %f",
                              &s.roll, s.name,
                              &s.marks) != EOF) 
                              {

                    printf("%d\t%s\t%.2f\n",
                           s.roll, s.name,
                           s.marks);
                }

                fclose(fp);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
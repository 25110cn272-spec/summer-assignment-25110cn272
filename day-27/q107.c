#include <stdio.h>
#include <stdlib.h>

struct Employee 
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() 
{
    FILE *fp;
    struct Employee e;
    int choice;

    while (1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            fp = fopen("salary.txt", "a");

            printf("Enter Employee ID: ");
            scanf("%d", &e.id);

            printf("Enter Employee Name: ");
            scanf("%s", e.name);

            printf("Enter Basic Salary: ");
            scanf("%f", &e.basic);

            e.hra = 0.20 * e.basic;
            e.da = 0.10 * e.basic;
            e.gross = e.basic + e.hra + e.da;

            fprintf(fp, "%d %s %.2f %.2f %.2f %.2f\n",
                    e.id, e.name, e.basic,
                    e.hra, e.da, e.gross);

            fclose(fp);

            printf("Salary record added successfully.\n");
            break;

        case 2:
            fp = fopen("salary.txt", "r");

            if (fp == NULL) {
                printf("No records found.\n");
                break;
            }

            printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");

            while (fscanf(fp, "%d %s %f %f %f %f",
                          &e.id, e.name,
                          &e.basic, &e.hra,
                          &e.da, &e.gross) != EOF) 
                          {

                printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                       e.id, e.name,
                       e.basic, e.hra,
                       e.da, e.gross);
            }

            fclose(fp);
            break;

        case 3:
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
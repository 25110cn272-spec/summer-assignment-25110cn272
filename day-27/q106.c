#include <stdio.h>
#include <stdlib.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int main() 
{
    FILE *fp;
    struct Employee e;
    int choice;

    while (1) 
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            fp = fopen("employee.txt", "a");

            printf("Enter Employee ID: ");
            scanf("%d", &e.id);

            printf("Enter Name: ");
            scanf("%s", e.name);

            printf("Enter Salary: ");
            scanf("%f", &e.salary);

            fprintf(fp, "%d %s %.2f\n",
                    e.id, e.name, e.salary);

            fclose(fp);

            printf("Employee record saved successfully.\n");
            break;

        case 2:
            fp = fopen("employee.txt", "r");

            if (fp == NULL) 
            {
                printf("No records found.\n");
                break;
            }

            printf("\nID\tName\tSalary\n");

            while (fscanf(fp, "%d %s %f",
                          &e.id, e.name,
                          &e.salary) != EOF) 
                          {

                printf("%d\t%s\t%.2f\n",
                       e.id, e.name,
                       e.salary);
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
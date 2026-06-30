#include <stdio.h>

int main()
{
    int empId[100], salary[100];
    char name[100][50];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    printf("\nEmployee Records\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", name[i]);
                        printf("Salary : %d\n", salary[i]);
                        printf("----------------------\n");
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (empId[i] == id)
                    {
                        found = 1;

                        printf("\nEmployee Found\n");
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", name[i]);
                        printf("Salary : %d\n", salary[i]);
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (empId[i] == id)
                    {
                        found = 1;

                        printf("Enter New Salary: ");
                        scanf("%d", &salary[i]);

                        printf("Salary updated successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");

                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
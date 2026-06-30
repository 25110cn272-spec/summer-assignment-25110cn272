#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], issued[100];
    char title[100][50];
    int n = 0, choice, i, bookId, found;

    while (1)
    {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                issued[n] = 0;
                n++;

                printf("Book added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook List\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("ID     : %d\n", id[i]);
                        printf("Title  : %s\n", title[i]);

                        if (issued[i] == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");

                        printf("---------------------\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &bookId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (id[i] == bookId)
                    {
                        found = 1;

                        if (issued[i] == 0)
                        {
                            issued[i] = 1;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book already issued.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &bookId);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (id[i] == bookId)
                    {
                        found = 1;

                        if (issued[i] == 1)
                        {
                            issued[i] = 0;
                            printf("Book returned successfully.\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

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
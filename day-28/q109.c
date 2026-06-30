#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    int issued;
};

int main()
{
    struct Book books[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n--- Library Management System ---\n");
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
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[n].title);

                books[n].issued = 0;
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
                    printf("\nBooks List:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Status: %s\n\n",
                               books[i].issued ? "Issued" : "Available");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (books[i].id == id)
                    {
                        found = 1;

                        if (books[i].issued)
                            printf("Book already issued.\n");
                        else
                        {
                            books[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (books[i].id == id)
                    {
                        found = 1;

                        if (!books[i].issued)
                            printf("Book is already available.\n");
                        else
                        {
                            books[i].issued = 0;
                            printf("Book returned successfully.\n");
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
#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &p[n].price);

                n++;
                printf("Product added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No products available.\n");
                }
                else
                {
                    printf("\nInventory Details:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("ID       : %d\n", p[i].id);
                        printf("Name     : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        printf("Price    : %.2f\n", p[i].price);
                        printf("-------------------------\n");
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        found = 1;

                        printf("\nProduct Found\n");
                        printf("ID       : %d\n", p[i].id);
                        printf("Name     : %s\n", p[i].name);
                        printf("Quantity : %d\n", p[i].quantity);
                        printf("Price    : %.2f\n", p[i].price);

                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == id)
                    {
                        found = 1;

                        printf("Enter New Quantity: ");
                        scanf("%d", &p[i].quantity);

                        printf("Quantity updated successfully.\n");
                        break;
                    }
                }

                if (!found)
                    printf("Product not found.\n");

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
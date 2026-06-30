#include <stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;

    while (1)
    {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Amount deposited successfully.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using the Bank Account System.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
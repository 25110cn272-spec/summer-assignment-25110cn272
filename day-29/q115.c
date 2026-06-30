#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    while (1)
    {
        printf("\n--- Menu Driven String Operations ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);
                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
                printf("Enter another string: ");
                scanf(" %[^\n]", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
            {
                int i, len;
                char temp[100];

                len = strlen(str1);

                for (i = 0; i < len; i++)
                    temp[i] = str1[len - i - 1];

                temp[len] = '\0';

                printf("Reversed String: %s\n", temp);
                break;
            }

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int totalSeats = 50, booked = 0, choice, tickets;

    while (1)
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Tickets\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if (tickets <= (totalSeats - booked))
                {
                    booked += tickets;
                    printf("%d ticket(s) booked successfully.\n", tickets);
                }
                else
                {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n", totalSeats - booked);
                printf("Booked Seats: %d\n", booked);
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);

                if (tickets <= booked)
                {
                    booked -= tickets;
                    printf("%d ticket(s) cancelled successfully.\n", tickets);
                }
                else
                {
                    printf("Invalid number of tickets.\n");
                }
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
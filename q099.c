//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], month[3];
    int day, mon, year;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &mon, &year);

    // Array of month names
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (mon < 1 || mon > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("%02d-%s-%d\n", day, months[mon - 1], year);

    return 0;
}

#include <stdio.h>
int main() {
    int totalDays, weeks, days;
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);
    weeks = totalDays / 7;
    days = totalDays % 7;
    return 0;
}
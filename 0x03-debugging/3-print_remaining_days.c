#include <stdio.h>
#include "holberton.h"

/**
 *print_remaining_days - prints the remaining days in a given year
 * given a certain date, taking into account leap years
 *@month: - month of the year
 *@day: - day of the year
 *@year: - year
 *Return: 0
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}

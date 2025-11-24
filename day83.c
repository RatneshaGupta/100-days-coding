//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Months {
    JANUARY, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Months m;

    const char *monthNames[] = {
        "JANUARY", "FEBRUARY", "MARCH", "APRIL",
        "MAY", "JUNE", "JULY", "AUGUST",
        "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };

    int daysInMonth[] = {
        31, // January
        28, // February (ignoring leap year for simplicity)
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31  // December
    };

    for (m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}



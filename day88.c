//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Colors c;

    const char *colorNames[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW"
    };

    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", colorNames[c], c);
    }

    return 0;
}

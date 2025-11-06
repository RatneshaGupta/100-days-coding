//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char text[200];
    FILE *fp;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: File '%s' could not be opened.\n", filename);
        return 1;
    }

    getchar();

    printf("Enter a new line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text successfully appended to '%s'.\n", filename);

    fclose(fp);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Reading from stdin
    printf("Enter a character: ");
    ch = getc(stdin);
    printf("You entered from stdin: %c\n", ch);

    // Reading from FILE stream
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    ch = getc(file);
    printf("Character read from file: %c\n", ch);
    fclose(file);

    return 0;
}

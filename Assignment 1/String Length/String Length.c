#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline added by fgets
    name[strcspn(name, "\n")] = '\0';

    printf("You entered: %s\n", name);
    printf("Length of the string: %lu\n", strlen(name));

    return 0;
}

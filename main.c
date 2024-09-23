#include <stdio.h>
#include <string.h>
#include "lib.h"

int main() {
    char user_input[100];

    printf("Enter some text: ");
    fgets(user_input, sizeof(user_input), stdin);

    // Remove the newline character from fgets
    user_input[strcspn(user_input, "\n")] = 0;

    // Process the user input
    process_input(user_input);
    process_input_differently(user_input);
    return 0;
}

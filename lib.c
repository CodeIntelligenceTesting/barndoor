#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

void process_input(const char *input) {
    // Allocate memory based on the length of the input
    size_t length = strlen(input);
    char *buffer = (char *)malloc(length * sizeof(char));

    if (buffer == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    strcpy(buffer, input);

    printf("Processed input: %s\n", buffer);

    // Free the allocated memory
    free(buffer);
}

void process_input_differently(const char *input) {
    // Allocate memory based on the length of the input
    size_t length = strlen(input) + 1;
    char *buffer = (char *)malloc(length * sizeof(char));

    if (buffer == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    strcpy(buffer, input);

    printf("Processed input: %s\n", buffer);

    // Free the allocated memory
    free(buffer);
}

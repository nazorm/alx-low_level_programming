#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>

void print_alphabet(void) {
    char letter = 'a';

    // Print characters from 'a' to 'z'
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }

    // Print a new line character
    _putchar('\n');
}

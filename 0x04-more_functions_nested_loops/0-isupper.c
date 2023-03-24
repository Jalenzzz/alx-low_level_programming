#include "main.h"

/*
 * This function checks whether a character is uppercase or not.
 * It returns 1 if the character is uppercase, and 0 otherwise.
 */
int _isupper(int c) {
    // Check if the character is within the ASCII range of uppercase letters (A to Z)
    if (c >= 'A' && c <= 'Z') {
        // Return 1 if the character is uppercase
        return 1;
    } else {
        // Return 0 if the character is not uppercase
        return 0;
    }
}}

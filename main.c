/**
 * File: main.c
 * Author: Stef Timmermans
 * Last Modified: 15 July 2024
 * Description:
 *   Main file for project. Uses the functionality from
 *   file `cli-parse.c` to parse and validate an input
 *   string (a math expression). Functions from `cli-math.c`
 *   are used to evaluate the expression given the parsed
 *   information.
 */

/**
 * Dependencies
 */
// Project functionality
#include "cli-parse.h"
#include "cli-math.h"

// General libraries (also included in above C files)
#include "main.h"


/**
 * Function: main
 * Arguments: N/A
 * Returns: EXIT_SUCCESS or EXIT_FAILURE
 * Description:
 *   Driver function for the project. Runs an infinite loop
 *   (stopped by "exit" command or interrupt) that reads a line
 *   of input from the user, parses it, and evaluates the
 *   expression. The result or error is printed to stdout.
 */
int main() {
    // Begin the infinite loop and prompt the user
    printf("Welcome to CLI-Math!\n");
    printf("Enter a math expression or type 'exit' to quit.\n");
    while(1) {

        // Read a line of input from the user
        char input[_MAX_INPUT];
        printf("$ ");
        fgets(input, _MAX_INPUT, stdin);

        // Remove the newline character from the input
        input[strcspn(input, "\n")] = 0;

        // Check the edge case of the user typing "exit"
        if (strcmp(input, "exit") == 0) {
            break;
        }
    }

    // Exit successfully if the loop is broken
    return EXIT_SUCCESS;
}

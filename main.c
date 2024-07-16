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
    printf("For help, type 'help'.\n");
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

        // Check the edge case of the user typing "help"
        if (strcmp(input, "help") == 0) {
            printf( "This is a command-line based math program. You can type ");
            printf("in an expression and its answer will be printed.\n");
            printf("For example, '8 / 2' will return '4' to the terminal. ");
            printf("The input is whitespace-agnostic.\n");
            printf("To see this message again, type 'help'\n");
        }

        // Execute the command
    }

    // Exit successfully if the loop is broken
    return EXIT_SUCCESS;
}

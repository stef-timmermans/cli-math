/**
 * File: main.c
 * Author: Stef Timmermans
 * Last Modified: 16 July 2024
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

    // Infinite loop
    while (1) {
        // Poll the user for input
        cli_poll();
    }

    // CLI-Math has exited successfully if cli_poll calls
    // exit with EXIT_SUCCESS. The line below will never be
    // reached and only exists for compiler compatibility.
    return EXIT_SUCCESS;
}

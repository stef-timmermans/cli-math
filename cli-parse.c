/**
 * File: cli-parse.c
 * Author: Stef Timmermans
 * Last Modified: 16 July 2024
 * Description:
 *   Contains function definitions for parsing and outputting
 *   the input and output of the CLI-Math program.
 */

/**
 * Dependencies
 */
#include "cli-parse.h"


/**
 * Function: cli_poll
 * Arguments: N/A
 * Returns: N/A
 * Description:
 *   Polls the user for input, displaying a "$ " prompt. Calls
 *   exit from the standard library with a success code if the
 *   user types "exit".
 */
void cli_poll() {
    // Read a line of input from the user
    char input[255];
    printf("$ ");
    fgets(input, 255, stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = 0;

    // Check the edge case of the user typing "exit"
    if (strcmp(input, "exit") == 0) {
        exit(EXIT_SUCCESS);
    }

    // Check the edge case of the user typing "help"
    if (strcmp(input, "help") == 0) {
        printf( "This is a command-line based math program. You can type ");
        printf("in an expression and its answer will be printed.\n");
        printf("For example, '8 / 2' will return '4' to the terminal. ");
        printf("The input is whitespace-agnostic.\n");
        printf("Commands:\n");
        printf("  'help'\t Display this help message.\n");
        printf("  'exit'\t Exit the program.\n");
    }

    // Execute the command
    execute_command(input);
}

/**
 * Function: execute_command
 * TODO
 */
void execute_command(char input[255]) {
    // TODO
    return;
}
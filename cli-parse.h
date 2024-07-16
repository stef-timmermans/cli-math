#ifndef CLI_PARSE_H_
#define CLI_PARSE_H_

// Include the I/O, string handling, etc.
#include "main.h"

/**
 * Function prototypes
 * More detailed descriptions are in `cli-parse.c`
 */

// Poll for user input, displaying a "$ " prompt
void cli_poll();

// Parse the input string and call relevant functions
void execute_command(char input[255]);

// Remove all whitespace from a string
void remove_whitespace(char input[255]);

#endif

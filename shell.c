#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT 1024
#define MAX_ARGS 64

void read_input(char *input) {
    printf("shell> "); 
    if (fgets(input, MAX_INPUT, stdin) == NULL) {
        printf("\nEnd of input. Exiting.\n");
        exit(0); 
    }
}


void parse_input(char *input, char **args) {
    char *token = strtok(input, " \t\n"); 
    int i = 0;

    while (token != NULL) {
        args[i++] = token;  
        token = strtok(NULL, " \t\n");  
    }
    
    args[i] = NULL; 
}

int main() {
    char input[MAX_INPUT]; 
    char *args[MAX_ARGS]; 

    while (1) {
        read_input(input); 

        if (input[0] == '\n') {
            continue; 
        }

        parse_input(input, args); 

        pid_t pid = fork();
        if (pid == -1) {
            perror("fork failed"); 
            exit(1);
        } 
        else if (pid == 0) {
            if (execvp(args[0], args) == -1) {
                perror("execvp failed"); 
                exit(1);
            }
        } 
        else {
            wait(NULL); 
        }
    }
    return 0; 
}
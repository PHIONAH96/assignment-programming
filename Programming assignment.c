// C program named systems programming.c to demonstrate the working
// of command line argument
#include <stdio.h>
#include <stdlib.h>

// defining main with arguments
int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}

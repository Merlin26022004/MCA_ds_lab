/*Program to demonstrate the use of storage classes (local variable, global
variable, static variable, register variable).
Merlin Xavier
25 July 2025*/
#include <stdio.h>
int globalvar = 2;
int main() {
    int localvar = 1;
    static int staticvar = 3;
    register int regvar = 4;
    printf("Local variable: %d\n", localvar);
    printf("Global variable: %d\n", globalvar);
    printf("Static variable: %d\n", staticvar);
    printf("Register variable: %d\n", regvar);
    printf("\nAfter updates:\n");
    printf("Local variable: %d\n", ++localvar);
    printf("Global variable: %d\n", ++globalvar);
    printf("Static variable: %d\n", ++staticvar);
    printf("Register variable: %d\n", ++regvar);

    return 0;
}


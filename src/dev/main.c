// src/dev/main.c
#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "division.h"
#include "multiplication.h"
#include "substraction.h"
#include "string.h"


int main(int argc, char *argv[]) {

    if (argc < 3)
    {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (strcmp(argv[1], "add") == 0)
    {
        printf("%d",add(a, b));
    }

    if (strcmp(argv[1], "div1") == 0)
    {
        printf("Division: %d / %d = %d\n", a, b, div1(a, b));
    }

    if (strcmp(argv[1], "mul") == 0)
    {
        printf("Multiplication: %d * %d = %d\n", a, b, mul(a, b));
    }

    if (strcmp(argv[1], "sub") == 0)
    {
        printf("Substraction: %d - %d = %d\n", a, b, sub(a, b));
    }


    return 0;
}

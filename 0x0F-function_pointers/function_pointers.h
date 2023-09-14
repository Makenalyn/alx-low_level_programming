#ifndef FUNCTION_POINTERS_MAIN_H
#define FUNCTION_POINTERS_MAIN_H


#include <stddef.h>
#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

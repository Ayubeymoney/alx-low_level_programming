#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int sqrt_helper(int n, int guess);
int check_prime(int n, int divisor);
int check_palindrome(char *s, int start, int end);
int wildcmp(char *s1, char *s2);
int _putchar(char c);

#endif /* MAIN_H */

#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char *s))(int, int);
struct op_t {
	char *symbol;
	int (*operation)(int, int);
};
typedef struct op_t op_t;

#endif /* endif CALC_H */

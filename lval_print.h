#ifndef lval_print_h
#define lval_print_h

#include "lval.h"
#include "lval_types.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void lval_print(lval* v);
void lval_expr_print(lval* v, char open, char close);
void lval_println(lval* v);

#endif
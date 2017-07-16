#ifndef lval_func_h
#define lval_func_h

#include "lval.h"
#include "lval_types.h"
#include <stdlib.h>
#include <string.h>

lval* lval_num(long x);

lval* lval_err(char* m);

lval* lval_sym(char* s);

lval* lval_sexpr(void);

lval* lval_qexpr(void);

lval* lval_add(lval* v, lval* x);

lval* lval_pop(lval* v, int i);

void lval_del(lval* v);

lval* lval_take(lval* v, int i);

lval* builtin_op(lval* a, char* op);

lval* lval_eval(lval* v);

lval* lval_eval_sexpr(lval* v);

#endif
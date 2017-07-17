#ifndef lval_func_h
#define lval_func_h

#define LASSERT(args, cond, err) \
  if (!(cond)) { lval_del(args); return lval_err(err); }

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

lval* builtin_head(lval* a);

lval* builtin_tail(lval* a);

lval* builtin_list(lval* a);

lval* builtin_eval(lval* a);

lval* builtin_join(lval* a);

lval* lval_join(lval* x, lval* y);

lval* builtin(lval* a, char* func);

#endif
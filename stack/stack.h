#ifndef _STACK_H_
#define _STACK_H_

typedef struct _Stack stack;

void   init (stack *, int);
void   push(stack *, void *);
void  *pop(stack *);
_Bool  empty(stack *);

#endif /* _STACK_H_ */

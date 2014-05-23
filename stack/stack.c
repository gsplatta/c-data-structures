#include "stack.h"

#define STACK_MAX 100

struct _Stack {
	int top, size;
	void  (*init)(stack *, int);
	void  (*push)(stack *, void *);
	void *(*pop)(stack *);
	_Bool (*empty)(stack *);
	void *stack[];
}

void init(stack *s, int size) {
	*s->stack = malloc(sizeof
};

void push(stack *s, void *object) {

};

void *pop (stack *s) {

};

int main() {
	return 0;
}

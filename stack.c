#include "stack.h"

//  0: success
//  1: out of memory
BYTE push(STACK *pstack, BYTE i, BYTE j, BYTE way) {
    struct entry *new;

    if ((new = (struct entry *) malloc(sizeof(struct entry))) == NULL)
        return 1;
    new->i = i;
    new->j = j;
    new->way = way;
    new->next = *pstack;
    *pstack = new;

    return 0;
}

//  0: success
//  1: empty stack
BYTE pop(STACK *pstack, BYTE *i, BYTE *j, BYTE *way) {
    STACK stack = *pstack;

    if (stack == NULL) return 1;
    *i = stack->i;
    *j = stack->j;
    *way = stack->way;
    *pstack = stack->next;
    free(stack);

    return 0;
}

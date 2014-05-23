
#ifndef _DOUBLY_LINKED_LIST_H
#define _DOUBLY_LINKED_LIST_H_

#include <stddef.h>

typedef struct Node Node;
typedef struct DoublyLinkedList DoublyLinkedList;

void  append (DoublyLinkedList *dll, void *data);
void *remove (DoublyLinkedList *dll, int index);
void  insert (DoublyLinkedList *dll, int index, void *data);
int   search (DoublyLinkedList *dll, void *data);

#endif /* _DOUBLY_LINKED_LIST_H */

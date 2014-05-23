#include "doubly_linked_list.h"

/*
 *	
 */
typedef struct Node {
	Node *prev;
	Node *next;
	void *data;
} Node;

/*
 *
 */
typedef struct DoublyLinkedList {
	int   size;
	Node *head;
	Node *tail;
} DoublyLinkedList;

/*
 *
 */
typedef struct Iterator {
	DoublyLinkedList *list;
} Iterator;

/*
 *
 */
void  append (DoublyLinkedList *dll, void *data) {
	Node *temp = dll->tail;
	Node  tail = { temp, NULL, data };
	temp->next = &tail;
	dll ->tail = &tail;
};

/*
 *
 */
void *remove (DoublyLinkedList *dll, int index) {
	void *data = NULL;
	if (index < dll->size) {
		int i;
		Iterator it = { dll };
		Node *focus = dll->head;

		for (i = 0; i < dll->size; ++i) {
			if (i == index) {
				focus->prev->next = focus->next;
				focus->next->prev = focus->prev;
				data = focus->data;
			}
			else {
				focus = focus->next;
			}		
		}
	}
	return data;
};

/*
 *
 */
void  insert (DoublyLinkedList *dll, void *data);

/*
 *
 */
int   search (DoublyLinkedList *dll, void *data);

int main(int argc, char *argv[]) {
	return 0;
}

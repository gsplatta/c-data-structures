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
void  append (DoublyLinkedList *dll, void *data) {
	if (data != NULL) {
		if (dll->head != NULL) {
			Node *temp = dll->tail;
			Node  tail = { temp, NULL, data };
			temp->next = &tail;
			dll ->tail = &tail;
		} else {
			Node newhead = { NULL, NULL, data };
			dll->head    = &newhead;
		}
		dll->size = dll->size + 1;
	}
};

/*
 *
 */
void *remove (DoublyLinkedList *dll, int index) {
	void *data = NULL;
	if (index < dll->size) {
		int i;
		Node *focus = dll->head;

		for (i = 0; i < dll->size; ++i) {
			if (i == index) {
				focus->prev->next = focus->next;
				focus->next->prev = focus->prev;
				data = focus->data;
				break;
			} else {
				focus = focus->next;
			}		
		}
		dll->size = dll->size - 1;
	}
	return data;
};

/*
 *	Inserts the data at the specified index, or appends it if the index is larger than the size of the
 *	linked list.
 */
void  insert (DoublyLinkedList *dll, int index, void *data) {
	if (data != NULL) {
		if (index > dll->size)
			append(dll, data);
		else {
			int i;
			Node *focus = dll->head;

			for (i = 0; i < dll->size; i++) {
				if (i == index) {
					Node inserted = { focus->prev, focus, data };
					focus->prev = &inserted;
					inserted.prev->next = &inserted;
					break;		
				}
			}
		}
		dll->size = dll->size + 1;
	}
};

/*
 *	Returns -1 if the data is not found in the list or the data is NULL; 
 *	otherwise, returns the index of the data.
 *	
 */
int   search (DoublyLinkedList *dll, void *data) {
	int index = -1;
	if (dll->size > 0 && data != NULL) {
		Node *focus = dll->head;
		for (int i = 0; i < dll->size; i++) {
			if (focus->data == data) {
				index = i;
				break;
			}
			focus = focus->next;
		}
	}
	return index;
};


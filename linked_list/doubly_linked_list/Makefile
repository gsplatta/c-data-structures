EXEC	= dll

CC	= gcc
OBJS	= dll
CFLAGS	= -std=c11 -Wall

dll: doubly_linked_list.h doubly_linked_list.c
	$(CC) $(CFLAGS) -c doubly_linked_list.c

tester: doubly_linked_list.o
	$(CC) $(CFLAGS) tester_doubly_linked_list.c 
clean:
	\rm *.o a.out

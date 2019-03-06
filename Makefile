mainPA1: mainPA1.c files.h info.c init.o delete.o insert.o print.o search.o get_node.o release_node.o
	gcc -o mainPA1 mainPA1.c files.h info.c init.o delete.o insert.o print.o search.o get_node.o release_node.o

info.o: info.c files.h
	gcc -c info.c files.h

init.o: init.c files.h
	gcc -c init.c files.h

delete.o: delete.c files.h release_node.c
	gcc -c delete.c files.h release_node.c

insert.o: insert.c files.h get_node.c
	gcc -c insert.c files.h get_node.c

print.o: print.c files.h
	gcc -c print.c files.h

search.o: search.c files.h
	gcc -c search.c files.h

get_node.o: get_node.c
	gcc -c get_node.c

release_node.o: release_node.c
	gcc -c release_node.c

debug: mainPA1.o files.h info.o init.o delete.o insert.o print.o search.o get_node.o release_node.o
	gcc -g -o mainPA1 mainPA1.c files.h info.o init.o delete.o insert.o print.o search.o get_node.o release_node.o

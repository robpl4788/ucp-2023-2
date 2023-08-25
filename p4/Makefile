CC = gcc
CFLAGS = -Wall -pedantic -ansi
OBJ = arrays.o
EXEC = prog

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

arrays.o: arrays.c arrays.h
	$(CC) -c arrays.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)
CC = gcc
CFLAGS = -Wall -pedantic -ansi
OBJ = powers.o bounds.o
EXEC = prog

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

powers.o : powers.c powers.h
	$(CC) -c powers.c $(CFLAGS)

bounds.o : bounds.c bounds.h powers.h
	$(CC) -c bounds.c $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJ)
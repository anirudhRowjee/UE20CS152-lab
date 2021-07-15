
# Makefile for a simple two-file C program
# Assumes you're running on a UNIX system with gcc
# Author: Anirudh Rowjee PES2UG20CS050

# usage :
# $ make

# To use this Makefile with no Modifications, your 
# program must be structured exactly as follows 
# (including the filenames):
#
# └── <current directory>
#     ├── main.c
#     ├── Makefile
#     ├── utils.c
#     └── utils.h

CFLAGS=-I.
CC=gcc

# define a header dependencies so that your program re-compiles when 
# the header files change
DEPS = utils.h

# define program dependencies so that your program re-compiles when
# the main files change
OBJ = main.o utils.o

# define a rule for the object files, to be cleaned up later
%.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# rule for the main files, which cleans up all dependencies
main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	$(MAKE) clean
	
# prevent make from thinking 'clean' is a file 
.PHONY: clean

# sanitization
# if you're on Windows replace the command below with
# del *.o
clean:
	rm *.o 


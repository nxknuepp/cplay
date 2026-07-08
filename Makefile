CC = gcc
CFLAGS = -g -O0 -Wall -std=gnu99
BIN = $(%)

%: %.c
	$(CC) $(CFLAGS) $< -o $@


.PHONY : all clean

clean:
	rm -f   *~
	rm -rf *.dSYM

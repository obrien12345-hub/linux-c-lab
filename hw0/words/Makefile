# Default target is 'words'
.DEFAULT_GOAL := words

CC ?= gcc
CFLAGS ?= -Wall

SOURCES = main.c word_count.c
LIBRARIES =
BINARIES = words

$(BINARIES): $(SOURCES) $(LIBRARIES)
	$(CC) $(CFLAGS) $(SOURCES) $(LIBRARIES) -o $@

clean:
	rm -f $(BINARIES) *.o


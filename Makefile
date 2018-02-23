CC=clang
SOURCES=$(wildcard *.c)
CFLAGS=-g
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

clox: $(OBJECTS)
	$(CC) $^ -o $@

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $(SOURCES)

clean:
	rm *.o clox

# MD To HTML Transpiler Build 
# Copyright 2024 Vinci

CFLAGS := -std=c99 -Wall -O3 -I ./include/
SRC := $(wildcard src/*.c)
EXEC := ./build/mdtohtml
LIBS :=
OBJECTS := $(patsubst src/%.c, build/%.o, $(SRC))

all: build $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(LIBS)

$(OBJECTS) : build/%.o : src/%.c
	$(CC) -c $< $(CFLAGS) -o $@

run: $(EXEC)
	$(EXEC)

build:
	@mkdir -p build

# TODO
test:

clean:
	rm -rf build/

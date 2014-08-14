CC=g++
CFLAGS=-c -Wall
LDFLAGS= 
MODULES=-lsfml-graphics -lsfml-window -lsfml-system
SOURCES=main.cpp loop.h loop.cpp menu.h menu.cpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=kaffe

all: $(SOURCES) $(EXECUTABLE)
		
$(EXECUTABLE): $(OBJECTS) 
		$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(MODULES)

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

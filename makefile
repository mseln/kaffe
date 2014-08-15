CC=g++
CFLAGS=-c -Wall
LDFLAGS= 
MODULES=-lsfml-graphics -lsfml-window -lsfml-system
SOURCES=main.cpp loop.hpp loop.cpp menu.hpp menu.cpp game_states.hpp
OBJECTS=$(SOURCES:.cpp=.o)
	EXECUTABLE=kaffe.app

all: $(SOURCES) $(EXECUTABLE)
		
$(EXECUTABLE): $(OBJECTS) 
		$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(MODULES)

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

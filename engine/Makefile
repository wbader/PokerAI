###############################################################################
# @brief  Makefile for engine.c
#         This will make the engine program for my Poker ai to use
#
# @file    Makefile
# @version 1.0
#
# @author Waylon Bader
#
# @see     https://www.gnu.org/software/make/manual/make.html
###############################################################################

TARGET = engine

CC     = g++
CFLAGS = -Wall -Wextra $(DEBUG_FLAGS)

all:  $(TARGET)

engine.o: engine.cpp
	$(CC) $(CFLAGS) -c engine.cpp
	
deck.o: deck.cpp deck.h
	$(CC) $(CFLAGS) -c deck.cpp

player.o: player.cpp player.h
	$(CC) $(CFLAGS) -c player.cpp
	
card.o: card.cpp card.h
	$(CC) $(CFLAGS) -c card.cpp

engine: engine.o deck.o player.o card.o
	$(CC) $(CFLAGS) -o $(TARGET) engine.o deck.o player.o card.o

debug: DEBUG_FLAGS = -g -DDEBUG
debug: clean $(TARGET)

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o

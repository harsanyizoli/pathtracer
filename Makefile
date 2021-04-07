TARGET = pathtracer
CC = g++

all:
	 $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

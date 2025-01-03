# Defines the compiler
CC = gcc

# Define flags to compiler
CFLAGS = -I./include -Wall

# executable name
TARGET = c

# source files
SRCS = ./src/main.c ./src/functions.c

# object files (compiled files)
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(TARGET)

# How to create the executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# How to complite the files .c in .o files
%.o: %.c
	$(CC) -c $< $(CFLAGS)

# Clean object files and executable
clean:
	rm -f $(OBJS) $(TARGET)


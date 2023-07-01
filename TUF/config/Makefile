# # Makefile

# # Compiler
# CXX := g++

# # Compiler flags
# CXXFLAGS := -std=c++11 -Wall -Wextra

# # Source file
# SRC := main.cpp

# # Executable name
# EXEC := myprogram

# # Input and output file names
# INPUT := input.txt
# OUTPUT := output.txt

# .PHONY: all clean

# all: $(EXEC)

# $(EXEC): $(SRC)
# 	$(CXX) $(CXXFLAGS) $< -o $@

# run: $(EXEC)
# 	./$(EXEC) < $(INPUT) > $(OUTPUT)

# clean:
# 	rm -f $(EXEC)

CC = g++
CFLAGS = -Wall -std=c++11

all: main

main: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp

.PHONY: clean run

clean:
	rm -f main

run:
	./main < input.txt > output.txt

# Compiler
CXX = /usr/local/Cellar/gcc/15.2.0/bin/g++-15
CXXFLAGS = -std=c++17 -O2 -Wall

# Source file variable (default to latest .cpp if not specified)
SRC ?= $(shell ls -t *.cpp | head -1)
TARGET = $(basename $(SRC))

# Compile the source file
build:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)
	@echo "Compiled $(SRC) → $(TARGET)"

# Compile and run with input.txt → output.txt
run: build
	@echo "Running $(TARGET) with input.txt → output.txt"
	@./$(TARGET) < input.txt > output.txt

# Clean
clean:
	rm -f $(TARGET)
	@echo "Cleaned up!"

# Help
help:
	@echo "Usage:"
	@echo "  make build SRC=filename.cpp   # Compile the given file"
	@echo "  make run SRC=filename.cpp     # Compile & run (input.txt → output.txt)"
	@echo "  make clean                    # Remove executable"
	@echo "  make help                     # Show this message"

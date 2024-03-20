CXX=g++
CXXFLAGS=-I./externals -std=c++17
LDFLAGS=-lsqlite3

# Name of your executable
TARGET=main

# Source files
SOURCES=main.cpp
# Object files
OBJECTS=$(SOURCES:.cpp=.o)

# First rule is the one executed when no parameters are fed to the Makefile
all: clean $(TARGET)

# Link the target with object files
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compile the source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule for cleaning up
clean:
	rm -f $(TARGET) $(OBJECTS)

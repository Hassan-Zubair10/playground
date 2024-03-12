CXX=g++
CXXFLAGS=-std=c++17 -Wall
TARGET=main
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -pthread

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean

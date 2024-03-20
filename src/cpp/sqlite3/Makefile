CXX=g++
CXXFLAGS=-I./externals -std=c++17

LDFLAGS=-lsqlite3

TARGET=main

SOURCES=main.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all: clean $(TARGET)


$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

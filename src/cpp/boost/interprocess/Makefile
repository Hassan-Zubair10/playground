CXX = g++

CXXFLAGS = \
	-std=c++17 \
	-Wall \
	-Wextra 

SRC_DIR = src
EXTERNALS_DIR = externals

INC_DIR = \
	-I$(EXTERNALS_DIR)/boost/inc

SLIBS = \
	-pthread

LDFLAGS = \
	-L$(EXTERNALS_DIR)/boost/lib 

SOURCES = \
	$(SRC_DIR)/main.cpp 

TARGET = bin/main

build: mkdir
	$(CXX) $(CXXFLAGS) $(INC_DIR) $(SOURCES) $(SLIBS) -o $(TARGET) $(LDFLAGS)

mkdir:
	@mkdir -p ./bin

clean:
	$(RM) -r ./bin

.PHONY: build arm64 mkdir clean

# This is the makefile for the libxml++ parser

# Project Name
PROJECT_NAME = ParserExample

# Set compiler
CXX = clang++

# libCIMParser
CIMParser = /Users/daniel/Bachelorarbeit/Git/CIM-XML-Parser/build/usr/local

# Include directories
INCDIR = \
	-I$(CIMParser)/include/CIMParser

# CXXFLAGS
CXXFLAGS = -Wall -g -DDEBUG -std=c++11 -Wno-inconsistent-missing-override \
	$(shell pkg-config --cflags libxml++-2.6)

# LDFLAGS
LDFLAGS = \
	-L$(CIMParser)/lib -lCIMParser \
	$(shell pkg-config --libs libxml++-2.6)

# Directories
PROJDIR = .

BIN = $(PROJECT_NAME)

# Build all
all: $(BIN) resource

# Clean target
.PHONY: clean
clean:
	@rm -f $(BIN)

# Combile
$(BIN): main.cpp
	@$(CXX) $(INCDIR) $(CXXFLAGS) $(LDFLAGS) -o $(BIN) $<
	@echo "Linked all objects to $@"

# Resource
resource:
	@cp -f ../src/*.csv .

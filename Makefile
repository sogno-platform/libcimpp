# This is the makefile for the redland examples

# Linux
ifeq ($(SYSTEM),linux)
	# Set Compiler
	CC = gcc++

	# Include directories
	INCDIR = \
		-I/usr/include/raptor2 \
		-I/usr/include/rasqal

	# Library directories
	LIBDIR = \
		-L/usr/lib/i386-linux-gnu
endif
# Mac OS X
ifeq ($(SYSTEM),osx)
	# Set Compiler
	CC = clang++

	# Include directories
	INCDIR = \
		-I/usr/local/include/raptor2 \
		-I/usr/local/include/rasqal \
		-I/usr/local/include/redland

	# Library directories
	LIBDIR = \
		-L/usr/local/Cellar/raptor/2.0.15/lib \
		-L/usr/local/Cellar/rasqal/0.9.33/lib \
		-L/usr/local/Cellar/redland/1.0.17_1/lib
endif

CFLAGS = -Wall -g -std=c++11
LDFLAGS = \
	-lraptor2 \
	-lrasqal \
	-lrdf

# Directories
PROJDIR = ./
SRCDIR = $(PROJDIR)/src
OBJDIR = $(PROJDIR)/obj
BINDIR = $(PROJDIR)/build

OBJ = $(OBJDIR)/main.o $(OBJDIR)/DSLModem.o $(OBJDIR)/base.o
BIN = $(BINDIR)/main

# First target which should be called to build
all: directories $(OBJ)
	$(CC) $(CFLAGS) $(INCDIR) $(LIBDIR) $(OBJ) -o $(BIN) $(LDFLAGS)

# Directories target
.PHONY: directories
directories:
	mkdir -p $(OBJDIR)
	mkdir -p $(BINDIR)

# Clean target
.PHONY: clean
clean:
	rm -rf $(OBJDIR)
	rm -rf $(BINDIR)

# Pattern rule for source
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) $(INCDIR) -c -o $@ $<

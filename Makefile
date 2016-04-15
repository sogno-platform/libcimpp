# This is the makefile for the libxml++ parser

# Linux
ifeq ($(SYSTEM),linux)
	# Set Compiler
	CC = gcc++
endif
# Mac OS X
ifeq ($(SYSTEM),osx)
	# Set Compiler
	CC = clang++

	# Include directories
	INCDIR = \
	-I/usr/local/include/libxml++-2.6 \
	-I/usr/local/lib/libxml++-2.6/include \
	-I/usr/local/include/glibmm-2.4 \
	-I/usr/local/lib/glibmm-2.4/include \
	-I/usr/local/include/glib-2.0 \
	-I/usr/local/lib/glib-2.0/include \
	-I/usr/local/include/gettext/include \
	-I/usr/local/include/sigc++-2.0 \
	-I/usr/include/libxml2 \
	-I/Users/daniel/Bachelorarbeit/Packages/GeneratedCode

	# Library directories
	LIBDIR = \
	-L/usr/local/lib \
	-L/Users/daniel/Bachelorarbeit/Packages/GeneratedCode/build
endif

CFLAGS = -Wall -Wno-inconsistent-missing-override -g -DDEBUG -std=c++11
LDFLAGS = \
	-lxml++-2.6 \
	-lxml2 \
	-lglibmm-2.4 \
	-lgobject-2.0 \
	-lglib-2.0 \
	-lsigc-2.0 \
	-lcim++_static

# Project Name
PROJECT_NAME = Cim2Obj

# Directories
PROJDIR = .
SRCDIR = $(PROJDIR)/src
OBJDIR = $(PROJDIR)/obj
BINDIR = $(PROJDIR)/build
DOCDIR = $(PROJDIR)/documentation

# Objects
OBJ = $(OBJDIR)/main.o $(OBJDIR)/task.o $(OBJDIR)/myparser.o $(OBJDIR)/CIMFactory.o $(OBJDIR)/assignments.o
BIN = $(BINDIR)/main
DOXYFILE = $(PROJDIR)/Doxyfile

# First target which should be called to build
default: directories $(BIN)

# Build all including documentation
all: directories $(BIN) documentation

# Directories target
.PHONY: directories
directories:
	@mkdir -p $(OBJDIR)
	@mkdir -p $(BINDIR)

# Clean target
.PHONY: clean
clean:
	@rm -rf $(OBJDIR)
	@rm -rf $(BINDIR)
	@rm -rf $(DOCDIR)
	@rm -f $(DOXYFILE)
	@echo Finished cleaning up

# Documentation target
documentation: $(DOCDIR)/html/index.html
$(DOCDIR)/html/index.html: $(SRCDIR)/* $(AUTOGENCODE)/* $(DOXYFILE)
	doxygen $(DOXYFILE)

# Doxyfile
$(DOXYFILE):
	@echo PROJECT_NAME = "$(PROJECT_NAME)" > $(DOXYFILE)
	@echo OUTPUT_DIRECTORY = $(DOCDIR) >> $(DOXYFILE)
	@echo INPUT = $(SRCDIR), $(AUTOGENCODE) >> $(DOXYFILE)
	@echo GENERATE_LATEX = NO >> $(DOXYFILE)
	@echo Generated Doxyfile

# Pattern rule for source
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) $(INCDIR) -c -o $@ $<
	@echo "Complied $@"

# Linking pattern
$(BIN): $(OBJ) $(AUTOGENOBJ)
	@$(CC) $(CFLAGS) $(INCDIR) $(LIBDIR) $(OBJ) $(AUTOGENOBJ) -o $(BIN) $(LDFLAGS)
	@echo "Linked all objects to $@"

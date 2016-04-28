# This is the makefile for the libxml++ parser

# Project Name
PROJECT_NAME = Cim2Obj

# Set compiler
CXX = clang++

# CIM++
CIM++ = /Users/daniel/Bachelorarbeit/Packages/GeneratedCode

# Include directories
INCDIR = \
	-I$(CIM++)

# CFLAGS
CFLAGS = -Wall -Wno-inconsistent-missing-override -g -DDEBUG -std=c++11 \
	$(shell pkg-config --cflags libxml++-2.6)

LDFLAGS = \
	-L$(CIM++)/build -lcim++ \
	$(shell pkg-config --libs libxml++-2.6)

# Directories
PROJDIR = .
SRCDIR = $(PROJDIR)/src
OBJDIR = $(PROJDIR)/obj
BINDIR = $(PROJDIR)/build
DOCDIR = $(PROJDIR)/documentation

# Objects
OBJ = $(OBJDIR)/main.o $(OBJDIR)/task.o $(OBJDIR)/myparser.o $(OBJDIR)/CIMFactory.o $(OBJDIR)/assignments.o
BIN = $(BINDIR)/$(PROJECT_NAME)
DOXYFILE = $(PROJDIR)/Doxyfile

# First target which should be called to build
default: directories $(BIN) resource

# Build all including documentation
all: directories $(BIN) documentation resource

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
$(DOCDIR)/html/index.html: $(SRCDIR)/* $(DOXYFILE)
	doxygen $(DOXYFILE)

# Doxyfile
$(DOXYFILE):
	@echo PROJECT_NAME = "$(PROJECT_NAME)" > $(DOXYFILE)
	@echo OUTPUT_DIRECTORY = $(DOCDIR) >> $(DOXYFILE)
	@echo INPUT = $(SRCDIR) >> $(DOXYFILE)
	@echo GENERATE_LATEX = NO >> $(DOXYFILE)
	@echo QUIET = YES >> $(DOXYFILE)
	@echo Generated Doxyfile

# Pattern rule for source
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CXX) $(CFLAGS) $(INCDIR) -c -o $@ $<
	@echo "Compiled $@"

# Linking pattern
$(BIN): $(OBJ)
	@$(CXX) $(OBJ) $(LDFLAGS) -o $(BIN)
	@echo "Linked all objects to $@"

# Resource
resource:
	@cp -f $(SRCDIR)/*.csv $(BINDIR)

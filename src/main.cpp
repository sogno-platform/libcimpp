#include <iostream>

#include "Integer.h"
#include "Boolean.h"

#include "myparser.h"


int main()
{
	MyParser parser;
	parser.parse_file("../../ieee14.xml");
}

#include <iostream>
#include "myparser.h"


int main()
{
	MyParser parser;
	parser.parse_file("/Users/daniel/Bachelorarbeit/danielknibbe/ieee14.xml");
	MyParser another_parser;
	another_parser.parse_file("/Users/daniel/Bachelorarbeit/CIM_Daten/Rootnet_NE_04J11h/Rootnet_FULL_NE_04J11h_EQ.xml");
}

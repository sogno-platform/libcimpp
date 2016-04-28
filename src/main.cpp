#include <iostream>
#include <fstream>
#include <chrono>
#include "myparser.h"

unsigned int filesize(const char* filename)
{
	std::ifstream in(filename, std::ifstream::ate | std::ifstream::binary);
	unsigned int size = in.tellg();
	in.close();
	return size;
}

int main()
{
	CIMParser parser;
	unsigned long file_size = filesize("/Users/daniel/Bachelorarbeit/danielknibbe/ieee14.xml");
	unsigned long secs;

	// Timer start
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	//parser.parse_file("/Users/daniel/Bachelorarbeit/danielknibbe/ieee14.xml");
	parser.parse_file("/Users/daniel/Bachelorarbeit/CIM_Daten/Rootnet_NE_04J11h/Rootnet_FULL_NE_04J11h_EQ.xml");

	// Timer stop
	stop = std::chrono::high_resolution_clock::now();
	secs = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
	std::cout << 1000*file_size/secs << "KByte/s" << std::endl;

	//CIMParser another_parser;
	//another_parser.parse_file("/Users/daniel/Bachelorarbeit/CIM_Daten/Rootnet_NE_04J11h/Rootnet_FULL_NE_04J11h_EQ.xml");
}

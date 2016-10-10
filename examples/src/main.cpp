#include <iostream>
#include <fstream>
#include <chrono>
#include "CIMParser.h"
#include "IEC61970.h"

unsigned int filesize(const char* filename)
{
	std::ifstream in(filename, std::ifstream::ate | std::ifstream::binary);
	unsigned int size = in.tellg();
	in.close();
	return size;
}

int main(int argc, char** argv)
{
	if(argc < 2)
		return 1;

	CIMParser parser;
	unsigned long file_size = filesize(argv[1]);
	unsigned long secs;

	// Timer start
	std::chrono::time_point<std::chrono::high_resolution_clock> start, stop;
	start = std::chrono::high_resolution_clock::now();

	parser.parse_file(argv[1]);
	for (BaseClass* Object : parser.Objects)
	{
		if(IEC61970::Base::Core::IdentifiedObject* IdObj = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(Object))
			std::cout << IdObj->name << std::endl;
	}

	// Timer stop
	stop = std::chrono::high_resolution_clock::now();
	secs = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
	std::cout << 1000*file_size/secs << "KByte/s" << std::endl;

	//CIMParser another_parser;
	//another_parser.parse_file("/Users/daniel/Bachelorarbeit/CIM_Daten/Rootnet_NE_04J11h/Rootnet_FULL_NE_04J11h_EQ.xml");
}

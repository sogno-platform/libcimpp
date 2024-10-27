#include <iostream>
#include <string>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		std::cout << "Usage: readwrite <cim file> [additional cim files] <outputfile>" << std::endl;
		std::cout << "Provide at least one cim file and outputfile" << std::endl;
		return 1;
	}
	std::string outputfile = argv[argc-1];

	CIMModel someModel;
	someModel.setDependencyCheckOff();

	for (int idx = 1; idx < argc-1; ++idx)
	{
		if (!someModel.addCIMFile(argv[idx]))
		{
			std::cout << "File ' " << argv[idx] << " ' is not XML or does not exist" << std::endl;
		}
	}

	try
	{
		someModel.parseFiles();
	}
	catch (std::runtime_error &exp)
	{
		std::cerr << exp.what() << std::endl;
	}

	auto classProfileMap = CIMWriter::getClassProfileMap(someModel.Objects);
	auto profileFileMap = CIMWriter::writeFiles(outputfile, someModel.Objects, outputfile, classProfileMap);
	int count = 0;
	for (const auto& profileAndFile : profileFileMap)
	{
		++count;
		std::cout << "CIM outputfile " << count << ": " << profileAndFile.second << std::endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include "CIMModel.hpp"
#include "IEC61970.hpp"
#include "CIMExceptions.hpp"

#ifndef CGMES_BUILD
#include "CIMNamespaces.hpp"
#endif

std::string formatName(std::string name) {
	if (name.length() > 12) {
		name.resize(10, ' ');
		name += "..  ";
	}
	else {
		name.resize(14, ' ');
	}
	return name;
}

int main(int argc, char** argv)
{
	if(argc < 2)
	{
		std::cout << "Usage: example <cim file> [additional cim files]" << std::endl;
		std::cout << "Provide at least one cim file" << std::endl;
		return 1;
	}

	CIMModel someModel;
	someModel.setDependencyCheckOff();

	for(int i = 1; i < argc; i++)
	{
		if(!someModel.addCIMFile(argv[i]))
		{
			std::cout << "File ' " << argv[i] << " ' is not XML or does not exist" << std::endl;
		};
	}

	try
	{
		someModel.parseFiles();
	}
	catch(std::runtime_error &exp)
	{
		std::cerr << exp.what() << std::endl;
	}


	for (BaseClass* Object : someModel.Objects)
	{
		if(CIMPP::IdentifiedObject* IdObj = dynamic_cast<CIMPP::IdentifiedObject*>(Object))
		{
			if(!IdObj->name.empty()) {
				static unsigned int i = 0;
				std::string outputName = formatName(IdObj->name);
				std::cout << outputName;
				i++;
				if (i % 5 == 0) {
					std::cout << std::endl;
				}
			}
		}
	}
	std::cout << std::endl;
	return 0;
}

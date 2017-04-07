#include <iostream>
#include "CIMModel.hpp"
#include "IEC61970.hpp"
#include "CIMExceptions.hpp"

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
		if(IEC61970::Base::Core::IdentifiedObject* IdObj = dynamic_cast<IEC61970::Base::Core::IdentifiedObject*>(Object))
		{
			if(!IdObj->name.empty())
				std::cout << IdObj->name << std::endl;
		}
	}
	return 0;
}

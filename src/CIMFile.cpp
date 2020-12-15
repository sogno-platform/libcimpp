#include "CIMFile.hpp"
#include "ModelDescription.hpp"

#include "ModelDescriptionHandler.hpp"
#include "ModelDescription.hpp"
#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>

#include <iostream>
#include <fstream>

CIMFile::CIMFile(std::string path) : path(path), modelDescription(nullptr)
{
}

std::string CIMFile::getpath()
{
	return path;
}

ModelDescription* CIMFile::getModelDescription()
{
	if(modelDescription == nullptr)
	{
		if(!this->good())
		{
			//TODO: file not good, say something
			return nullptr;
		}
		modelDescription = new ModelDescription();
		ModelDescriptionHandler* DescriptionHandler;

		DescriptionHandler->setModelDescription(modelDescription);

		xercesc::SAX2XMLReader* xmlReader = xercesc::XMLReaderFactory::createXMLReader();
		// xmlReader->setFeature(XMLUni::fgSAX2CoreValidation, true);
		// xmlReader->setFeature(XMLUni::fgSAX2CoreNameSpaces, true);   // optional

		xmlReader->setContentHandler(DescriptionHandler);
		xmlReader->setErrorHandler(DescriptionHandler);
		xmlReader->parse(path.c_str());

	}

	return modelDescription;
}

bool CIMFile::good()
{
	if(path.find(".xml") == std::string::npos)
	{
		return false;
	}

	std::ifstream infile(path);
	return infile.good();
}

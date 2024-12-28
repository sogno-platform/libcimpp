/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SteadyStateHypothesisVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "String.hpp"
#include "String.hpp"
#include "Date.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

SteadyStateHypothesisVersion::SteadyStateHypothesisVersion() {};
SteadyStateHypothesisVersion::~SteadyStateHypothesisVersion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SteadyStateHypothesisVersion.baseUML", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.baseURI", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.date", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.differenceModelURI", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.entsoeUML", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.entsoeURI", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.modelDescriptionURI", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.namespaceRDF", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.namespaceUML", { CGMESProfile::SSH, } },
	{ "cim:SteadyStateHypothesisVersion.shortName", { CGMESProfile::SSH, } },
};

std::list<CGMESProfile>
SteadyStateHypothesisVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SteadyStateHypothesisVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SteadyStateHypothesisVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->baseURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->date = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->differenceModelURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->entsoeUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->entsoeURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->modelDescriptionURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->namespaceRDF = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->namespaceUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SteadyStateHypothesisVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SteadyStateHypothesisVersion* element = dynamic_cast<SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_SteadyStateHypothesisVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->baseURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->date;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->differenceModelURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->entsoeURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->modelDescriptionURI;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->namespaceRDF;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->namespaceUML;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SteadyStateHypothesisVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SteadyStateHypothesisVersion* element = dynamic_cast<const SteadyStateHypothesisVersion*>(BaseClass_ptr1))
	{
		buffer << element->shortName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char SteadyStateHypothesisVersion::debugName[] = "SteadyStateHypothesisVersion";
const char* SteadyStateHypothesisVersion::debugString() const
{
	return SteadyStateHypothesisVersion::debugName;
}

void SteadyStateHypothesisVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion"), &SteadyStateHypothesisVersion_factory));
}

void SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseUML"), &assign_SteadyStateHypothesisVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.baseURI"), &assign_SteadyStateHypothesisVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.date"), &assign_SteadyStateHypothesisVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.differenceModelURI"), &assign_SteadyStateHypothesisVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeUML"), &assign_SteadyStateHypothesisVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.entsoeURI"), &assign_SteadyStateHypothesisVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.modelDescriptionURI"), &assign_SteadyStateHypothesisVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceRDF"), &assign_SteadyStateHypothesisVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.namespaceUML"), &assign_SteadyStateHypothesisVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:SteadyStateHypothesisVersion.shortName"), &assign_SteadyStateHypothesisVersion_shortName));
}

void SteadyStateHypothesisVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SteadyStateHypothesisVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SteadyStateHypothesisVersion.baseUML", &get_SteadyStateHypothesisVersion_baseUML);
	get_map.emplace("cim:SteadyStateHypothesisVersion.baseURI", &get_SteadyStateHypothesisVersion_baseURI);
	get_map.emplace("cim:SteadyStateHypothesisVersion.date", &get_SteadyStateHypothesisVersion_date);
	get_map.emplace("cim:SteadyStateHypothesisVersion.differenceModelURI", &get_SteadyStateHypothesisVersion_differenceModelURI);
	get_map.emplace("cim:SteadyStateHypothesisVersion.entsoeUML", &get_SteadyStateHypothesisVersion_entsoeUML);
	get_map.emplace("cim:SteadyStateHypothesisVersion.entsoeURI", &get_SteadyStateHypothesisVersion_entsoeURI);
	get_map.emplace("cim:SteadyStateHypothesisVersion.modelDescriptionURI", &get_SteadyStateHypothesisVersion_modelDescriptionURI);
	get_map.emplace("cim:SteadyStateHypothesisVersion.namespaceRDF", &get_SteadyStateHypothesisVersion_namespaceRDF);
	get_map.emplace("cim:SteadyStateHypothesisVersion.namespaceUML", &get_SteadyStateHypothesisVersion_namespaceUML);
	get_map.emplace("cim:SteadyStateHypothesisVersion.shortName", &get_SteadyStateHypothesisVersion_shortName);
}

void SteadyStateHypothesisVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void SteadyStateHypothesisVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SteadyStateHypothesisVersion::declare()
{
	return BaseClassDefiner(SteadyStateHypothesisVersion::addConstructToMap, SteadyStateHypothesisVersion::addPrimitiveAssignFnsToMap, SteadyStateHypothesisVersion::addClassAssignFnsToMap, SteadyStateHypothesisVersion::debugName);
}

namespace CIMPP
{
	BaseClass* SteadyStateHypothesisVersion_factory()
	{
		return new SteadyStateHypothesisVersion;
	}
}

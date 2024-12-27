/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DynamicsVersion.hpp"

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

DynamicsVersion::DynamicsVersion() {};
DynamicsVersion::~DynamicsVersion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DynamicsVersion.baseUML", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.baseURI", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.date", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.differenceModelURI", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.entsoeUML", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.entsoeURI", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.modelDescriptionURI", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.namespaceRDF", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.namespaceUML", { CGMESProfile::DY, } },
	{ "cim:DynamicsVersion.shortName", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DynamicsVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DynamicsVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_DynamicsVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->baseURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->date = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->differenceModelURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->entsoeUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->entsoeURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->modelDescriptionURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->namespaceRDF = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->namespaceUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DynamicsVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DynamicsVersion* element = dynamic_cast<DynamicsVersion*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_DynamicsVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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

bool get_DynamicsVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const DynamicsVersion* element = dynamic_cast<const DynamicsVersion*>(BaseClass_ptr1))
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



const char DynamicsVersion::debugName[] = "DynamicsVersion";
const char* DynamicsVersion::debugString() const
{
	return DynamicsVersion::debugName;
}

void DynamicsVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DynamicsVersion"), &DynamicsVersion_factory));
}

void DynamicsVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseUML"), &assign_DynamicsVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.baseURI"), &assign_DynamicsVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.date"), &assign_DynamicsVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.differenceModelURI"), &assign_DynamicsVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeUML"), &assign_DynamicsVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.entsoeURI"), &assign_DynamicsVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.modelDescriptionURI"), &assign_DynamicsVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceRDF"), &assign_DynamicsVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.namespaceUML"), &assign_DynamicsVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:DynamicsVersion.shortName"), &assign_DynamicsVersion_shortName));
}

void DynamicsVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DynamicsVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DynamicsVersion.baseUML", &get_DynamicsVersion_baseUML);
	get_map.emplace("cim:DynamicsVersion.baseURI", &get_DynamicsVersion_baseURI);
	get_map.emplace("cim:DynamicsVersion.date", &get_DynamicsVersion_date);
	get_map.emplace("cim:DynamicsVersion.differenceModelURI", &get_DynamicsVersion_differenceModelURI);
	get_map.emplace("cim:DynamicsVersion.entsoeUML", &get_DynamicsVersion_entsoeUML);
	get_map.emplace("cim:DynamicsVersion.entsoeURI", &get_DynamicsVersion_entsoeURI);
	get_map.emplace("cim:DynamicsVersion.modelDescriptionURI", &get_DynamicsVersion_modelDescriptionURI);
	get_map.emplace("cim:DynamicsVersion.namespaceRDF", &get_DynamicsVersion_namespaceRDF);
	get_map.emplace("cim:DynamicsVersion.namespaceUML", &get_DynamicsVersion_namespaceUML);
	get_map.emplace("cim:DynamicsVersion.shortName", &get_DynamicsVersion_shortName);
}

void DynamicsVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void DynamicsVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DynamicsVersion::declare()
{
	return BaseClassDefiner(DynamicsVersion::addConstructToMap, DynamicsVersion::addPrimitiveAssignFnsToMap, DynamicsVersion::addClassAssignFnsToMap, DynamicsVersion::debugName);
}

namespace CIMPP
{
	BaseClass* DynamicsVersion_factory()
	{
		return new DynamicsVersion;
	}
}

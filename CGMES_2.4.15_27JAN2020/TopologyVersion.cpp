/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologyVersion.hpp"

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

TopologyVersion::TopologyVersion() {};
TopologyVersion::~TopologyVersion() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TopologyVersion.baseUML", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.baseURI", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.date", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.differenceModelURI", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.entsoeUML", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.entsoeURI", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.modelDescriptionURI", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.namespaceRDF", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.namespaceUML", { CGMESProfile::TP, } },
	{ "cim:TopologyVersion.shortName", { CGMESProfile::TP, } },
};

std::list<CGMESProfile>
TopologyVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TopologyVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_TopologyVersion_baseUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->baseUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_baseURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->baseURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_date(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->date = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_differenceModelURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->differenceModelURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_entsoeUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->entsoeUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_entsoeURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->entsoeURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_modelDescriptionURI(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->modelDescriptionURI = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_namespaceRDF(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->namespaceRDF = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_namespaceUML(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->namespaceUML = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TopologyVersion_shortName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TopologyVersion* element = dynamic_cast<TopologyVersion*>(BaseClass_ptr1))
	{
		element->shortName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_TopologyVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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

bool get_TopologyVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TopologyVersion* element = dynamic_cast<const TopologyVersion*>(BaseClass_ptr1))
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



const char TopologyVersion::debugName[] = "TopologyVersion";
const char* TopologyVersion::debugString() const
{
	return TopologyVersion::debugName;
}

void TopologyVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TopologyVersion"), &TopologyVersion_factory));
}

void TopologyVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.baseUML"), &assign_TopologyVersion_baseUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.baseURI"), &assign_TopologyVersion_baseURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.date"), &assign_TopologyVersion_date));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.differenceModelURI"), &assign_TopologyVersion_differenceModelURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.entsoeUML"), &assign_TopologyVersion_entsoeUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.entsoeURI"), &assign_TopologyVersion_entsoeURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.modelDescriptionURI"), &assign_TopologyVersion_modelDescriptionURI));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.namespaceRDF"), &assign_TopologyVersion_namespaceRDF));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.namespaceUML"), &assign_TopologyVersion_namespaceUML));
	assign_map.insert(std::make_pair(std::string("cim:TopologyVersion.shortName"), &assign_TopologyVersion_shortName));
}

void TopologyVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TopologyVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TopologyVersion.baseUML", &get_TopologyVersion_baseUML);
	get_map.emplace("cim:TopologyVersion.baseURI", &get_TopologyVersion_baseURI);
	get_map.emplace("cim:TopologyVersion.date", &get_TopologyVersion_date);
	get_map.emplace("cim:TopologyVersion.differenceModelURI", &get_TopologyVersion_differenceModelURI);
	get_map.emplace("cim:TopologyVersion.entsoeUML", &get_TopologyVersion_entsoeUML);
	get_map.emplace("cim:TopologyVersion.entsoeURI", &get_TopologyVersion_entsoeURI);
	get_map.emplace("cim:TopologyVersion.modelDescriptionURI", &get_TopologyVersion_modelDescriptionURI);
	get_map.emplace("cim:TopologyVersion.namespaceRDF", &get_TopologyVersion_namespaceRDF);
	get_map.emplace("cim:TopologyVersion.namespaceUML", &get_TopologyVersion_namespaceUML);
	get_map.emplace("cim:TopologyVersion.shortName", &get_TopologyVersion_shortName);
}

void TopologyVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TopologyVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TopologyVersion::declare()
{
	return BaseClassDefiner(TopologyVersion::addConstructToMap, TopologyVersion::addPrimitiveAssignFnsToMap, TopologyVersion::addClassAssignFnsToMap, TopologyVersion::debugName);
}

namespace CIMPP
{
	BaseClass* TopologyVersion_factory()
	{
		return new TopologyVersion;
	}
}

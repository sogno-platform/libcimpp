/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiagramLayoutVersion.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DiagramLayoutVersion::DiagramLayoutVersion() {}
DiagramLayoutVersion::~DiagramLayoutVersion() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiagramLayoutVersion.baseUML", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.baseURI", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.date", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.differenceModelURI", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.entsoeUML", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.entsoeURI", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.modelDescriptionURI", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.namespaceRDF", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.namespaceUML", { CGMESProfile::DL, } },
	{ "cim:DiagramLayoutVersion.shortName", { CGMESProfile::DL, } },
};

std::list<CGMESProfile>
DiagramLayoutVersion::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiagramLayoutVersion::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DiagramLayoutVersion_baseUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_baseURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->baseURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_date(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->date = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_differenceModelURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->differenceModelURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_entsoeUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_entsoeURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->entsoeURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_modelDescriptionURI(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->modelDescriptionURI = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_namespaceRDF(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceRDF = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_namespaceUML(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->namespaceUML = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_DiagramLayoutVersion_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiagramLayoutVersion* element = dynamic_cast<DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->shortName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_DiagramLayoutVersion_baseUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_baseURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_date(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_differenceModelURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_entsoeUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_entsoeURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_modelDescriptionURI(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_namespaceRDF(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_namespaceUML(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_DiagramLayoutVersion_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiagramLayoutVersion* element = dynamic_cast<const DiagramLayoutVersion*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char DiagramLayoutVersion::debugName[] = "DiagramLayoutVersion";
const char* DiagramLayoutVersion::debugString() const
{
	return DiagramLayoutVersion::debugName;
}

void DiagramLayoutVersion::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiagramLayoutVersion", &DiagramLayoutVersion_factory);
}

void DiagramLayoutVersion::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DiagramLayoutVersion.baseUML", &assign_DiagramLayoutVersion_baseUML);
	assign_map.emplace("cim:DiagramLayoutVersion.baseURI", &assign_DiagramLayoutVersion_baseURI);
	assign_map.emplace("cim:DiagramLayoutVersion.date", &assign_DiagramLayoutVersion_date);
	assign_map.emplace("cim:DiagramLayoutVersion.differenceModelURI", &assign_DiagramLayoutVersion_differenceModelURI);
	assign_map.emplace("cim:DiagramLayoutVersion.entsoeUML", &assign_DiagramLayoutVersion_entsoeUML);
	assign_map.emplace("cim:DiagramLayoutVersion.entsoeURI", &assign_DiagramLayoutVersion_entsoeURI);
	assign_map.emplace("cim:DiagramLayoutVersion.modelDescriptionURI", &assign_DiagramLayoutVersion_modelDescriptionURI);
	assign_map.emplace("cim:DiagramLayoutVersion.namespaceRDF", &assign_DiagramLayoutVersion_namespaceRDF);
	assign_map.emplace("cim:DiagramLayoutVersion.namespaceUML", &assign_DiagramLayoutVersion_namespaceUML);
	assign_map.emplace("cim:DiagramLayoutVersion.shortName", &assign_DiagramLayoutVersion_shortName);
}

void DiagramLayoutVersion::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DiagramLayoutVersion::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DiagramLayoutVersion.baseUML", &get_DiagramLayoutVersion_baseUML);
	get_map.emplace("cim:DiagramLayoutVersion.baseURI", &get_DiagramLayoutVersion_baseURI);
	get_map.emplace("cim:DiagramLayoutVersion.date", &get_DiagramLayoutVersion_date);
	get_map.emplace("cim:DiagramLayoutVersion.differenceModelURI", &get_DiagramLayoutVersion_differenceModelURI);
	get_map.emplace("cim:DiagramLayoutVersion.entsoeUML", &get_DiagramLayoutVersion_entsoeUML);
	get_map.emplace("cim:DiagramLayoutVersion.entsoeURI", &get_DiagramLayoutVersion_entsoeURI);
	get_map.emplace("cim:DiagramLayoutVersion.modelDescriptionURI", &get_DiagramLayoutVersion_modelDescriptionURI);
	get_map.emplace("cim:DiagramLayoutVersion.namespaceRDF", &get_DiagramLayoutVersion_namespaceRDF);
	get_map.emplace("cim:DiagramLayoutVersion.namespaceUML", &get_DiagramLayoutVersion_namespaceUML);
	get_map.emplace("cim:DiagramLayoutVersion.shortName", &get_DiagramLayoutVersion_shortName);
}

void DiagramLayoutVersion::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void DiagramLayoutVersion::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiagramLayoutVersion::declare()
{
	return BaseClassDefiner(DiagramLayoutVersion::addConstructToMap, DiagramLayoutVersion::addPrimitiveAssignFnsToMap, DiagramLayoutVersion::addClassAssignFnsToMap, DiagramLayoutVersion::debugName);
}

namespace CIMPP
{
	BaseClass* DiagramLayoutVersion_factory()
	{
		return new DiagramLayoutVersion;
	}
}

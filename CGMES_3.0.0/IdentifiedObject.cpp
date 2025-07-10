/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "IdentifiedObject.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiagramObject.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		IdentifiedObject(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DL,
			CGMESProfile::DY,
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
			CGMESProfile::GL,
			CGMESProfile::OP,
			CGMESProfile::SC,
			CGMESProfile::SSH,
			CGMESProfile::SV,
			CGMESProfile::TP,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "IdentifiedObject.DiagramObjects", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, } } },
		{ "IdentifiedObject.description", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, CGMESProfile::DY, CGMESProfile::EQ, CGMESProfile::EQBD, CGMESProfile::OP, CGMESProfile::TP, } } },
		{ "IdentifiedObject.energyIdentCodeEic", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, CGMESProfile::TP, } } },
		{ "IdentifiedObject.mRID", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, CGMESProfile::DY, CGMESProfile::EQ, CGMESProfile::EQBD, CGMESProfile::GL, CGMESProfile::OP, CGMESProfile::SC, CGMESProfile::SSH, CGMESProfile::SV, CGMESProfile::TP, } } },
		{ "IdentifiedObject.name", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DL, CGMESProfile::DY, CGMESProfile::EQ, CGMESProfile::EQBD, CGMESProfile::GL, CGMESProfile::OP, CGMESProfile::SV, CGMESProfile::TP, } } },
		{ "IdentifiedObject.shortName", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

IdentifiedObject::IdentifiedObject() {}
IdentifiedObject::~IdentifiedObject() {}

const std::list<std::string>& IdentifiedObject::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& IdentifiedObject::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& IdentifiedObject::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& IdentifiedObject::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& IdentifiedObject::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& IdentifiedObject::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& IdentifiedObject::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DiagramObject_IdentifiedObject(BaseClass*, BaseClass*);
bool assign_IdentifiedObject_DiagramObjects(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	DiagramObject* element2 = dynamic_cast<DiagramObject*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DiagramObjects.begin(), element->DiagramObjects.end(), element2) == element->DiagramObjects.end())
		{
			element->DiagramObjects.push_back(element2);
			return assign_DiagramObject_IdentifiedObject(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_IdentifiedObject_description(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->description = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_IdentifiedObject_energyIdentCodeEic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->energyIdentCodeEic = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_IdentifiedObject_mRID(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->mRID = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_IdentifiedObject_name(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->name = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_IdentifiedObject_shortName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	IdentifiedObject* element = dynamic_cast<IdentifiedObject*>(BaseClass_ptr1);
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


bool get_IdentifiedObject_description(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const IdentifiedObject* element = dynamic_cast<const IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->description;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_IdentifiedObject_energyIdentCodeEic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const IdentifiedObject* element = dynamic_cast<const IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->energyIdentCodeEic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_IdentifiedObject_mRID(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const IdentifiedObject* element = dynamic_cast<const IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mRID;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_IdentifiedObject_name(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const IdentifiedObject* element = dynamic_cast<const IdentifiedObject*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->name;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_IdentifiedObject_shortName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const IdentifiedObject* element = dynamic_cast<const IdentifiedObject*>(BaseClass_ptr1);
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

const char IdentifiedObject::debugName[] = "IdentifiedObject";
const char* IdentifiedObject::debugString() const
{
	return IdentifiedObject::debugName;
}

void IdentifiedObject::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("IdentifiedObject", &IdentifiedObject_factory);
}

void IdentifiedObject::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("IdentifiedObject.description", &assign_IdentifiedObject_description);
	assign_map.emplace("IdentifiedObject.energyIdentCodeEic", &assign_IdentifiedObject_energyIdentCodeEic);
	assign_map.emplace("IdentifiedObject.mRID", &assign_IdentifiedObject_mRID);
	assign_map.emplace("IdentifiedObject.name", &assign_IdentifiedObject_name);
	assign_map.emplace("IdentifiedObject.shortName", &assign_IdentifiedObject_shortName);
}

void IdentifiedObject::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("IdentifiedObject.DiagramObjects", &assign_IdentifiedObject_DiagramObjects);
}

void IdentifiedObject::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("IdentifiedObject.description", &get_IdentifiedObject_description);
	get_map.emplace("IdentifiedObject.energyIdentCodeEic", &get_IdentifiedObject_energyIdentCodeEic);
	get_map.emplace("IdentifiedObject.mRID", &get_IdentifiedObject_mRID);
	get_map.emplace("IdentifiedObject.name", &get_IdentifiedObject_name);
	get_map.emplace("IdentifiedObject.shortName", &get_IdentifiedObject_shortName);
}

void IdentifiedObject::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void IdentifiedObject::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool IdentifiedObject::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "IdentifiedObject" &&
		dynamic_cast<IdentifiedObject*>(otherObject) != nullptr;
}

const BaseClassDefiner IdentifiedObject::declare()
{
	return BaseClassDefiner(IdentifiedObject::addConstructToMap, IdentifiedObject::addPrimitiveAssignFnsToMap, IdentifiedObject::addClassAssignFnsToMap, IdentifiedObject::debugName);
}

std::map<std::string, AttrDetails> IdentifiedObject::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* IdentifiedObject_factory()
	{
		return new IdentifiedObject;
	}
}

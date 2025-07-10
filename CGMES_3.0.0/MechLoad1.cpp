/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechLoad1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MechLoad1(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "MechLoad1.a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "MechLoad1.b", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "MechLoad1.d", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "MechLoad1.e", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

MechLoad1::MechLoad1() {}
MechLoad1::~MechLoad1() {}

const std::list<std::string>& MechLoad1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MechLoad1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MechLoad1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MechLoad1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MechLoad1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MechLoad1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MechLoad1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_MechLoad1_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MechLoad1_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MechLoad1_d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MechLoad1_e(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_MechLoad1_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MechLoad1_e(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MechLoad1* element = dynamic_cast<const MechLoad1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char MechLoad1::debugName[] = "MechLoad1";
const char* MechLoad1::debugString() const
{
	return MechLoad1::debugName;
}

void MechLoad1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MechLoad1", &MechLoad1_factory);
}

void MechLoad1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("MechLoad1.a", &assign_MechLoad1_a);
	assign_map.emplace("MechLoad1.b", &assign_MechLoad1_b);
	assign_map.emplace("MechLoad1.d", &assign_MechLoad1_d);
	assign_map.emplace("MechLoad1.e", &assign_MechLoad1_e);
}

void MechLoad1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void MechLoad1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("MechLoad1.a", &get_MechLoad1_a);
	get_map.emplace("MechLoad1.b", &get_MechLoad1_b);
	get_map.emplace("MechLoad1.d", &get_MechLoad1_d);
	get_map.emplace("MechLoad1.e", &get_MechLoad1_e);
}

void MechLoad1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MechanicalLoadDynamics::addClassGetFnsToMap(get_map);
}

void MechLoad1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MechanicalLoadDynamics::addEnumGetFnsToMap(get_map);
}

bool MechLoad1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MechLoad1" &&
		dynamic_cast<MechLoad1*>(otherObject) != nullptr;
}

const BaseClassDefiner MechLoad1::declare()
{
	return BaseClassDefiner(MechLoad1::addConstructToMap, MechLoad1::addPrimitiveAssignFnsToMap, MechLoad1::addClassAssignFnsToMap, MechLoad1::debugName);
}

std::map<std::string, AttrDetails> MechLoad1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MechanicalLoadDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MechLoad1_factory()
	{
		return new MechLoad1;
	}
}

/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArType2Common1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PFVArType2Common1(),
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
		{ "PFVArType2Common1.j", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2Common1.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2Common1.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2Common1.max", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PFVArType2Common1.ref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PFVArType2Common1::PFVArType2Common1() {}
PFVArType2Common1::~PFVArType2Common1() {}

const std::list<std::string>& PFVArType2Common1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PFVArType2Common1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PFVArType2Common1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PFVArType2Common1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PFVArType2Common1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PFVArType2Common1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PFVArType2Common1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PFVArType2Common1_j(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->j;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PFVArType2Common1_ref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PFVArType2Common1_j(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->j;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PFVArType2Common1_ref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArType2Common1* element = dynamic_cast<const PFVArType2Common1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PFVArType2Common1::debugName[] = "PFVArType2Common1";
const char* PFVArType2Common1::debugString() const
{
	return PFVArType2Common1::debugName;
}

void PFVArType2Common1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PFVArType2Common1", &PFVArType2Common1_factory);
}

void PFVArType2Common1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PFVArType2Common1.j", &assign_PFVArType2Common1_j);
	assign_map.emplace("PFVArType2Common1.ki", &assign_PFVArType2Common1_ki);
	assign_map.emplace("PFVArType2Common1.kp", &assign_PFVArType2Common1_kp);
	assign_map.emplace("PFVArType2Common1.max", &assign_PFVArType2Common1_max);
	assign_map.emplace("PFVArType2Common1.ref", &assign_PFVArType2Common1_ref);
}

void PFVArType2Common1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PFVArType2Common1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PFVArType2Common1.j", &get_PFVArType2Common1_j);
	get_map.emplace("PFVArType2Common1.ki", &get_PFVArType2Common1_ki);
	get_map.emplace("PFVArType2Common1.kp", &get_PFVArType2Common1_kp);
	get_map.emplace("PFVArType2Common1.max", &get_PFVArType2Common1_max);
	get_map.emplace("PFVArType2Common1.ref", &get_PFVArType2Common1_ref);
}

void PFVArType2Common1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArType2Common1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

bool PFVArType2Common1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PFVArType2Common1" &&
		dynamic_cast<PFVArType2Common1*>(otherObject) != nullptr;
}

const BaseClassDefiner PFVArType2Common1::declare()
{
	return BaseClassDefiner(PFVArType2Common1::addConstructToMap, PFVArType2Common1::addPrimitiveAssignFnsToMap, PFVArType2Common1::addClassAssignFnsToMap, PFVArType2Common1::debugName);
}

std::map<std::string, AttrDetails> PFVArType2Common1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PFVArControllerType2Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PFVArType2Common1_factory()
	{
		return new PFVArType2Common1;
	}
}

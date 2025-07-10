/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSTAB2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssSTAB2A(),
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
		{ "PssSTAB2A.hlim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.k4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.k5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSTAB2A.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssSTAB2A::PssSTAB2A() {}
PssSTAB2A::~PssSTAB2A() {}

const std::list<std::string>& PssSTAB2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssSTAB2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssSTAB2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssSTAB2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssSTAB2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssSTAB2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssSTAB2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssSTAB2A_hlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSTAB2A_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssSTAB2A_hlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSTAB2A_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSTAB2A* element = dynamic_cast<const PssSTAB2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssSTAB2A::debugName[] = "PssSTAB2A";
const char* PssSTAB2A::debugString() const
{
	return PssSTAB2A::debugName;
}

void PssSTAB2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssSTAB2A", &PssSTAB2A_factory);
}

void PssSTAB2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssSTAB2A.hlim", &assign_PssSTAB2A_hlim);
	assign_map.emplace("PssSTAB2A.k2", &assign_PssSTAB2A_k2);
	assign_map.emplace("PssSTAB2A.k3", &assign_PssSTAB2A_k3);
	assign_map.emplace("PssSTAB2A.k4", &assign_PssSTAB2A_k4);
	assign_map.emplace("PssSTAB2A.k5", &assign_PssSTAB2A_k5);
	assign_map.emplace("PssSTAB2A.t2", &assign_PssSTAB2A_t2);
	assign_map.emplace("PssSTAB2A.t3", &assign_PssSTAB2A_t3);
	assign_map.emplace("PssSTAB2A.t5", &assign_PssSTAB2A_t5);
}

void PssSTAB2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSTAB2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssSTAB2A.hlim", &get_PssSTAB2A_hlim);
	get_map.emplace("PssSTAB2A.k2", &get_PssSTAB2A_k2);
	get_map.emplace("PssSTAB2A.k3", &get_PssSTAB2A_k3);
	get_map.emplace("PssSTAB2A.k4", &get_PssSTAB2A_k4);
	get_map.emplace("PssSTAB2A.k5", &get_PssSTAB2A_k5);
	get_map.emplace("PssSTAB2A.t2", &get_PssSTAB2A_t2);
	get_map.emplace("PssSTAB2A.t3", &get_PssSTAB2A_t3);
	get_map.emplace("PssSTAB2A.t5", &get_PssSTAB2A_t5);
}

void PssSTAB2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSTAB2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssSTAB2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssSTAB2A" &&
		dynamic_cast<PssSTAB2A*>(otherObject) != nullptr;
}

const BaseClassDefiner PssSTAB2A::declare()
{
	return BaseClassDefiner(PssSTAB2A::addConstructToMap, PssSTAB2A::addPrimitiveAssignFnsToMap, PssSTAB2A::addClassAssignFnsToMap, PssSTAB2A::debugName);
}

std::map<std::string, AttrDetails> PssSTAB2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssSTAB2A_factory()
	{
		return new PssSTAB2A;
	}
}

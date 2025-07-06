/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssIEEE1A(),
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
		{ "PssIEEE1A.a1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.a2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.inputSignalType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE1A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssIEEE1A::PssIEEE1A() {}
PssIEEE1A::~PssIEEE1A() {}

const std::list<std::string>& PssIEEE1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssIEEE1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssIEEE1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssIEEE1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssIEEE1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssIEEE1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssIEEE1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssIEEE1A_a1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_a2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_inputSignalType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignalType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
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

bool assign_PssIEEE1A_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
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

bool assign_PssIEEE1A_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
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

bool assign_PssIEEE1A_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssIEEE1A_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_inputSignalType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignalType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
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

bool get_PssIEEE1A_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
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

bool get_PssIEEE1A_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
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

bool get_PssIEEE1A_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE1A* element = dynamic_cast<const PssIEEE1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssIEEE1A::debugName[] = "PssIEEE1A";
const char* PssIEEE1A::debugString() const
{
	return PssIEEE1A::debugName;
}

void PssIEEE1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssIEEE1A", &PssIEEE1A_factory);
}

void PssIEEE1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssIEEE1A.a1", &assign_PssIEEE1A_a1);
	assign_map.emplace("PssIEEE1A.a2", &assign_PssIEEE1A_a2);
	assign_map.emplace("PssIEEE1A.inputSignalType", &assign_PssIEEE1A_inputSignalType);
	assign_map.emplace("PssIEEE1A.ks", &assign_PssIEEE1A_ks);
	assign_map.emplace("PssIEEE1A.t1", &assign_PssIEEE1A_t1);
	assign_map.emplace("PssIEEE1A.t2", &assign_PssIEEE1A_t2);
	assign_map.emplace("PssIEEE1A.t3", &assign_PssIEEE1A_t3);
	assign_map.emplace("PssIEEE1A.t4", &assign_PssIEEE1A_t4);
	assign_map.emplace("PssIEEE1A.t5", &assign_PssIEEE1A_t5);
	assign_map.emplace("PssIEEE1A.t6", &assign_PssIEEE1A_t6);
	assign_map.emplace("PssIEEE1A.vrmax", &assign_PssIEEE1A_vrmax);
	assign_map.emplace("PssIEEE1A.vrmin", &assign_PssIEEE1A_vrmin);
}

void PssIEEE1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssIEEE1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssIEEE1A.a1", &get_PssIEEE1A_a1);
	get_map.emplace("PssIEEE1A.a2", &get_PssIEEE1A_a2);
	get_map.emplace("PssIEEE1A.ks", &get_PssIEEE1A_ks);
	get_map.emplace("PssIEEE1A.t1", &get_PssIEEE1A_t1);
	get_map.emplace("PssIEEE1A.t2", &get_PssIEEE1A_t2);
	get_map.emplace("PssIEEE1A.t3", &get_PssIEEE1A_t3);
	get_map.emplace("PssIEEE1A.t4", &get_PssIEEE1A_t4);
	get_map.emplace("PssIEEE1A.t5", &get_PssIEEE1A_t5);
	get_map.emplace("PssIEEE1A.t6", &get_PssIEEE1A_t6);
	get_map.emplace("PssIEEE1A.vrmax", &get_PssIEEE1A_vrmax);
	get_map.emplace("PssIEEE1A.vrmin", &get_PssIEEE1A_vrmin);
}

void PssIEEE1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssIEEE1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("PssIEEE1A.inputSignalType", &get_PssIEEE1A_inputSignalType);
}

bool PssIEEE1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssIEEE1A" &&
		dynamic_cast<PssIEEE1A*>(otherObject) != nullptr;
}

const BaseClassDefiner PssIEEE1A::declare()
{
	return BaseClassDefiner(PssIEEE1A::addConstructToMap, PssIEEE1A::addPrimitiveAssignFnsToMap, PssIEEE1A::addClassAssignFnsToMap, PssIEEE1A::debugName);
}

std::map<std::string, AttrDetails> PssIEEE1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssIEEE1A_factory()
	{
		return new PssIEEE1A;
	}
}

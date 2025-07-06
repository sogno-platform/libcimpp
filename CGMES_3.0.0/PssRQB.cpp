/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssRQB.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssRQB(),
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
		{ "PssRQB.kdpm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.ki2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.ki3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.ki4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.sibv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.t4f", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.t4m", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.t4mom", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.tomd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssRQB.tomsl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssRQB::PssRQB() {}
PssRQB::~PssRQB() {}

const std::list<std::string>& PssRQB::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssRQB::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssRQB::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssRQB::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssRQB::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssRQB::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssRQB::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssRQB_kdpm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdpm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_ki4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_sibv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sibv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4f(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4f;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_t4mom(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4mom;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_tomd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssRQB_tomsl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomsl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssRQB_kdpm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdpm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_ki4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_sibv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sibv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_t4f(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4f;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_t4m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_t4mom(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4mom;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_tomd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssRQB_tomsl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssRQB* element = dynamic_cast<const PssRQB*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomsl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssRQB::debugName[] = "PssRQB";
const char* PssRQB::debugString() const
{
	return PssRQB::debugName;
}

void PssRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssRQB", &PssRQB_factory);
}

void PssRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssRQB.kdpm", &assign_PssRQB_kdpm);
	assign_map.emplace("PssRQB.ki2", &assign_PssRQB_ki2);
	assign_map.emplace("PssRQB.ki3", &assign_PssRQB_ki3);
	assign_map.emplace("PssRQB.ki4", &assign_PssRQB_ki4);
	assign_map.emplace("PssRQB.sibv", &assign_PssRQB_sibv);
	assign_map.emplace("PssRQB.t4f", &assign_PssRQB_t4f);
	assign_map.emplace("PssRQB.t4m", &assign_PssRQB_t4m);
	assign_map.emplace("PssRQB.t4mom", &assign_PssRQB_t4mom);
	assign_map.emplace("PssRQB.tomd", &assign_PssRQB_tomd);
	assign_map.emplace("PssRQB.tomsl", &assign_PssRQB_tomsl);
}

void PssRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssRQB::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssRQB.kdpm", &get_PssRQB_kdpm);
	get_map.emplace("PssRQB.ki2", &get_PssRQB_ki2);
	get_map.emplace("PssRQB.ki3", &get_PssRQB_ki3);
	get_map.emplace("PssRQB.ki4", &get_PssRQB_ki4);
	get_map.emplace("PssRQB.sibv", &get_PssRQB_sibv);
	get_map.emplace("PssRQB.t4f", &get_PssRQB_t4f);
	get_map.emplace("PssRQB.t4m", &get_PssRQB_t4m);
	get_map.emplace("PssRQB.t4mom", &get_PssRQB_t4mom);
	get_map.emplace("PssRQB.tomd", &get_PssRQB_tomd);
	get_map.emplace("PssRQB.tomsl", &get_PssRQB_tomsl);
}

void PssRQB::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssRQB::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssRQB::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssRQB" &&
		dynamic_cast<PssRQB*>(otherObject) != nullptr;
}

const BaseClassDefiner PssRQB::declare()
{
	return BaseClassDefiner(PssRQB::addConstructToMap, PssRQB::addPrimitiveAssignFnsToMap, PssRQB::addClassAssignFnsToMap, PssRQB::debugName);
}

std::map<std::string, AttrDetails> PssRQB::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssRQB_factory()
	{
		return new PssRQB;
	}
}

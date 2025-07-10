/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineEquivalentCircuit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineEquivalentCircuit(),
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
		{ "SynchronousMachineEquivalentCircuit.r1d", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.r1q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.r2q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.rfd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.x1d", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.x1q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.x2q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.xad", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.xaq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.xf1d", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineEquivalentCircuit.xfd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

SynchronousMachineEquivalentCircuit::SynchronousMachineEquivalentCircuit() {}
SynchronousMachineEquivalentCircuit::~SynchronousMachineEquivalentCircuit() {}

const std::list<std::string>& SynchronousMachineEquivalentCircuit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineEquivalentCircuit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineEquivalentCircuit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineEquivalentCircuit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineEquivalentCircuit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineEquivalentCircuit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineEquivalentCircuit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SynchronousMachineEquivalentCircuit_r1d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r1d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r1q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r1q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_r2q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r2q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_rfd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rfd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x1d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x1q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x1q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_x2q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x2q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xad(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xad;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xaq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xaq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xf1d(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xf1d;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineEquivalentCircuit_xfd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineEquivalentCircuit* element = dynamic_cast<SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xfd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_r1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_r1q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r1q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_r2q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r2q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_rfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x1q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x1q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_x2q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x2q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xad(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xad;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xaq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xaq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xf1d(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xf1d;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineEquivalentCircuit_xfd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineEquivalentCircuit* element = dynamic_cast<const SynchronousMachineEquivalentCircuit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xfd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SynchronousMachineEquivalentCircuit::debugName[] = "SynchronousMachineEquivalentCircuit";
const char* SynchronousMachineEquivalentCircuit::debugString() const
{
	return SynchronousMachineEquivalentCircuit::debugName;
}

void SynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineEquivalentCircuit", &SynchronousMachineEquivalentCircuit_factory);
}

void SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineEquivalentCircuit.r1d", &assign_SynchronousMachineEquivalentCircuit_r1d);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.r1q", &assign_SynchronousMachineEquivalentCircuit_r1q);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.r2q", &assign_SynchronousMachineEquivalentCircuit_r2q);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.rfd", &assign_SynchronousMachineEquivalentCircuit_rfd);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.x1d", &assign_SynchronousMachineEquivalentCircuit_x1d);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.x1q", &assign_SynchronousMachineEquivalentCircuit_x1q);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.x2q", &assign_SynchronousMachineEquivalentCircuit_x2q);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.xad", &assign_SynchronousMachineEquivalentCircuit_xad);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.xaq", &assign_SynchronousMachineEquivalentCircuit_xaq);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.xf1d", &assign_SynchronousMachineEquivalentCircuit_xf1d);
	assign_map.emplace("SynchronousMachineEquivalentCircuit.xfd", &assign_SynchronousMachineEquivalentCircuit_xfd);
}

void SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineEquivalentCircuit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineEquivalentCircuit.r1d", &get_SynchronousMachineEquivalentCircuit_r1d);
	get_map.emplace("SynchronousMachineEquivalentCircuit.r1q", &get_SynchronousMachineEquivalentCircuit_r1q);
	get_map.emplace("SynchronousMachineEquivalentCircuit.r2q", &get_SynchronousMachineEquivalentCircuit_r2q);
	get_map.emplace("SynchronousMachineEquivalentCircuit.rfd", &get_SynchronousMachineEquivalentCircuit_rfd);
	get_map.emplace("SynchronousMachineEquivalentCircuit.x1d", &get_SynchronousMachineEquivalentCircuit_x1d);
	get_map.emplace("SynchronousMachineEquivalentCircuit.x1q", &get_SynchronousMachineEquivalentCircuit_x1q);
	get_map.emplace("SynchronousMachineEquivalentCircuit.x2q", &get_SynchronousMachineEquivalentCircuit_x2q);
	get_map.emplace("SynchronousMachineEquivalentCircuit.xad", &get_SynchronousMachineEquivalentCircuit_xad);
	get_map.emplace("SynchronousMachineEquivalentCircuit.xaq", &get_SynchronousMachineEquivalentCircuit_xaq);
	get_map.emplace("SynchronousMachineEquivalentCircuit.xf1d", &get_SynchronousMachineEquivalentCircuit_xf1d);
	get_map.emplace("SynchronousMachineEquivalentCircuit.xfd", &get_SynchronousMachineEquivalentCircuit_xfd);
}

void SynchronousMachineEquivalentCircuit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDetailed::addClassGetFnsToMap(get_map);
}

void SynchronousMachineEquivalentCircuit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addEnumGetFnsToMap(get_map);
}

bool SynchronousMachineEquivalentCircuit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineEquivalentCircuit" &&
		dynamic_cast<SynchronousMachineEquivalentCircuit*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(SynchronousMachineEquivalentCircuit::addConstructToMap, SynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, SynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, SynchronousMachineEquivalentCircuit::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineEquivalentCircuit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SynchronousMachineDetailed::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineEquivalentCircuit_factory()
	{
		return new SynchronousMachineEquivalentCircuit;
	}
}

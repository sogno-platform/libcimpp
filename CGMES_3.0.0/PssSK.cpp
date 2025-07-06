/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSK.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssSK(),
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
		{ "PssSK.k1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.vsmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSK.vsmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssSK::PssSK() {}
PssSK::~PssSK() {}

const std::list<std::string>& PssSK::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssSK::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssSK::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssSK::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssSK::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssSK::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssSK::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssSK_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSK_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
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

bool assign_PssSK_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSK_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssSK_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSK_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
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

bool get_PssSK_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSK_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSK* element = dynamic_cast<const PssSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssSK::debugName[] = "PssSK";
const char* PssSK::debugString() const
{
	return PssSK::debugName;
}

void PssSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssSK", &PssSK_factory);
}

void PssSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssSK.k1", &assign_PssSK_k1);
	assign_map.emplace("PssSK.k2", &assign_PssSK_k2);
	assign_map.emplace("PssSK.k3", &assign_PssSK_k3);
	assign_map.emplace("PssSK.t1", &assign_PssSK_t1);
	assign_map.emplace("PssSK.t2", &assign_PssSK_t2);
	assign_map.emplace("PssSK.t3", &assign_PssSK_t3);
	assign_map.emplace("PssSK.t4", &assign_PssSK_t4);
	assign_map.emplace("PssSK.t5", &assign_PssSK_t5);
	assign_map.emplace("PssSK.t6", &assign_PssSK_t6);
	assign_map.emplace("PssSK.vsmax", &assign_PssSK_vsmax);
	assign_map.emplace("PssSK.vsmin", &assign_PssSK_vsmin);
}

void PssSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSK::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssSK.k1", &get_PssSK_k1);
	get_map.emplace("PssSK.k2", &get_PssSK_k2);
	get_map.emplace("PssSK.k3", &get_PssSK_k3);
	get_map.emplace("PssSK.t1", &get_PssSK_t1);
	get_map.emplace("PssSK.t2", &get_PssSK_t2);
	get_map.emplace("PssSK.t3", &get_PssSK_t3);
	get_map.emplace("PssSK.t4", &get_PssSK_t4);
	get_map.emplace("PssSK.t5", &get_PssSK_t5);
	get_map.emplace("PssSK.t6", &get_PssSK_t6);
	get_map.emplace("PssSK.vsmax", &get_PssSK_vsmax);
	get_map.emplace("PssSK.vsmin", &get_PssSK_vsmin);
}

void PssSK::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSK::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssSK::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssSK" &&
		dynamic_cast<PssSK*>(otherObject) != nullptr;
}

const BaseClassDefiner PssSK::declare()
{
	return BaseClassDefiner(PssSK::addConstructToMap, PssSK::addPrimitiveAssignFnsToMap, PssSK::addClassAssignFnsToMap, PssSK::debugName);
}

std::map<std::string, AttrDetails> PssSK::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssSK_factory()
	{
		return new PssSK;
	}
}

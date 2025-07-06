/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSH.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssSH(),
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
		{ "PssSH.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.k0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.k1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.k4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.td", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.vsmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssSH.vsmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssSH::PssSH() {}
PssSH::~PssSH() {}

const std::list<std::string>& PssSH::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssSH::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssSH::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssSH::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssSH::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssSH::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssSH::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssSH_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSH_k0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSH_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssSH_vsmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool assign_PssSH_vsmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssSH_vsmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

bool get_PssSH_vsmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssSH* element = dynamic_cast<const PssSH*>(BaseClass_ptr1);
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

const char PssSH::debugName[] = "PssSH";
const char* PssSH::debugString() const
{
	return PssSH::debugName;
}

void PssSH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssSH", &PssSH_factory);
}

void PssSH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssSH.k", &assign_PssSH_k);
	assign_map.emplace("PssSH.k0", &assign_PssSH_k0);
	assign_map.emplace("PssSH.k1", &assign_PssSH_k1);
	assign_map.emplace("PssSH.k2", &assign_PssSH_k2);
	assign_map.emplace("PssSH.k3", &assign_PssSH_k3);
	assign_map.emplace("PssSH.k4", &assign_PssSH_k4);
	assign_map.emplace("PssSH.t1", &assign_PssSH_t1);
	assign_map.emplace("PssSH.t2", &assign_PssSH_t2);
	assign_map.emplace("PssSH.t3", &assign_PssSH_t3);
	assign_map.emplace("PssSH.t4", &assign_PssSH_t4);
	assign_map.emplace("PssSH.td", &assign_PssSH_td);
	assign_map.emplace("PssSH.vsmax", &assign_PssSH_vsmax);
	assign_map.emplace("PssSH.vsmin", &assign_PssSH_vsmin);
}

void PssSH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssSH::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssSH.k", &get_PssSH_k);
	get_map.emplace("PssSH.k0", &get_PssSH_k0);
	get_map.emplace("PssSH.k1", &get_PssSH_k1);
	get_map.emplace("PssSH.k2", &get_PssSH_k2);
	get_map.emplace("PssSH.k3", &get_PssSH_k3);
	get_map.emplace("PssSH.k4", &get_PssSH_k4);
	get_map.emplace("PssSH.t1", &get_PssSH_t1);
	get_map.emplace("PssSH.t2", &get_PssSH_t2);
	get_map.emplace("PssSH.t3", &get_PssSH_t3);
	get_map.emplace("PssSH.t4", &get_PssSH_t4);
	get_map.emplace("PssSH.td", &get_PssSH_td);
	get_map.emplace("PssSH.vsmax", &get_PssSH_vsmax);
	get_map.emplace("PssSH.vsmin", &get_PssSH_vsmin);
}

void PssSH::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssSH::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssSH::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssSH" &&
		dynamic_cast<PssSH*>(otherObject) != nullptr;
}

const BaseClassDefiner PssSH::declare()
{
	return BaseClassDefiner(PssSH::addConstructToMap, PssSH::addPrimitiveAssignFnsToMap, PssSH::addClassAssignFnsToMap, PssSH::debugName);
}

std::map<std::string, AttrDetails> PssSH::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssSH_factory()
	{
		return new PssSH;
	}
}

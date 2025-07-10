/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEDC3A(),
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
		{ "ExcIEEEDC3A.efd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.efd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.exclim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.kv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.seefd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.seefd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.trh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC3A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEDC3A::ExcIEEEDC3A() {}
ExcIEEEDC3A::~ExcIEEEDC3A() {}

const std::list<std::string>& ExcIEEEDC3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEDC3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEDC3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEDC3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEDC3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEDC3A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exclim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_kv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_trh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC3A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC3A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC3A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exclim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_kv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_trh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->trh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC3A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC3A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC3A* element = dynamic_cast<const ExcIEEEDC3A*>(BaseClass_ptr1);
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

const char ExcIEEEDC3A::debugName[] = "ExcIEEEDC3A";
const char* ExcIEEEDC3A::debugString() const
{
	return ExcIEEEDC3A::debugName;
}

void ExcIEEEDC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEDC3A", &ExcIEEEDC3A_factory);
}

void ExcIEEEDC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEDC3A.efd1", &assign_ExcIEEEDC3A_efd1);
	assign_map.emplace("ExcIEEEDC3A.efd2", &assign_ExcIEEEDC3A_efd2);
	assign_map.emplace("ExcIEEEDC3A.exclim", &assign_ExcIEEEDC3A_exclim);
	assign_map.emplace("ExcIEEEDC3A.ke", &assign_ExcIEEEDC3A_ke);
	assign_map.emplace("ExcIEEEDC3A.kv", &assign_ExcIEEEDC3A_kv);
	assign_map.emplace("ExcIEEEDC3A.seefd1", &assign_ExcIEEEDC3A_seefd1);
	assign_map.emplace("ExcIEEEDC3A.seefd2", &assign_ExcIEEEDC3A_seefd2);
	assign_map.emplace("ExcIEEEDC3A.te", &assign_ExcIEEEDC3A_te);
	assign_map.emplace("ExcIEEEDC3A.trh", &assign_ExcIEEEDC3A_trh);
	assign_map.emplace("ExcIEEEDC3A.vrmax", &assign_ExcIEEEDC3A_vrmax);
	assign_map.emplace("ExcIEEEDC3A.vrmin", &assign_ExcIEEEDC3A_vrmin);
}

void ExcIEEEDC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEDC3A.efd1", &get_ExcIEEEDC3A_efd1);
	get_map.emplace("ExcIEEEDC3A.efd2", &get_ExcIEEEDC3A_efd2);
	get_map.emplace("ExcIEEEDC3A.exclim", &get_ExcIEEEDC3A_exclim);
	get_map.emplace("ExcIEEEDC3A.ke", &get_ExcIEEEDC3A_ke);
	get_map.emplace("ExcIEEEDC3A.kv", &get_ExcIEEEDC3A_kv);
	get_map.emplace("ExcIEEEDC3A.seefd1", &get_ExcIEEEDC3A_seefd1);
	get_map.emplace("ExcIEEEDC3A.seefd2", &get_ExcIEEEDC3A_seefd2);
	get_map.emplace("ExcIEEEDC3A.te", &get_ExcIEEEDC3A_te);
	get_map.emplace("ExcIEEEDC3A.trh", &get_ExcIEEEDC3A_trh);
	get_map.emplace("ExcIEEEDC3A.vrmax", &get_ExcIEEEDC3A_vrmax);
	get_map.emplace("ExcIEEEDC3A.vrmin", &get_ExcIEEEDC3A_vrmin);
}

void ExcIEEEDC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEDC3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEDC3A" &&
		dynamic_cast<ExcIEEEDC3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEDC3A::declare()
{
	return BaseClassDefiner(ExcIEEEDC3A::addConstructToMap, ExcIEEEDC3A::addPrimitiveAssignFnsToMap, ExcIEEEDC3A::addClassAssignFnsToMap, ExcIEEEDC3A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEDC3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC3A_factory()
	{
		return new ExcIEEEDC3A;
	}
}

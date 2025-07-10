/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEDC1A(),
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
		{ "ExcIEEEDC1A.efd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.efd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.exclim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.seefd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.seefd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.uelin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC1A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEDC1A::ExcIEEEDC1A() {}
ExcIEEEDC1A::~ExcIEEEDC1A() {}

const std::list<std::string>& ExcIEEEDC1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEDC1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEDC1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEDC1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEDC1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEDC1A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC1A* element = dynamic_cast<const ExcIEEEDC1A*>(BaseClass_ptr1);
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

const char ExcIEEEDC1A::debugName[] = "ExcIEEEDC1A";
const char* ExcIEEEDC1A::debugString() const
{
	return ExcIEEEDC1A::debugName;
}

void ExcIEEEDC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEDC1A", &ExcIEEEDC1A_factory);
}

void ExcIEEEDC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEDC1A.efd1", &assign_ExcIEEEDC1A_efd1);
	assign_map.emplace("ExcIEEEDC1A.efd2", &assign_ExcIEEEDC1A_efd2);
	assign_map.emplace("ExcIEEEDC1A.exclim", &assign_ExcIEEEDC1A_exclim);
	assign_map.emplace("ExcIEEEDC1A.ka", &assign_ExcIEEEDC1A_ka);
	assign_map.emplace("ExcIEEEDC1A.ke", &assign_ExcIEEEDC1A_ke);
	assign_map.emplace("ExcIEEEDC1A.kf", &assign_ExcIEEEDC1A_kf);
	assign_map.emplace("ExcIEEEDC1A.seefd1", &assign_ExcIEEEDC1A_seefd1);
	assign_map.emplace("ExcIEEEDC1A.seefd2", &assign_ExcIEEEDC1A_seefd2);
	assign_map.emplace("ExcIEEEDC1A.ta", &assign_ExcIEEEDC1A_ta);
	assign_map.emplace("ExcIEEEDC1A.tb", &assign_ExcIEEEDC1A_tb);
	assign_map.emplace("ExcIEEEDC1A.tc", &assign_ExcIEEEDC1A_tc);
	assign_map.emplace("ExcIEEEDC1A.te", &assign_ExcIEEEDC1A_te);
	assign_map.emplace("ExcIEEEDC1A.tf", &assign_ExcIEEEDC1A_tf);
	assign_map.emplace("ExcIEEEDC1A.uelin", &assign_ExcIEEEDC1A_uelin);
	assign_map.emplace("ExcIEEEDC1A.vrmax", &assign_ExcIEEEDC1A_vrmax);
	assign_map.emplace("ExcIEEEDC1A.vrmin", &assign_ExcIEEEDC1A_vrmin);
}

void ExcIEEEDC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEDC1A.efd1", &get_ExcIEEEDC1A_efd1);
	get_map.emplace("ExcIEEEDC1A.efd2", &get_ExcIEEEDC1A_efd2);
	get_map.emplace("ExcIEEEDC1A.exclim", &get_ExcIEEEDC1A_exclim);
	get_map.emplace("ExcIEEEDC1A.ka", &get_ExcIEEEDC1A_ka);
	get_map.emplace("ExcIEEEDC1A.ke", &get_ExcIEEEDC1A_ke);
	get_map.emplace("ExcIEEEDC1A.kf", &get_ExcIEEEDC1A_kf);
	get_map.emplace("ExcIEEEDC1A.seefd1", &get_ExcIEEEDC1A_seefd1);
	get_map.emplace("ExcIEEEDC1A.seefd2", &get_ExcIEEEDC1A_seefd2);
	get_map.emplace("ExcIEEEDC1A.ta", &get_ExcIEEEDC1A_ta);
	get_map.emplace("ExcIEEEDC1A.tb", &get_ExcIEEEDC1A_tb);
	get_map.emplace("ExcIEEEDC1A.tc", &get_ExcIEEEDC1A_tc);
	get_map.emplace("ExcIEEEDC1A.te", &get_ExcIEEEDC1A_te);
	get_map.emplace("ExcIEEEDC1A.tf", &get_ExcIEEEDC1A_tf);
	get_map.emplace("ExcIEEEDC1A.uelin", &get_ExcIEEEDC1A_uelin);
	get_map.emplace("ExcIEEEDC1A.vrmax", &get_ExcIEEEDC1A_vrmax);
	get_map.emplace("ExcIEEEDC1A.vrmin", &get_ExcIEEEDC1A_vrmin);
}

void ExcIEEEDC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEDC1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEDC1A" &&
		dynamic_cast<ExcIEEEDC1A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEDC1A::declare()
{
	return BaseClassDefiner(ExcIEEEDC1A::addConstructToMap, ExcIEEEDC1A::addPrimitiveAssignFnsToMap, ExcIEEEDC1A::addClassAssignFnsToMap, ExcIEEEDC1A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEDC1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC1A_factory()
	{
		return new ExcIEEEDC1A;
	}
}

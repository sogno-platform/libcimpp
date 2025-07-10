/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEDC2A(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "ExcIEEEDC2A.efd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.efd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.exclim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.seefd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.seefd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.uelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEDC2A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEDC2A::ExcIEEEDC2A() {}
ExcIEEEDC2A::~ExcIEEEDC2A() {}

const std::list<std::string>& ExcIEEEDC2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEDC2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEDC2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEDC2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEDC2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEDC2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEDC2A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEDC2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEDC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC2A* element = dynamic_cast<const ExcIEEEDC2A*>(BaseClass_ptr1);
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

const char ExcIEEEDC2A::debugName[] = "ExcIEEEDC2A";
const char* ExcIEEEDC2A::debugString() const
{
	return ExcIEEEDC2A::debugName;
}

void ExcIEEEDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEDC2A", &ExcIEEEDC2A_factory);
}

void ExcIEEEDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEDC2A.efd1", &assign_ExcIEEEDC2A_efd1);
	assign_map.emplace("ExcIEEEDC2A.efd2", &assign_ExcIEEEDC2A_efd2);
	assign_map.emplace("ExcIEEEDC2A.exclim", &assign_ExcIEEEDC2A_exclim);
	assign_map.emplace("ExcIEEEDC2A.ka", &assign_ExcIEEEDC2A_ka);
	assign_map.emplace("ExcIEEEDC2A.ke", &assign_ExcIEEEDC2A_ke);
	assign_map.emplace("ExcIEEEDC2A.kf", &assign_ExcIEEEDC2A_kf);
	assign_map.emplace("ExcIEEEDC2A.seefd1", &assign_ExcIEEEDC2A_seefd1);
	assign_map.emplace("ExcIEEEDC2A.seefd2", &assign_ExcIEEEDC2A_seefd2);
	assign_map.emplace("ExcIEEEDC2A.ta", &assign_ExcIEEEDC2A_ta);
	assign_map.emplace("ExcIEEEDC2A.tb", &assign_ExcIEEEDC2A_tb);
	assign_map.emplace("ExcIEEEDC2A.tc", &assign_ExcIEEEDC2A_tc);
	assign_map.emplace("ExcIEEEDC2A.te", &assign_ExcIEEEDC2A_te);
	assign_map.emplace("ExcIEEEDC2A.tf", &assign_ExcIEEEDC2A_tf);
	assign_map.emplace("ExcIEEEDC2A.uelin", &assign_ExcIEEEDC2A_uelin);
	assign_map.emplace("ExcIEEEDC2A.vrmax", &assign_ExcIEEEDC2A_vrmax);
	assign_map.emplace("ExcIEEEDC2A.vrmin", &assign_ExcIEEEDC2A_vrmin);
}

void ExcIEEEDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEDC2A.efd1", &get_ExcIEEEDC2A_efd1);
	get_map.emplace("ExcIEEEDC2A.efd2", &get_ExcIEEEDC2A_efd2);
	get_map.emplace("ExcIEEEDC2A.exclim", &get_ExcIEEEDC2A_exclim);
	get_map.emplace("ExcIEEEDC2A.ka", &get_ExcIEEEDC2A_ka);
	get_map.emplace("ExcIEEEDC2A.ke", &get_ExcIEEEDC2A_ke);
	get_map.emplace("ExcIEEEDC2A.kf", &get_ExcIEEEDC2A_kf);
	get_map.emplace("ExcIEEEDC2A.seefd1", &get_ExcIEEEDC2A_seefd1);
	get_map.emplace("ExcIEEEDC2A.seefd2", &get_ExcIEEEDC2A_seefd2);
	get_map.emplace("ExcIEEEDC2A.ta", &get_ExcIEEEDC2A_ta);
	get_map.emplace("ExcIEEEDC2A.tb", &get_ExcIEEEDC2A_tb);
	get_map.emplace("ExcIEEEDC2A.tc", &get_ExcIEEEDC2A_tc);
	get_map.emplace("ExcIEEEDC2A.te", &get_ExcIEEEDC2A_te);
	get_map.emplace("ExcIEEEDC2A.tf", &get_ExcIEEEDC2A_tf);
	get_map.emplace("ExcIEEEDC2A.uelin", &get_ExcIEEEDC2A_uelin);
	get_map.emplace("ExcIEEEDC2A.vrmax", &get_ExcIEEEDC2A_vrmax);
	get_map.emplace("ExcIEEEDC2A.vrmin", &get_ExcIEEEDC2A_vrmin);
}

void ExcIEEEDC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEDC2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEDC2A" &&
		dynamic_cast<ExcIEEEDC2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEDC2A::declare()
{
	return BaseClassDefiner(ExcIEEEDC2A::addConstructToMap, ExcIEEEDC2A::addPrimitiveAssignFnsToMap, ExcIEEEDC2A::addClassAssignFnsToMap, ExcIEEEDC2A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEDC2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC2A_factory()
	{
		return new ExcIEEEDC2A;
	}
}

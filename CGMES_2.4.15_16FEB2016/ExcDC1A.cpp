/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcDC1A(),
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
		{ "ExcDC1A.edfmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.efd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.efd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.efdmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.exclim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.seefd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.seefd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC1A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcDC1A::ExcDC1A() {}
ExcDC1A::~ExcDC1A() {}

const std::list<std::string>& ExcDC1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcDC1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcDC1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcDC1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcDC1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcDC1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcDC1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcDC1A_edfmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->edfmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC1A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC1A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool assign_ExcDC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC1A* element = dynamic_cast<ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_edfmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->edfmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC1A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC1A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

bool get_ExcDC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC1A* element = dynamic_cast<const ExcDC1A*>(BaseClass_ptr1);
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

const char ExcDC1A::debugName[] = "ExcDC1A";
const char* ExcDC1A::debugString() const
{
	return ExcDC1A::debugName;
}

void ExcDC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcDC1A", &ExcDC1A_factory);
}

void ExcDC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcDC1A.edfmax", &assign_ExcDC1A_edfmax);
	assign_map.emplace("ExcDC1A.efd1", &assign_ExcDC1A_efd1);
	assign_map.emplace("ExcDC1A.efd2", &assign_ExcDC1A_efd2);
	assign_map.emplace("ExcDC1A.efdmin", &assign_ExcDC1A_efdmin);
	assign_map.emplace("ExcDC1A.exclim", &assign_ExcDC1A_exclim);
	assign_map.emplace("ExcDC1A.ka", &assign_ExcDC1A_ka);
	assign_map.emplace("ExcDC1A.ke", &assign_ExcDC1A_ke);
	assign_map.emplace("ExcDC1A.kf", &assign_ExcDC1A_kf);
	assign_map.emplace("ExcDC1A.ks", &assign_ExcDC1A_ks);
	assign_map.emplace("ExcDC1A.seefd1", &assign_ExcDC1A_seefd1);
	assign_map.emplace("ExcDC1A.seefd2", &assign_ExcDC1A_seefd2);
	assign_map.emplace("ExcDC1A.ta", &assign_ExcDC1A_ta);
	assign_map.emplace("ExcDC1A.tb", &assign_ExcDC1A_tb);
	assign_map.emplace("ExcDC1A.tc", &assign_ExcDC1A_tc);
	assign_map.emplace("ExcDC1A.te", &assign_ExcDC1A_te);
	assign_map.emplace("ExcDC1A.tf", &assign_ExcDC1A_tf);
	assign_map.emplace("ExcDC1A.vrmax", &assign_ExcDC1A_vrmax);
	assign_map.emplace("ExcDC1A.vrmin", &assign_ExcDC1A_vrmin);
}

void ExcDC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcDC1A.edfmax", &get_ExcDC1A_edfmax);
	get_map.emplace("ExcDC1A.efd1", &get_ExcDC1A_efd1);
	get_map.emplace("ExcDC1A.efd2", &get_ExcDC1A_efd2);
	get_map.emplace("ExcDC1A.efdmin", &get_ExcDC1A_efdmin);
	get_map.emplace("ExcDC1A.exclim", &get_ExcDC1A_exclim);
	get_map.emplace("ExcDC1A.ka", &get_ExcDC1A_ka);
	get_map.emplace("ExcDC1A.ke", &get_ExcDC1A_ke);
	get_map.emplace("ExcDC1A.kf", &get_ExcDC1A_kf);
	get_map.emplace("ExcDC1A.ks", &get_ExcDC1A_ks);
	get_map.emplace("ExcDC1A.seefd1", &get_ExcDC1A_seefd1);
	get_map.emplace("ExcDC1A.seefd2", &get_ExcDC1A_seefd2);
	get_map.emplace("ExcDC1A.ta", &get_ExcDC1A_ta);
	get_map.emplace("ExcDC1A.tb", &get_ExcDC1A_tb);
	get_map.emplace("ExcDC1A.tc", &get_ExcDC1A_tc);
	get_map.emplace("ExcDC1A.te", &get_ExcDC1A_te);
	get_map.emplace("ExcDC1A.tf", &get_ExcDC1A_tf);
	get_map.emplace("ExcDC1A.vrmax", &get_ExcDC1A_vrmax);
	get_map.emplace("ExcDC1A.vrmin", &get_ExcDC1A_vrmin);
}

void ExcDC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcDC1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcDC1A" &&
		dynamic_cast<ExcDC1A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcDC1A::declare()
{
	return BaseClassDefiner(ExcDC1A::addConstructToMap, ExcDC1A::addPrimitiveAssignFnsToMap, ExcDC1A::addClassAssignFnsToMap, ExcDC1A::debugName);
}

std::map<std::string, AttrDetails> ExcDC1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcDC1A_factory()
	{
		return new ExcDC1A;
	}
}

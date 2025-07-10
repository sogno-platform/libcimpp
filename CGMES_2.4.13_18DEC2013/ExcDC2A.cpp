/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcDC2A(),
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
		{ "ExcDC2A.efd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.efd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.exclim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.seefd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.seefd2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.tf1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcDC2A.vtlim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcDC2A::ExcDC2A() {}
ExcDC2A::~ExcDC2A() {}

const std::list<std::string>& ExcDC2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcDC2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcDC2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcDC2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcDC2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcDC2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcDC2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcDC2A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
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

bool assign_ExcDC2A_vtlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcDC2A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
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

bool get_ExcDC2A_vtlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC2A* element = dynamic_cast<const ExcDC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcDC2A::debugName[] = "ExcDC2A";
const char* ExcDC2A::debugString() const
{
	return ExcDC2A::debugName;
}

void ExcDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcDC2A", &ExcDC2A_factory);
}

void ExcDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcDC2A.efd1", &assign_ExcDC2A_efd1);
	assign_map.emplace("ExcDC2A.efd2", &assign_ExcDC2A_efd2);
	assign_map.emplace("ExcDC2A.exclim", &assign_ExcDC2A_exclim);
	assign_map.emplace("ExcDC2A.ka", &assign_ExcDC2A_ka);
	assign_map.emplace("ExcDC2A.ke", &assign_ExcDC2A_ke);
	assign_map.emplace("ExcDC2A.kf", &assign_ExcDC2A_kf);
	assign_map.emplace("ExcDC2A.ks", &assign_ExcDC2A_ks);
	assign_map.emplace("ExcDC2A.seefd1", &assign_ExcDC2A_seefd1);
	assign_map.emplace("ExcDC2A.seefd2", &assign_ExcDC2A_seefd2);
	assign_map.emplace("ExcDC2A.ta", &assign_ExcDC2A_ta);
	assign_map.emplace("ExcDC2A.tb", &assign_ExcDC2A_tb);
	assign_map.emplace("ExcDC2A.tc", &assign_ExcDC2A_tc);
	assign_map.emplace("ExcDC2A.te", &assign_ExcDC2A_te);
	assign_map.emplace("ExcDC2A.tf", &assign_ExcDC2A_tf);
	assign_map.emplace("ExcDC2A.tf1", &assign_ExcDC2A_tf1);
	assign_map.emplace("ExcDC2A.vrmax", &assign_ExcDC2A_vrmax);
	assign_map.emplace("ExcDC2A.vrmin", &assign_ExcDC2A_vrmin);
	assign_map.emplace("ExcDC2A.vtlim", &assign_ExcDC2A_vtlim);
}

void ExcDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcDC2A.efd1", &get_ExcDC2A_efd1);
	get_map.emplace("ExcDC2A.efd2", &get_ExcDC2A_efd2);
	get_map.emplace("ExcDC2A.exclim", &get_ExcDC2A_exclim);
	get_map.emplace("ExcDC2A.ka", &get_ExcDC2A_ka);
	get_map.emplace("ExcDC2A.ke", &get_ExcDC2A_ke);
	get_map.emplace("ExcDC2A.kf", &get_ExcDC2A_kf);
	get_map.emplace("ExcDC2A.ks", &get_ExcDC2A_ks);
	get_map.emplace("ExcDC2A.seefd1", &get_ExcDC2A_seefd1);
	get_map.emplace("ExcDC2A.seefd2", &get_ExcDC2A_seefd2);
	get_map.emplace("ExcDC2A.ta", &get_ExcDC2A_ta);
	get_map.emplace("ExcDC2A.tb", &get_ExcDC2A_tb);
	get_map.emplace("ExcDC2A.tc", &get_ExcDC2A_tc);
	get_map.emplace("ExcDC2A.te", &get_ExcDC2A_te);
	get_map.emplace("ExcDC2A.tf", &get_ExcDC2A_tf);
	get_map.emplace("ExcDC2A.tf1", &get_ExcDC2A_tf1);
	get_map.emplace("ExcDC2A.vrmax", &get_ExcDC2A_vrmax);
	get_map.emplace("ExcDC2A.vrmin", &get_ExcDC2A_vrmin);
	get_map.emplace("ExcDC2A.vtlim", &get_ExcDC2A_vtlim);
}

void ExcDC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcDC2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcDC2A" &&
		dynamic_cast<ExcDC2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcDC2A::declare()
{
	return BaseClassDefiner(ExcDC2A::addConstructToMap, ExcDC2A::addPrimitiveAssignFnsToMap, ExcDC2A::addClassAssignFnsToMap, ExcDC2A::debugName);
}

std::map<std::string, AttrDetails> ExcDC2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcDC2A_factory()
	{
		return new ExcDC2A;
	}
}

/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST1A(),
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
		{ "ExcIEEEST1A.ilr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.klr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.pssin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.tb1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.tc1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.uelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vamin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vimax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vimin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST1A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST1A::ExcIEEEST1A() {}
ExcIEEEST1A::~ExcIEEEST1A() {}

const std::list<std::string>& ExcIEEEST1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST1A_ilr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ilr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_klr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_pssin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pssin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST1A* element = dynamic_cast<ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_ilr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ilr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_klr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_pssin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pssin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST1A* element = dynamic_cast<const ExcIEEEST1A*>(BaseClass_ptr1);
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

const char ExcIEEEST1A::debugName[] = "ExcIEEEST1A";
const char* ExcIEEEST1A::debugString() const
{
	return ExcIEEEST1A::debugName;
}

void ExcIEEEST1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST1A", &ExcIEEEST1A_factory);
}

void ExcIEEEST1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST1A.ilr", &assign_ExcIEEEST1A_ilr);
	assign_map.emplace("ExcIEEEST1A.ka", &assign_ExcIEEEST1A_ka);
	assign_map.emplace("ExcIEEEST1A.kc", &assign_ExcIEEEST1A_kc);
	assign_map.emplace("ExcIEEEST1A.kf", &assign_ExcIEEEST1A_kf);
	assign_map.emplace("ExcIEEEST1A.klr", &assign_ExcIEEEST1A_klr);
	assign_map.emplace("ExcIEEEST1A.pssin", &assign_ExcIEEEST1A_pssin);
	assign_map.emplace("ExcIEEEST1A.ta", &assign_ExcIEEEST1A_ta);
	assign_map.emplace("ExcIEEEST1A.tb", &assign_ExcIEEEST1A_tb);
	assign_map.emplace("ExcIEEEST1A.tb1", &assign_ExcIEEEST1A_tb1);
	assign_map.emplace("ExcIEEEST1A.tc", &assign_ExcIEEEST1A_tc);
	assign_map.emplace("ExcIEEEST1A.tc1", &assign_ExcIEEEST1A_tc1);
	assign_map.emplace("ExcIEEEST1A.tf", &assign_ExcIEEEST1A_tf);
	assign_map.emplace("ExcIEEEST1A.uelin", &assign_ExcIEEEST1A_uelin);
	assign_map.emplace("ExcIEEEST1A.vamax", &assign_ExcIEEEST1A_vamax);
	assign_map.emplace("ExcIEEEST1A.vamin", &assign_ExcIEEEST1A_vamin);
	assign_map.emplace("ExcIEEEST1A.vimax", &assign_ExcIEEEST1A_vimax);
	assign_map.emplace("ExcIEEEST1A.vimin", &assign_ExcIEEEST1A_vimin);
	assign_map.emplace("ExcIEEEST1A.vrmax", &assign_ExcIEEEST1A_vrmax);
	assign_map.emplace("ExcIEEEST1A.vrmin", &assign_ExcIEEEST1A_vrmin);
}

void ExcIEEEST1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST1A.ilr", &get_ExcIEEEST1A_ilr);
	get_map.emplace("ExcIEEEST1A.ka", &get_ExcIEEEST1A_ka);
	get_map.emplace("ExcIEEEST1A.kc", &get_ExcIEEEST1A_kc);
	get_map.emplace("ExcIEEEST1A.kf", &get_ExcIEEEST1A_kf);
	get_map.emplace("ExcIEEEST1A.klr", &get_ExcIEEEST1A_klr);
	get_map.emplace("ExcIEEEST1A.pssin", &get_ExcIEEEST1A_pssin);
	get_map.emplace("ExcIEEEST1A.ta", &get_ExcIEEEST1A_ta);
	get_map.emplace("ExcIEEEST1A.tb", &get_ExcIEEEST1A_tb);
	get_map.emplace("ExcIEEEST1A.tb1", &get_ExcIEEEST1A_tb1);
	get_map.emplace("ExcIEEEST1A.tc", &get_ExcIEEEST1A_tc);
	get_map.emplace("ExcIEEEST1A.tc1", &get_ExcIEEEST1A_tc1);
	get_map.emplace("ExcIEEEST1A.tf", &get_ExcIEEEST1A_tf);
	get_map.emplace("ExcIEEEST1A.vamax", &get_ExcIEEEST1A_vamax);
	get_map.emplace("ExcIEEEST1A.vamin", &get_ExcIEEEST1A_vamin);
	get_map.emplace("ExcIEEEST1A.vimax", &get_ExcIEEEST1A_vimax);
	get_map.emplace("ExcIEEEST1A.vimin", &get_ExcIEEEST1A_vimin);
	get_map.emplace("ExcIEEEST1A.vrmax", &get_ExcIEEEST1A_vrmax);
	get_map.emplace("ExcIEEEST1A.vrmin", &get_ExcIEEEST1A_vrmin);
}

void ExcIEEEST1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST1A.uelin", &get_ExcIEEEST1A_uelin);
}

bool ExcIEEEST1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST1A" &&
		dynamic_cast<ExcIEEEST1A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST1A::declare()
{
	return BaseClassDefiner(ExcIEEEST1A::addConstructToMap, ExcIEEEST1A::addPrimitiveAssignFnsToMap, ExcIEEEST1A::addClassAssignFnsToMap, ExcIEEEST1A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST1A_factory()
	{
		return new ExcIEEEST1A;
	}
}

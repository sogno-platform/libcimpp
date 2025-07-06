/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcST2A(),
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
		{ "ExcST2A.efdmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.uelin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST2A.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcST2A::ExcST2A() {}
ExcST2A::~ExcST2A() {}

const std::list<std::string>& ExcST2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcST2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcST2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcST2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcST2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcST2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcST2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcST2A_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST2A_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool assign_ExcST2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

bool get_ExcST2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST2A* element = dynamic_cast<const ExcST2A*>(BaseClass_ptr1);
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

const char ExcST2A::debugName[] = "ExcST2A";
const char* ExcST2A::debugString() const
{
	return ExcST2A::debugName;
}

void ExcST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcST2A", &ExcST2A_factory);
}

void ExcST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcST2A.efdmax", &assign_ExcST2A_efdmax);
	assign_map.emplace("ExcST2A.ka", &assign_ExcST2A_ka);
	assign_map.emplace("ExcST2A.kc", &assign_ExcST2A_kc);
	assign_map.emplace("ExcST2A.ke", &assign_ExcST2A_ke);
	assign_map.emplace("ExcST2A.kf", &assign_ExcST2A_kf);
	assign_map.emplace("ExcST2A.ki", &assign_ExcST2A_ki);
	assign_map.emplace("ExcST2A.kp", &assign_ExcST2A_kp);
	assign_map.emplace("ExcST2A.ta", &assign_ExcST2A_ta);
	assign_map.emplace("ExcST2A.tb", &assign_ExcST2A_tb);
	assign_map.emplace("ExcST2A.tc", &assign_ExcST2A_tc);
	assign_map.emplace("ExcST2A.te", &assign_ExcST2A_te);
	assign_map.emplace("ExcST2A.tf", &assign_ExcST2A_tf);
	assign_map.emplace("ExcST2A.uelin", &assign_ExcST2A_uelin);
	assign_map.emplace("ExcST2A.vrmax", &assign_ExcST2A_vrmax);
	assign_map.emplace("ExcST2A.vrmin", &assign_ExcST2A_vrmin);
}

void ExcST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcST2A.efdmax", &get_ExcST2A_efdmax);
	get_map.emplace("ExcST2A.ka", &get_ExcST2A_ka);
	get_map.emplace("ExcST2A.kc", &get_ExcST2A_kc);
	get_map.emplace("ExcST2A.ke", &get_ExcST2A_ke);
	get_map.emplace("ExcST2A.kf", &get_ExcST2A_kf);
	get_map.emplace("ExcST2A.ki", &get_ExcST2A_ki);
	get_map.emplace("ExcST2A.kp", &get_ExcST2A_kp);
	get_map.emplace("ExcST2A.ta", &get_ExcST2A_ta);
	get_map.emplace("ExcST2A.tb", &get_ExcST2A_tb);
	get_map.emplace("ExcST2A.tc", &get_ExcST2A_tc);
	get_map.emplace("ExcST2A.te", &get_ExcST2A_te);
	get_map.emplace("ExcST2A.tf", &get_ExcST2A_tf);
	get_map.emplace("ExcST2A.uelin", &get_ExcST2A_uelin);
	get_map.emplace("ExcST2A.vrmax", &get_ExcST2A_vrmax);
	get_map.emplace("ExcST2A.vrmin", &get_ExcST2A_vrmin);
}

void ExcST2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcST2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcST2A" &&
		dynamic_cast<ExcST2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcST2A::declare()
{
	return BaseClassDefiner(ExcST2A::addConstructToMap, ExcST2A::addPrimitiveAssignFnsToMap, ExcST2A::addClassAssignFnsToMap, ExcST2A::debugName);
}

std::map<std::string, AttrDetails> ExcST2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcST2A_factory()
	{
		return new ExcST2A;
	}
}

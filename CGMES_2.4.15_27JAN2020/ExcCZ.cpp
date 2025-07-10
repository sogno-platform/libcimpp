/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcCZ.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcCZ(),
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
		{ "ExcCZ.efdmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.efdmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcCZ.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcCZ::ExcCZ() {}
ExcCZ::~ExcCZ() {}

const std::list<std::string>& ExcCZ::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcCZ::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcCZ::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcCZ::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcCZ::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcCZ::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcCZ::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcCZ_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool assign_ExcCZ_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcCZ* element = dynamic_cast<ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

bool get_ExcCZ_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcCZ* element = dynamic_cast<const ExcCZ*>(BaseClass_ptr1);
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

const char ExcCZ::debugName[] = "ExcCZ";
const char* ExcCZ::debugString() const
{
	return ExcCZ::debugName;
}

void ExcCZ::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcCZ", &ExcCZ_factory);
}

void ExcCZ::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcCZ.efdmax", &assign_ExcCZ_efdmax);
	assign_map.emplace("ExcCZ.efdmin", &assign_ExcCZ_efdmin);
	assign_map.emplace("ExcCZ.ka", &assign_ExcCZ_ka);
	assign_map.emplace("ExcCZ.ke", &assign_ExcCZ_ke);
	assign_map.emplace("ExcCZ.kp", &assign_ExcCZ_kp);
	assign_map.emplace("ExcCZ.ta", &assign_ExcCZ_ta);
	assign_map.emplace("ExcCZ.tc", &assign_ExcCZ_tc);
	assign_map.emplace("ExcCZ.te", &assign_ExcCZ_te);
	assign_map.emplace("ExcCZ.vrmax", &assign_ExcCZ_vrmax);
	assign_map.emplace("ExcCZ.vrmin", &assign_ExcCZ_vrmin);
}

void ExcCZ::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcCZ::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcCZ.efdmax", &get_ExcCZ_efdmax);
	get_map.emplace("ExcCZ.efdmin", &get_ExcCZ_efdmin);
	get_map.emplace("ExcCZ.ka", &get_ExcCZ_ka);
	get_map.emplace("ExcCZ.ke", &get_ExcCZ_ke);
	get_map.emplace("ExcCZ.kp", &get_ExcCZ_kp);
	get_map.emplace("ExcCZ.ta", &get_ExcCZ_ta);
	get_map.emplace("ExcCZ.tc", &get_ExcCZ_tc);
	get_map.emplace("ExcCZ.te", &get_ExcCZ_te);
	get_map.emplace("ExcCZ.vrmax", &get_ExcCZ_vrmax);
	get_map.emplace("ExcCZ.vrmin", &get_ExcCZ_vrmin);
}

void ExcCZ::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcCZ::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcCZ::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcCZ" &&
		dynamic_cast<ExcCZ*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcCZ::declare()
{
	return BaseClassDefiner(ExcCZ::addConstructToMap, ExcCZ::addPrimitiveAssignFnsToMap, ExcCZ::addClassAssignFnsToMap, ExcCZ::debugName);
}

std::map<std::string, AttrDetails> ExcCZ::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcCZ_factory()
	{
		return new ExcCZ;
	}
}

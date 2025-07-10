/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST2A(),
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
		{ "ExcIEEEST2A.efdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.uelin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST2A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST2A::ExcIEEEST2A() {}
ExcIEEEST2A::~ExcIEEEST2A() {}

const std::list<std::string>& ExcIEEEST2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST2A_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST2A* element = dynamic_cast<const ExcIEEEST2A*>(BaseClass_ptr1);
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

const char ExcIEEEST2A::debugName[] = "ExcIEEEST2A";
const char* ExcIEEEST2A::debugString() const
{
	return ExcIEEEST2A::debugName;
}

void ExcIEEEST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST2A", &ExcIEEEST2A_factory);
}

void ExcIEEEST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST2A.efdmax", &assign_ExcIEEEST2A_efdmax);
	assign_map.emplace("ExcIEEEST2A.ka", &assign_ExcIEEEST2A_ka);
	assign_map.emplace("ExcIEEEST2A.kc", &assign_ExcIEEEST2A_kc);
	assign_map.emplace("ExcIEEEST2A.ke", &assign_ExcIEEEST2A_ke);
	assign_map.emplace("ExcIEEEST2A.kf", &assign_ExcIEEEST2A_kf);
	assign_map.emplace("ExcIEEEST2A.ki", &assign_ExcIEEEST2A_ki);
	assign_map.emplace("ExcIEEEST2A.kp", &assign_ExcIEEEST2A_kp);
	assign_map.emplace("ExcIEEEST2A.ta", &assign_ExcIEEEST2A_ta);
	assign_map.emplace("ExcIEEEST2A.te", &assign_ExcIEEEST2A_te);
	assign_map.emplace("ExcIEEEST2A.tf", &assign_ExcIEEEST2A_tf);
	assign_map.emplace("ExcIEEEST2A.uelin", &assign_ExcIEEEST2A_uelin);
	assign_map.emplace("ExcIEEEST2A.vrmax", &assign_ExcIEEEST2A_vrmax);
	assign_map.emplace("ExcIEEEST2A.vrmin", &assign_ExcIEEEST2A_vrmin);
}

void ExcIEEEST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST2A.efdmax", &get_ExcIEEEST2A_efdmax);
	get_map.emplace("ExcIEEEST2A.ka", &get_ExcIEEEST2A_ka);
	get_map.emplace("ExcIEEEST2A.kc", &get_ExcIEEEST2A_kc);
	get_map.emplace("ExcIEEEST2A.ke", &get_ExcIEEEST2A_ke);
	get_map.emplace("ExcIEEEST2A.kf", &get_ExcIEEEST2A_kf);
	get_map.emplace("ExcIEEEST2A.ki", &get_ExcIEEEST2A_ki);
	get_map.emplace("ExcIEEEST2A.kp", &get_ExcIEEEST2A_kp);
	get_map.emplace("ExcIEEEST2A.ta", &get_ExcIEEEST2A_ta);
	get_map.emplace("ExcIEEEST2A.te", &get_ExcIEEEST2A_te);
	get_map.emplace("ExcIEEEST2A.tf", &get_ExcIEEEST2A_tf);
	get_map.emplace("ExcIEEEST2A.uelin", &get_ExcIEEEST2A_uelin);
	get_map.emplace("ExcIEEEST2A.vrmax", &get_ExcIEEEST2A_vrmax);
	get_map.emplace("ExcIEEEST2A.vrmin", &get_ExcIEEEST2A_vrmin);
}

void ExcIEEEST2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEST2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST2A" &&
		dynamic_cast<ExcIEEEST2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST2A::declare()
{
	return BaseClassDefiner(ExcIEEEST2A::addConstructToMap, ExcIEEEST2A::addPrimitiveAssignFnsToMap, ExcIEEEST2A::addClassAssignFnsToMap, ExcIEEEST2A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST2A_factory()
	{
		return new ExcIEEEST2A;
	}
}

/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC1A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEAC1A(),
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
		{ "ExcIEEEAC1A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.seve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.seve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.vamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.vamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.ve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.ve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC1A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEAC1A::ExcIEEEAC1A() {}
ExcIEEEAC1A::~ExcIEEEAC1A() {}

const std::list<std::string>& ExcIEEEAC1A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEAC1A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEAC1A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC1A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEAC1A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEAC1A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC1A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEAC1A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC1A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC1A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC1A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC1A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC1A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC1A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC1A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC1A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC1A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC1A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC1A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC1A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC1A* element = dynamic_cast<const ExcIEEEAC1A*>(BaseClass_ptr1);
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

const char ExcIEEEAC1A::debugName[] = "ExcIEEEAC1A";
const char* ExcIEEEAC1A::debugString() const
{
	return ExcIEEEAC1A::debugName;
}

void ExcIEEEAC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEAC1A", &ExcIEEEAC1A_factory);
}

void ExcIEEEAC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEAC1A.ka", &assign_ExcIEEEAC1A_ka);
	assign_map.emplace("ExcIEEEAC1A.kc", &assign_ExcIEEEAC1A_kc);
	assign_map.emplace("ExcIEEEAC1A.kd", &assign_ExcIEEEAC1A_kd);
	assign_map.emplace("ExcIEEEAC1A.ke", &assign_ExcIEEEAC1A_ke);
	assign_map.emplace("ExcIEEEAC1A.kf", &assign_ExcIEEEAC1A_kf);
	assign_map.emplace("ExcIEEEAC1A.seve1", &assign_ExcIEEEAC1A_seve1);
	assign_map.emplace("ExcIEEEAC1A.seve2", &assign_ExcIEEEAC1A_seve2);
	assign_map.emplace("ExcIEEEAC1A.ta", &assign_ExcIEEEAC1A_ta);
	assign_map.emplace("ExcIEEEAC1A.tb", &assign_ExcIEEEAC1A_tb);
	assign_map.emplace("ExcIEEEAC1A.tc", &assign_ExcIEEEAC1A_tc);
	assign_map.emplace("ExcIEEEAC1A.te", &assign_ExcIEEEAC1A_te);
	assign_map.emplace("ExcIEEEAC1A.tf", &assign_ExcIEEEAC1A_tf);
	assign_map.emplace("ExcIEEEAC1A.vamax", &assign_ExcIEEEAC1A_vamax);
	assign_map.emplace("ExcIEEEAC1A.vamin", &assign_ExcIEEEAC1A_vamin);
	assign_map.emplace("ExcIEEEAC1A.ve1", &assign_ExcIEEEAC1A_ve1);
	assign_map.emplace("ExcIEEEAC1A.ve2", &assign_ExcIEEEAC1A_ve2);
	assign_map.emplace("ExcIEEEAC1A.vrmax", &assign_ExcIEEEAC1A_vrmax);
	assign_map.emplace("ExcIEEEAC1A.vrmin", &assign_ExcIEEEAC1A_vrmin);
}

void ExcIEEEAC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC1A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEAC1A.ka", &get_ExcIEEEAC1A_ka);
	get_map.emplace("ExcIEEEAC1A.kc", &get_ExcIEEEAC1A_kc);
	get_map.emplace("ExcIEEEAC1A.kd", &get_ExcIEEEAC1A_kd);
	get_map.emplace("ExcIEEEAC1A.ke", &get_ExcIEEEAC1A_ke);
	get_map.emplace("ExcIEEEAC1A.kf", &get_ExcIEEEAC1A_kf);
	get_map.emplace("ExcIEEEAC1A.seve1", &get_ExcIEEEAC1A_seve1);
	get_map.emplace("ExcIEEEAC1A.seve2", &get_ExcIEEEAC1A_seve2);
	get_map.emplace("ExcIEEEAC1A.ta", &get_ExcIEEEAC1A_ta);
	get_map.emplace("ExcIEEEAC1A.tb", &get_ExcIEEEAC1A_tb);
	get_map.emplace("ExcIEEEAC1A.tc", &get_ExcIEEEAC1A_tc);
	get_map.emplace("ExcIEEEAC1A.te", &get_ExcIEEEAC1A_te);
	get_map.emplace("ExcIEEEAC1A.tf", &get_ExcIEEEAC1A_tf);
	get_map.emplace("ExcIEEEAC1A.vamax", &get_ExcIEEEAC1A_vamax);
	get_map.emplace("ExcIEEEAC1A.vamin", &get_ExcIEEEAC1A_vamin);
	get_map.emplace("ExcIEEEAC1A.ve1", &get_ExcIEEEAC1A_ve1);
	get_map.emplace("ExcIEEEAC1A.ve2", &get_ExcIEEEAC1A_ve2);
	get_map.emplace("ExcIEEEAC1A.vrmax", &get_ExcIEEEAC1A_vrmax);
	get_map.emplace("ExcIEEEAC1A.vrmin", &get_ExcIEEEAC1A_vrmin);
}

void ExcIEEEAC1A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC1A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEAC1A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEAC1A" &&
		dynamic_cast<ExcIEEEAC1A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEAC1A::declare()
{
	return BaseClassDefiner(ExcIEEEAC1A::addConstructToMap, ExcIEEEAC1A::addPrimitiveAssignFnsToMap, ExcIEEEAC1A::addClassAssignFnsToMap, ExcIEEEAC1A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEAC1A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC1A_factory()
	{
		return new ExcIEEEAC1A;
	}
}

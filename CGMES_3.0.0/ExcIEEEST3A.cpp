/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST3A(),
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
		{ "ExcIEEEST3A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.kg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.km", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.thetap", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.tm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vbmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vgmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vimax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vimin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vmmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vmmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST3A.xl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST3A::ExcIEEEST3A() {}
ExcIEEEST3A::~ExcIEEEST3A() {}

const std::list<std::string>& ExcIEEEST3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST3A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->km;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_thetap(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetap;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_vbmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vbmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_vgmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vgmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_vmmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_vmmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST3A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST3A_xl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST3A* element = dynamic_cast<ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcIEEEST3A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->km;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetap;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vbmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_vgmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vgmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_vmmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_vmmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST3A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
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

bool get_ExcIEEEST3A_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST3A* element = dynamic_cast<const ExcIEEEST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcIEEEST3A::debugName[] = "ExcIEEEST3A";
const char* ExcIEEEST3A::debugString() const
{
	return ExcIEEEST3A::debugName;
}

void ExcIEEEST3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST3A", &ExcIEEEST3A_factory);
}

void ExcIEEEST3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST3A.ka", &assign_ExcIEEEST3A_ka);
	assign_map.emplace("ExcIEEEST3A.kc", &assign_ExcIEEEST3A_kc);
	assign_map.emplace("ExcIEEEST3A.kg", &assign_ExcIEEEST3A_kg);
	assign_map.emplace("ExcIEEEST3A.ki", &assign_ExcIEEEST3A_ki);
	assign_map.emplace("ExcIEEEST3A.km", &assign_ExcIEEEST3A_km);
	assign_map.emplace("ExcIEEEST3A.kp", &assign_ExcIEEEST3A_kp);
	assign_map.emplace("ExcIEEEST3A.ta", &assign_ExcIEEEST3A_ta);
	assign_map.emplace("ExcIEEEST3A.tb", &assign_ExcIEEEST3A_tb);
	assign_map.emplace("ExcIEEEST3A.tc", &assign_ExcIEEEST3A_tc);
	assign_map.emplace("ExcIEEEST3A.thetap", &assign_ExcIEEEST3A_thetap);
	assign_map.emplace("ExcIEEEST3A.tm", &assign_ExcIEEEST3A_tm);
	assign_map.emplace("ExcIEEEST3A.vbmax", &assign_ExcIEEEST3A_vbmax);
	assign_map.emplace("ExcIEEEST3A.vgmax", &assign_ExcIEEEST3A_vgmax);
	assign_map.emplace("ExcIEEEST3A.vimax", &assign_ExcIEEEST3A_vimax);
	assign_map.emplace("ExcIEEEST3A.vimin", &assign_ExcIEEEST3A_vimin);
	assign_map.emplace("ExcIEEEST3A.vmmax", &assign_ExcIEEEST3A_vmmax);
	assign_map.emplace("ExcIEEEST3A.vmmin", &assign_ExcIEEEST3A_vmmin);
	assign_map.emplace("ExcIEEEST3A.vrmax", &assign_ExcIEEEST3A_vrmax);
	assign_map.emplace("ExcIEEEST3A.vrmin", &assign_ExcIEEEST3A_vrmin);
	assign_map.emplace("ExcIEEEST3A.xl", &assign_ExcIEEEST3A_xl);
}

void ExcIEEEST3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST3A.ka", &get_ExcIEEEST3A_ka);
	get_map.emplace("ExcIEEEST3A.kc", &get_ExcIEEEST3A_kc);
	get_map.emplace("ExcIEEEST3A.kg", &get_ExcIEEEST3A_kg);
	get_map.emplace("ExcIEEEST3A.ki", &get_ExcIEEEST3A_ki);
	get_map.emplace("ExcIEEEST3A.km", &get_ExcIEEEST3A_km);
	get_map.emplace("ExcIEEEST3A.kp", &get_ExcIEEEST3A_kp);
	get_map.emplace("ExcIEEEST3A.ta", &get_ExcIEEEST3A_ta);
	get_map.emplace("ExcIEEEST3A.tb", &get_ExcIEEEST3A_tb);
	get_map.emplace("ExcIEEEST3A.tc", &get_ExcIEEEST3A_tc);
	get_map.emplace("ExcIEEEST3A.thetap", &get_ExcIEEEST3A_thetap);
	get_map.emplace("ExcIEEEST3A.tm", &get_ExcIEEEST3A_tm);
	get_map.emplace("ExcIEEEST3A.vbmax", &get_ExcIEEEST3A_vbmax);
	get_map.emplace("ExcIEEEST3A.vgmax", &get_ExcIEEEST3A_vgmax);
	get_map.emplace("ExcIEEEST3A.vimax", &get_ExcIEEEST3A_vimax);
	get_map.emplace("ExcIEEEST3A.vimin", &get_ExcIEEEST3A_vimin);
	get_map.emplace("ExcIEEEST3A.vmmax", &get_ExcIEEEST3A_vmmax);
	get_map.emplace("ExcIEEEST3A.vmmin", &get_ExcIEEEST3A_vmmin);
	get_map.emplace("ExcIEEEST3A.vrmax", &get_ExcIEEEST3A_vrmax);
	get_map.emplace("ExcIEEEST3A.vrmin", &get_ExcIEEEST3A_vrmin);
	get_map.emplace("ExcIEEEST3A.xl", &get_ExcIEEEST3A_xl);
}

void ExcIEEEST3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEST3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST3A" &&
		dynamic_cast<ExcIEEEST3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST3A::declare()
{
	return BaseClassDefiner(ExcIEEEST3A::addConstructToMap, ExcIEEEST3A::addPrimitiveAssignFnsToMap, ExcIEEEST3A::addClassAssignFnsToMap, ExcIEEEST3A::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST3A_factory()
	{
		return new ExcIEEEST3A;
	}
}

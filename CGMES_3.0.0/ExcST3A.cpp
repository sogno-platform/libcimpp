/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcST3A(),
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
		{ "ExcST3A.efdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.kg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.kj", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.km", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.ks1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.thetap", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.tm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vbmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vgmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vimax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vimin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcST3A.xl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcST3A::ExcST3A() {}
ExcST3A::~ExcST3A() {}

const std::list<std::string>& ExcST3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcST3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcST3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcST3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcST3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcST3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcST3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcST3A_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_kj(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kj;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST3A_km(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_ks1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST3A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_thetap(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vbmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vgmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool assign_ExcST3A_xl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST3A* element = dynamic_cast<ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_kj(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kj;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_km(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vgmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

bool get_ExcST3A_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST3A* element = dynamic_cast<const ExcST3A*>(BaseClass_ptr1);
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

const char ExcST3A::debugName[] = "ExcST3A";
const char* ExcST3A::debugString() const
{
	return ExcST3A::debugName;
}

void ExcST3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcST3A", &ExcST3A_factory);
}

void ExcST3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcST3A.efdmax", &assign_ExcST3A_efdmax);
	assign_map.emplace("ExcST3A.kc", &assign_ExcST3A_kc);
	assign_map.emplace("ExcST3A.kg", &assign_ExcST3A_kg);
	assign_map.emplace("ExcST3A.ki", &assign_ExcST3A_ki);
	assign_map.emplace("ExcST3A.kj", &assign_ExcST3A_kj);
	assign_map.emplace("ExcST3A.km", &assign_ExcST3A_km);
	assign_map.emplace("ExcST3A.kp", &assign_ExcST3A_kp);
	assign_map.emplace("ExcST3A.ks", &assign_ExcST3A_ks);
	assign_map.emplace("ExcST3A.ks1", &assign_ExcST3A_ks1);
	assign_map.emplace("ExcST3A.tb", &assign_ExcST3A_tb);
	assign_map.emplace("ExcST3A.tc", &assign_ExcST3A_tc);
	assign_map.emplace("ExcST3A.thetap", &assign_ExcST3A_thetap);
	assign_map.emplace("ExcST3A.tm", &assign_ExcST3A_tm);
	assign_map.emplace("ExcST3A.vbmax", &assign_ExcST3A_vbmax);
	assign_map.emplace("ExcST3A.vgmax", &assign_ExcST3A_vgmax);
	assign_map.emplace("ExcST3A.vimax", &assign_ExcST3A_vimax);
	assign_map.emplace("ExcST3A.vimin", &assign_ExcST3A_vimin);
	assign_map.emplace("ExcST3A.vrmax", &assign_ExcST3A_vrmax);
	assign_map.emplace("ExcST3A.vrmin", &assign_ExcST3A_vrmin);
	assign_map.emplace("ExcST3A.xl", &assign_ExcST3A_xl);
}

void ExcST3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcST3A.efdmax", &get_ExcST3A_efdmax);
	get_map.emplace("ExcST3A.kc", &get_ExcST3A_kc);
	get_map.emplace("ExcST3A.kg", &get_ExcST3A_kg);
	get_map.emplace("ExcST3A.ki", &get_ExcST3A_ki);
	get_map.emplace("ExcST3A.kj", &get_ExcST3A_kj);
	get_map.emplace("ExcST3A.km", &get_ExcST3A_km);
	get_map.emplace("ExcST3A.kp", &get_ExcST3A_kp);
	get_map.emplace("ExcST3A.ks", &get_ExcST3A_ks);
	get_map.emplace("ExcST3A.ks1", &get_ExcST3A_ks1);
	get_map.emplace("ExcST3A.tb", &get_ExcST3A_tb);
	get_map.emplace("ExcST3A.tc", &get_ExcST3A_tc);
	get_map.emplace("ExcST3A.thetap", &get_ExcST3A_thetap);
	get_map.emplace("ExcST3A.tm", &get_ExcST3A_tm);
	get_map.emplace("ExcST3A.vbmax", &get_ExcST3A_vbmax);
	get_map.emplace("ExcST3A.vgmax", &get_ExcST3A_vgmax);
	get_map.emplace("ExcST3A.vimax", &get_ExcST3A_vimax);
	get_map.emplace("ExcST3A.vimin", &get_ExcST3A_vimin);
	get_map.emplace("ExcST3A.vrmax", &get_ExcST3A_vrmax);
	get_map.emplace("ExcST3A.vrmin", &get_ExcST3A_vrmin);
	get_map.emplace("ExcST3A.xl", &get_ExcST3A_xl);
}

void ExcST3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcST3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcST3A" &&
		dynamic_cast<ExcST3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcST3A::declare()
{
	return BaseClassDefiner(ExcST3A::addConstructToMap, ExcST3A::addPrimitiveAssignFnsToMap, ExcST3A::addClassAssignFnsToMap, ExcST3A::debugName);
}

std::map<std::string, AttrDetails> ExcST3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcST3A_factory()
	{
		return new ExcST3A;
	}
}

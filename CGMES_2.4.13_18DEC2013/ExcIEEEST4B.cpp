/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST4B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST4B(),
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
		{ "ExcIEEEST4B.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kir", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kpm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.kpr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.thetap", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.vbmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.vmmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.vmmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST4B.xl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST4B::ExcIEEEST4B() {}
ExcIEEEST4B::~ExcIEEEST4B() {}

const std::list<std::string>& ExcIEEEST4B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST4B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST4B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST4B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST4B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST4B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST4B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST4B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_kim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST4B_kir(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kir;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST4B_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_kpm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST4B_kpr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST4B_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_thetap(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_vbmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_vmmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_vmmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST4B_xl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST4B* element = dynamic_cast<ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_kim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_kpm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_kpr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST4B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_vmmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_vmmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST4B_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST4B* element = dynamic_cast<const ExcIEEEST4B*>(BaseClass_ptr1);
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

const char ExcIEEEST4B::debugName[] = "ExcIEEEST4B";
const char* ExcIEEEST4B::debugString() const
{
	return ExcIEEEST4B::debugName;
}

void ExcIEEEST4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST4B", &ExcIEEEST4B_factory);
}

void ExcIEEEST4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST4B.kc", &assign_ExcIEEEST4B_kc);
	assign_map.emplace("ExcIEEEST4B.kg", &assign_ExcIEEEST4B_kg);
	assign_map.emplace("ExcIEEEST4B.ki", &assign_ExcIEEEST4B_ki);
	assign_map.emplace("ExcIEEEST4B.kim", &assign_ExcIEEEST4B_kim);
	assign_map.emplace("ExcIEEEST4B.kir", &assign_ExcIEEEST4B_kir);
	assign_map.emplace("ExcIEEEST4B.kp", &assign_ExcIEEEST4B_kp);
	assign_map.emplace("ExcIEEEST4B.kpm", &assign_ExcIEEEST4B_kpm);
	assign_map.emplace("ExcIEEEST4B.kpr", &assign_ExcIEEEST4B_kpr);
	assign_map.emplace("ExcIEEEST4B.ta", &assign_ExcIEEEST4B_ta);
	assign_map.emplace("ExcIEEEST4B.thetap", &assign_ExcIEEEST4B_thetap);
	assign_map.emplace("ExcIEEEST4B.vbmax", &assign_ExcIEEEST4B_vbmax);
	assign_map.emplace("ExcIEEEST4B.vmmax", &assign_ExcIEEEST4B_vmmax);
	assign_map.emplace("ExcIEEEST4B.vmmin", &assign_ExcIEEEST4B_vmmin);
	assign_map.emplace("ExcIEEEST4B.vrmax", &assign_ExcIEEEST4B_vrmax);
	assign_map.emplace("ExcIEEEST4B.vrmin", &assign_ExcIEEEST4B_vrmin);
	assign_map.emplace("ExcIEEEST4B.xl", &assign_ExcIEEEST4B_xl);
}

void ExcIEEEST4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST4B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST4B.kc", &get_ExcIEEEST4B_kc);
	get_map.emplace("ExcIEEEST4B.kg", &get_ExcIEEEST4B_kg);
	get_map.emplace("ExcIEEEST4B.ki", &get_ExcIEEEST4B_ki);
	get_map.emplace("ExcIEEEST4B.kim", &get_ExcIEEEST4B_kim);
	get_map.emplace("ExcIEEEST4B.kir", &get_ExcIEEEST4B_kir);
	get_map.emplace("ExcIEEEST4B.kp", &get_ExcIEEEST4B_kp);
	get_map.emplace("ExcIEEEST4B.kpm", &get_ExcIEEEST4B_kpm);
	get_map.emplace("ExcIEEEST4B.kpr", &get_ExcIEEEST4B_kpr);
	get_map.emplace("ExcIEEEST4B.ta", &get_ExcIEEEST4B_ta);
	get_map.emplace("ExcIEEEST4B.thetap", &get_ExcIEEEST4B_thetap);
	get_map.emplace("ExcIEEEST4B.vbmax", &get_ExcIEEEST4B_vbmax);
	get_map.emplace("ExcIEEEST4B.vmmax", &get_ExcIEEEST4B_vmmax);
	get_map.emplace("ExcIEEEST4B.vmmin", &get_ExcIEEEST4B_vmmin);
	get_map.emplace("ExcIEEEST4B.vrmax", &get_ExcIEEEST4B_vrmax);
	get_map.emplace("ExcIEEEST4B.vrmin", &get_ExcIEEEST4B_vrmin);
	get_map.emplace("ExcIEEEST4B.xl", &get_ExcIEEEST4B_xl);
}

void ExcIEEEST4B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST4B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEST4B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST4B" &&
		dynamic_cast<ExcIEEEST4B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST4B::declare()
{
	return BaseClassDefiner(ExcIEEEST4B::addConstructToMap, ExcIEEEST4B::addPrimitiveAssignFnsToMap, ExcIEEEST4B::addClassAssignFnsToMap, ExcIEEEST4B::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST4B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST4B_factory()
	{
		return new ExcIEEEST4B;
	}
}

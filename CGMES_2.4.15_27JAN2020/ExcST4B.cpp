/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST4B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcST4B(),
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
		{ "ExcST4B.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kim", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kir", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kpm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.kpr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.lvgate", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.thetap", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.uel", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vbmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vgmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vmmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vmmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcST4B.xl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcST4B::ExcST4B() {}
ExcST4B::~ExcST4B() {}

const std::list<std::string>& ExcST4B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcST4B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcST4B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcST4B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcST4B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcST4B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcST4B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcST4B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kir(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kpm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_kpr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_lvgate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lvgate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST4B_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_thetap(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_uel(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uel;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcST4B_vbmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_vgmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_vmmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_vmmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool assign_ExcST4B_xl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcST4B* element = dynamic_cast<ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kpm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_kpr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_lvgate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lvgate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST4B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_thetap(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_uel(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uel;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcST4B_vbmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_vgmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_vmmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_vmmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

bool get_ExcST4B_xl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcST4B* element = dynamic_cast<const ExcST4B*>(BaseClass_ptr1);
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

const char ExcST4B::debugName[] = "ExcST4B";
const char* ExcST4B::debugString() const
{
	return ExcST4B::debugName;
}

void ExcST4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcST4B", &ExcST4B_factory);
}

void ExcST4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcST4B.kc", &assign_ExcST4B_kc);
	assign_map.emplace("ExcST4B.kg", &assign_ExcST4B_kg);
	assign_map.emplace("ExcST4B.ki", &assign_ExcST4B_ki);
	assign_map.emplace("ExcST4B.kim", &assign_ExcST4B_kim);
	assign_map.emplace("ExcST4B.kir", &assign_ExcST4B_kir);
	assign_map.emplace("ExcST4B.kp", &assign_ExcST4B_kp);
	assign_map.emplace("ExcST4B.kpm", &assign_ExcST4B_kpm);
	assign_map.emplace("ExcST4B.kpr", &assign_ExcST4B_kpr);
	assign_map.emplace("ExcST4B.lvgate", &assign_ExcST4B_lvgate);
	assign_map.emplace("ExcST4B.ta", &assign_ExcST4B_ta);
	assign_map.emplace("ExcST4B.thetap", &assign_ExcST4B_thetap);
	assign_map.emplace("ExcST4B.uel", &assign_ExcST4B_uel);
	assign_map.emplace("ExcST4B.vbmax", &assign_ExcST4B_vbmax);
	assign_map.emplace("ExcST4B.vgmax", &assign_ExcST4B_vgmax);
	assign_map.emplace("ExcST4B.vmmax", &assign_ExcST4B_vmmax);
	assign_map.emplace("ExcST4B.vmmin", &assign_ExcST4B_vmmin);
	assign_map.emplace("ExcST4B.vrmax", &assign_ExcST4B_vrmax);
	assign_map.emplace("ExcST4B.vrmin", &assign_ExcST4B_vrmin);
	assign_map.emplace("ExcST4B.xl", &assign_ExcST4B_xl);
}

void ExcST4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcST4B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcST4B.kc", &get_ExcST4B_kc);
	get_map.emplace("ExcST4B.kg", &get_ExcST4B_kg);
	get_map.emplace("ExcST4B.ki", &get_ExcST4B_ki);
	get_map.emplace("ExcST4B.kim", &get_ExcST4B_kim);
	get_map.emplace("ExcST4B.kir", &get_ExcST4B_kir);
	get_map.emplace("ExcST4B.kp", &get_ExcST4B_kp);
	get_map.emplace("ExcST4B.kpm", &get_ExcST4B_kpm);
	get_map.emplace("ExcST4B.kpr", &get_ExcST4B_kpr);
	get_map.emplace("ExcST4B.lvgate", &get_ExcST4B_lvgate);
	get_map.emplace("ExcST4B.ta", &get_ExcST4B_ta);
	get_map.emplace("ExcST4B.thetap", &get_ExcST4B_thetap);
	get_map.emplace("ExcST4B.uel", &get_ExcST4B_uel);
	get_map.emplace("ExcST4B.vbmax", &get_ExcST4B_vbmax);
	get_map.emplace("ExcST4B.vgmax", &get_ExcST4B_vgmax);
	get_map.emplace("ExcST4B.vmmax", &get_ExcST4B_vmmax);
	get_map.emplace("ExcST4B.vmmin", &get_ExcST4B_vmmin);
	get_map.emplace("ExcST4B.vrmax", &get_ExcST4B_vrmax);
	get_map.emplace("ExcST4B.vrmin", &get_ExcST4B_vrmin);
	get_map.emplace("ExcST4B.xl", &get_ExcST4B_xl);
}

void ExcST4B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcST4B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcST4B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcST4B" &&
		dynamic_cast<ExcST4B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcST4B::declare()
{
	return BaseClassDefiner(ExcST4B::addConstructToMap, ExcST4B::addPrimitiveAssignFnsToMap, ExcST4B::addClassAssignFnsToMap, ExcST4B::debugName);
}

std::map<std::string, AttrDetails> ExcST4B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcST4B_factory()
	{
		return new ExcST4B;
	}
}

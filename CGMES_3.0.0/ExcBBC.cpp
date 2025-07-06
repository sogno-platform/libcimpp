/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcBBC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcBBC(),
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
		{ "ExcBBC.efdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.efdmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.switch", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcBBC.xe", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcBBC::ExcBBC() {}
ExcBBC::~ExcBBC() {}

const std::list<std::string>& ExcBBC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcBBC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcBBC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcBBC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcBBC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcBBC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcBBC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcBBC_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
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

bool assign_ExcBBC_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
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

bool assign_ExcBBC_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_switch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->_switch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcBBC_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
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

bool assign_ExcBBC_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
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

bool assign_ExcBBC_xe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcBBC_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
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

bool get_ExcBBC_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
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

bool get_ExcBBC_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_switch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->_switch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcBBC_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
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

bool get_ExcBBC_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
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

bool get_ExcBBC_xe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcBBC* element = dynamic_cast<const ExcBBC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcBBC::debugName[] = "ExcBBC";
const char* ExcBBC::debugString() const
{
	return ExcBBC::debugName;
}

void ExcBBC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcBBC", &ExcBBC_factory);
}

void ExcBBC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcBBC.efdmax", &assign_ExcBBC_efdmax);
	assign_map.emplace("ExcBBC.efdmin", &assign_ExcBBC_efdmin);
	assign_map.emplace("ExcBBC.k", &assign_ExcBBC_k);
	assign_map.emplace("ExcBBC.switch", &assign_ExcBBC_switch);
	assign_map.emplace("ExcBBC.t1", &assign_ExcBBC_t1);
	assign_map.emplace("ExcBBC.t2", &assign_ExcBBC_t2);
	assign_map.emplace("ExcBBC.t3", &assign_ExcBBC_t3);
	assign_map.emplace("ExcBBC.t4", &assign_ExcBBC_t4);
	assign_map.emplace("ExcBBC.vrmax", &assign_ExcBBC_vrmax);
	assign_map.emplace("ExcBBC.vrmin", &assign_ExcBBC_vrmin);
	assign_map.emplace("ExcBBC.xe", &assign_ExcBBC_xe);
}

void ExcBBC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcBBC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcBBC.efdmax", &get_ExcBBC_efdmax);
	get_map.emplace("ExcBBC.efdmin", &get_ExcBBC_efdmin);
	get_map.emplace("ExcBBC.k", &get_ExcBBC_k);
	get_map.emplace("ExcBBC.switch", &get_ExcBBC_switch);
	get_map.emplace("ExcBBC.t1", &get_ExcBBC_t1);
	get_map.emplace("ExcBBC.t2", &get_ExcBBC_t2);
	get_map.emplace("ExcBBC.t3", &get_ExcBBC_t3);
	get_map.emplace("ExcBBC.t4", &get_ExcBBC_t4);
	get_map.emplace("ExcBBC.vrmax", &get_ExcBBC_vrmax);
	get_map.emplace("ExcBBC.vrmin", &get_ExcBBC_vrmin);
	get_map.emplace("ExcBBC.xe", &get_ExcBBC_xe);
}

void ExcBBC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcBBC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcBBC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcBBC" &&
		dynamic_cast<ExcBBC*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcBBC::declare()
{
	return BaseClassDefiner(ExcBBC::addConstructToMap, ExcBBC::addPrimitiveAssignFnsToMap, ExcBBC::addClassAssignFnsToMap, ExcBBC::debugName);
}

std::map<std::string, AttrDetails> ExcBBC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcBBC_factory()
	{
		return new ExcBBC;
	}
}

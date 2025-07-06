/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcNI.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcNI(),
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
		{ "ExcNI.busFedSelector", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.tf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.tf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.tr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcNI.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcNI::ExcNI() {}
ExcNI::~ExcNI() {}

const std::list<std::string>& ExcNI::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcNI::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcNI::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcNI::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcNI::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcNI::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcNI::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcNI_busFedSelector(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->busFedSelector;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcNI_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
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

bool assign_ExcNI_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
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

bool assign_ExcNI_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcNI_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
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

bool assign_ExcNI_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcNI_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcNI_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcNI_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
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

bool assign_ExcNI_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1);
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

bool get_ExcNI_busFedSelector(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->busFedSelector;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
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

bool get_ExcNI_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
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

bool get_ExcNI_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
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

bool get_ExcNI_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcNI_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
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

bool get_ExcNI_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcNI* element = dynamic_cast<const ExcNI*>(BaseClass_ptr1);
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

const char ExcNI::debugName[] = "ExcNI";
const char* ExcNI::debugString() const
{
	return ExcNI::debugName;
}

void ExcNI::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcNI", &ExcNI_factory);
}

void ExcNI::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcNI.busFedSelector", &assign_ExcNI_busFedSelector);
	assign_map.emplace("ExcNI.ka", &assign_ExcNI_ka);
	assign_map.emplace("ExcNI.kf", &assign_ExcNI_kf);
	assign_map.emplace("ExcNI.r", &assign_ExcNI_r);
	assign_map.emplace("ExcNI.ta", &assign_ExcNI_ta);
	assign_map.emplace("ExcNI.tf1", &assign_ExcNI_tf1);
	assign_map.emplace("ExcNI.tf2", &assign_ExcNI_tf2);
	assign_map.emplace("ExcNI.tr", &assign_ExcNI_tr);
	assign_map.emplace("ExcNI.vrmax", &assign_ExcNI_vrmax);
	assign_map.emplace("ExcNI.vrmin", &assign_ExcNI_vrmin);
}

void ExcNI::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcNI::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcNI.busFedSelector", &get_ExcNI_busFedSelector);
	get_map.emplace("ExcNI.ka", &get_ExcNI_ka);
	get_map.emplace("ExcNI.kf", &get_ExcNI_kf);
	get_map.emplace("ExcNI.r", &get_ExcNI_r);
	get_map.emplace("ExcNI.ta", &get_ExcNI_ta);
	get_map.emplace("ExcNI.tf1", &get_ExcNI_tf1);
	get_map.emplace("ExcNI.tf2", &get_ExcNI_tf2);
	get_map.emplace("ExcNI.tr", &get_ExcNI_tr);
	get_map.emplace("ExcNI.vrmax", &get_ExcNI_vrmax);
	get_map.emplace("ExcNI.vrmin", &get_ExcNI_vrmin);
}

void ExcNI::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcNI::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcNI::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcNI" &&
		dynamic_cast<ExcNI*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcNI::declare()
{
	return BaseClassDefiner(ExcNI::addConstructToMap, ExcNI::addPrimitiveAssignFnsToMap, ExcNI::addClassAssignFnsToMap, ExcNI::debugName);
}

std::map<std::string, AttrDetails> ExcNI::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcNI_factory()
	{
		return new ExcNI;
	}
}

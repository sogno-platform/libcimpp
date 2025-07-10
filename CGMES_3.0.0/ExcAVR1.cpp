/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR1(),
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
		{ "ExcAVR1.e1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.e2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.se1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.se2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.vrmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR1.vrmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR1::ExcAVR1() {}
ExcAVR1::~ExcAVR1() {}

const std::list<std::string>& ExcAVR1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR1_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
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

bool assign_ExcAVR1_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAVR1_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAVR1_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
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

bool get_ExcAVR1_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAVR1_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR1* element = dynamic_cast<const ExcAVR1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAVR1::debugName[] = "ExcAVR1";
const char* ExcAVR1::debugString() const
{
	return ExcAVR1::debugName;
}

void ExcAVR1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR1", &ExcAVR1_factory);
}

void ExcAVR1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR1.e1", &assign_ExcAVR1_e1);
	assign_map.emplace("ExcAVR1.e2", &assign_ExcAVR1_e2);
	assign_map.emplace("ExcAVR1.ka", &assign_ExcAVR1_ka);
	assign_map.emplace("ExcAVR1.kf", &assign_ExcAVR1_kf);
	assign_map.emplace("ExcAVR1.se1", &assign_ExcAVR1_se1);
	assign_map.emplace("ExcAVR1.se2", &assign_ExcAVR1_se2);
	assign_map.emplace("ExcAVR1.ta", &assign_ExcAVR1_ta);
	assign_map.emplace("ExcAVR1.tb", &assign_ExcAVR1_tb);
	assign_map.emplace("ExcAVR1.te", &assign_ExcAVR1_te);
	assign_map.emplace("ExcAVR1.tf", &assign_ExcAVR1_tf);
	assign_map.emplace("ExcAVR1.vrmn", &assign_ExcAVR1_vrmn);
	assign_map.emplace("ExcAVR1.vrmx", &assign_ExcAVR1_vrmx);
}

void ExcAVR1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR1.e1", &get_ExcAVR1_e1);
	get_map.emplace("ExcAVR1.e2", &get_ExcAVR1_e2);
	get_map.emplace("ExcAVR1.ka", &get_ExcAVR1_ka);
	get_map.emplace("ExcAVR1.kf", &get_ExcAVR1_kf);
	get_map.emplace("ExcAVR1.se1", &get_ExcAVR1_se1);
	get_map.emplace("ExcAVR1.se2", &get_ExcAVR1_se2);
	get_map.emplace("ExcAVR1.ta", &get_ExcAVR1_ta);
	get_map.emplace("ExcAVR1.tb", &get_ExcAVR1_tb);
	get_map.emplace("ExcAVR1.te", &get_ExcAVR1_te);
	get_map.emplace("ExcAVR1.tf", &get_ExcAVR1_tf);
	get_map.emplace("ExcAVR1.vrmn", &get_ExcAVR1_vrmn);
	get_map.emplace("ExcAVR1.vrmx", &get_ExcAVR1_vrmx);
}

void ExcAVR1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR1" &&
		dynamic_cast<ExcAVR1*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR1::declare()
{
	return BaseClassDefiner(ExcAVR1::addConstructToMap, ExcAVR1::addPrimitiveAssignFnsToMap, ExcAVR1::addClassAssignFnsToMap, ExcAVR1::debugName);
}

std::map<std::string, AttrDetails> ExcAVR1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR1_factory()
	{
		return new ExcAVR1;
	}
}

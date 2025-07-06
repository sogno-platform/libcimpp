/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR2(),
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
		{ "ExcAVR2.e1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.e2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.se1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.se2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.tf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.tf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.vrmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR2.vrmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR2::ExcAVR2() {}
ExcAVR2::~ExcAVR2() {}

const std::list<std::string>& ExcAVR2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR2_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool assign_ExcAVR2_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

bool get_ExcAVR2_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR2* element = dynamic_cast<const ExcAVR2*>(BaseClass_ptr1);
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

const char ExcAVR2::debugName[] = "ExcAVR2";
const char* ExcAVR2::debugString() const
{
	return ExcAVR2::debugName;
}

void ExcAVR2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR2", &ExcAVR2_factory);
}

void ExcAVR2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR2.e1", &assign_ExcAVR2_e1);
	assign_map.emplace("ExcAVR2.e2", &assign_ExcAVR2_e2);
	assign_map.emplace("ExcAVR2.ka", &assign_ExcAVR2_ka);
	assign_map.emplace("ExcAVR2.kf", &assign_ExcAVR2_kf);
	assign_map.emplace("ExcAVR2.se1", &assign_ExcAVR2_se1);
	assign_map.emplace("ExcAVR2.se2", &assign_ExcAVR2_se2);
	assign_map.emplace("ExcAVR2.ta", &assign_ExcAVR2_ta);
	assign_map.emplace("ExcAVR2.tb", &assign_ExcAVR2_tb);
	assign_map.emplace("ExcAVR2.te", &assign_ExcAVR2_te);
	assign_map.emplace("ExcAVR2.tf1", &assign_ExcAVR2_tf1);
	assign_map.emplace("ExcAVR2.tf2", &assign_ExcAVR2_tf2);
	assign_map.emplace("ExcAVR2.vrmn", &assign_ExcAVR2_vrmn);
	assign_map.emplace("ExcAVR2.vrmx", &assign_ExcAVR2_vrmx);
}

void ExcAVR2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR2.e1", &get_ExcAVR2_e1);
	get_map.emplace("ExcAVR2.e2", &get_ExcAVR2_e2);
	get_map.emplace("ExcAVR2.ka", &get_ExcAVR2_ka);
	get_map.emplace("ExcAVR2.kf", &get_ExcAVR2_kf);
	get_map.emplace("ExcAVR2.se1", &get_ExcAVR2_se1);
	get_map.emplace("ExcAVR2.se2", &get_ExcAVR2_se2);
	get_map.emplace("ExcAVR2.ta", &get_ExcAVR2_ta);
	get_map.emplace("ExcAVR2.tb", &get_ExcAVR2_tb);
	get_map.emplace("ExcAVR2.te", &get_ExcAVR2_te);
	get_map.emplace("ExcAVR2.tf1", &get_ExcAVR2_tf1);
	get_map.emplace("ExcAVR2.tf2", &get_ExcAVR2_tf2);
	get_map.emplace("ExcAVR2.vrmn", &get_ExcAVR2_vrmn);
	get_map.emplace("ExcAVR2.vrmx", &get_ExcAVR2_vrmx);
}

void ExcAVR2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR2" &&
		dynamic_cast<ExcAVR2*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR2::declare()
{
	return BaseClassDefiner(ExcAVR2::addConstructToMap, ExcAVR2::addPrimitiveAssignFnsToMap, ExcAVR2::addClassAssignFnsToMap, ExcAVR2::debugName);
}

std::map<std::string, AttrDetails> ExcAVR2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR2_factory()
	{
		return new ExcAVR2;
	}
}

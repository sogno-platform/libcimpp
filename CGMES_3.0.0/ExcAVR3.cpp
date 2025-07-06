/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAVR3(),
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
		{ "ExcAVR3.e1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.e2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.se1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.se2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.vrmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAVR3.vrmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAVR3::ExcAVR3() {}
ExcAVR3::~ExcAVR3() {}

const std::list<std::string>& ExcAVR3::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAVR3::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAVR3::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAVR3::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAVR3::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAVR3::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAVR3::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAVR3_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool assign_ExcAVR3_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

bool get_ExcAVR3_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAVR3* element = dynamic_cast<const ExcAVR3*>(BaseClass_ptr1);
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

const char ExcAVR3::debugName[] = "ExcAVR3";
const char* ExcAVR3::debugString() const
{
	return ExcAVR3::debugName;
}

void ExcAVR3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAVR3", &ExcAVR3_factory);
}

void ExcAVR3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAVR3.e1", &assign_ExcAVR3_e1);
	assign_map.emplace("ExcAVR3.e2", &assign_ExcAVR3_e2);
	assign_map.emplace("ExcAVR3.ka", &assign_ExcAVR3_ka);
	assign_map.emplace("ExcAVR3.se1", &assign_ExcAVR3_se1);
	assign_map.emplace("ExcAVR3.se2", &assign_ExcAVR3_se2);
	assign_map.emplace("ExcAVR3.t1", &assign_ExcAVR3_t1);
	assign_map.emplace("ExcAVR3.t2", &assign_ExcAVR3_t2);
	assign_map.emplace("ExcAVR3.t3", &assign_ExcAVR3_t3);
	assign_map.emplace("ExcAVR3.t4", &assign_ExcAVR3_t4);
	assign_map.emplace("ExcAVR3.te", &assign_ExcAVR3_te);
	assign_map.emplace("ExcAVR3.vrmn", &assign_ExcAVR3_vrmn);
	assign_map.emplace("ExcAVR3.vrmx", &assign_ExcAVR3_vrmx);
}

void ExcAVR3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAVR3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAVR3.e1", &get_ExcAVR3_e1);
	get_map.emplace("ExcAVR3.e2", &get_ExcAVR3_e2);
	get_map.emplace("ExcAVR3.ka", &get_ExcAVR3_ka);
	get_map.emplace("ExcAVR3.se1", &get_ExcAVR3_se1);
	get_map.emplace("ExcAVR3.se2", &get_ExcAVR3_se2);
	get_map.emplace("ExcAVR3.t1", &get_ExcAVR3_t1);
	get_map.emplace("ExcAVR3.t2", &get_ExcAVR3_t2);
	get_map.emplace("ExcAVR3.t3", &get_ExcAVR3_t3);
	get_map.emplace("ExcAVR3.t4", &get_ExcAVR3_t4);
	get_map.emplace("ExcAVR3.te", &get_ExcAVR3_te);
	get_map.emplace("ExcAVR3.vrmn", &get_ExcAVR3_vrmn);
	get_map.emplace("ExcAVR3.vrmx", &get_ExcAVR3_vrmx);
}

void ExcAVR3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAVR3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAVR3::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAVR3" &&
		dynamic_cast<ExcAVR3*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAVR3::declare()
{
	return BaseClassDefiner(ExcAVR3::addConstructToMap, ExcAVR3::addPrimitiveAssignFnsToMap, ExcAVR3::addClassAssignFnsToMap, ExcAVR3::debugName);
}

std::map<std::string, AttrDetails> ExcAVR3::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAVR3_factory()
	{
		return new ExcAVR3;
	}
}

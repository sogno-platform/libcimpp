/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST5B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEST5B(),
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
		{ "ExcIEEEST5B.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.kr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tb1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tb2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tc1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tc2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tob1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tob2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.toc1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.toc2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tub1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tub2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tuc1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.tuc2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEST5B.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEST5B::ExcIEEEST5B() {}
ExcIEEEST5B::~ExcIEEEST5B() {}

const std::list<std::string>& ExcIEEEST5B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEST5B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEST5B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST5B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEST5B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEST5B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEST5B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEST5B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST5B_kr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST5B_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tb2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tob1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tob1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tob2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tob2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_toc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->toc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_toc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->toc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tub1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tub1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tub2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tub2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tuc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tuc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST5B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tob1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tob1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tob2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tob2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_toc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_toc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tub1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tub1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tub2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tub2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tuc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tuc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

const char ExcIEEEST5B::debugName[] = "ExcIEEEST5B";
const char* ExcIEEEST5B::debugString() const
{
	return ExcIEEEST5B::debugName;
}

void ExcIEEEST5B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEST5B", &ExcIEEEST5B_factory);
}

void ExcIEEEST5B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEST5B.kc", &assign_ExcIEEEST5B_kc);
	assign_map.emplace("ExcIEEEST5B.kr", &assign_ExcIEEEST5B_kr);
	assign_map.emplace("ExcIEEEST5B.t1", &assign_ExcIEEEST5B_t1);
	assign_map.emplace("ExcIEEEST5B.tb1", &assign_ExcIEEEST5B_tb1);
	assign_map.emplace("ExcIEEEST5B.tb2", &assign_ExcIEEEST5B_tb2);
	assign_map.emplace("ExcIEEEST5B.tc1", &assign_ExcIEEEST5B_tc1);
	assign_map.emplace("ExcIEEEST5B.tc2", &assign_ExcIEEEST5B_tc2);
	assign_map.emplace("ExcIEEEST5B.tob1", &assign_ExcIEEEST5B_tob1);
	assign_map.emplace("ExcIEEEST5B.tob2", &assign_ExcIEEEST5B_tob2);
	assign_map.emplace("ExcIEEEST5B.toc1", &assign_ExcIEEEST5B_toc1);
	assign_map.emplace("ExcIEEEST5B.toc2", &assign_ExcIEEEST5B_toc2);
	assign_map.emplace("ExcIEEEST5B.tub1", &assign_ExcIEEEST5B_tub1);
	assign_map.emplace("ExcIEEEST5B.tub2", &assign_ExcIEEEST5B_tub2);
	assign_map.emplace("ExcIEEEST5B.tuc1", &assign_ExcIEEEST5B_tuc1);
	assign_map.emplace("ExcIEEEST5B.tuc2", &assign_ExcIEEEST5B_tuc2);
	assign_map.emplace("ExcIEEEST5B.vrmax", &assign_ExcIEEEST5B_vrmax);
	assign_map.emplace("ExcIEEEST5B.vrmin", &assign_ExcIEEEST5B_vrmin);
}

void ExcIEEEST5B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST5B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEST5B.kc", &get_ExcIEEEST5B_kc);
	get_map.emplace("ExcIEEEST5B.kr", &get_ExcIEEEST5B_kr);
	get_map.emplace("ExcIEEEST5B.t1", &get_ExcIEEEST5B_t1);
	get_map.emplace("ExcIEEEST5B.tb1", &get_ExcIEEEST5B_tb1);
	get_map.emplace("ExcIEEEST5B.tb2", &get_ExcIEEEST5B_tb2);
	get_map.emplace("ExcIEEEST5B.tc1", &get_ExcIEEEST5B_tc1);
	get_map.emplace("ExcIEEEST5B.tc2", &get_ExcIEEEST5B_tc2);
	get_map.emplace("ExcIEEEST5B.tob1", &get_ExcIEEEST5B_tob1);
	get_map.emplace("ExcIEEEST5B.tob2", &get_ExcIEEEST5B_tob2);
	get_map.emplace("ExcIEEEST5B.toc1", &get_ExcIEEEST5B_toc1);
	get_map.emplace("ExcIEEEST5B.toc2", &get_ExcIEEEST5B_toc2);
	get_map.emplace("ExcIEEEST5B.tub1", &get_ExcIEEEST5B_tub1);
	get_map.emplace("ExcIEEEST5B.tub2", &get_ExcIEEEST5B_tub2);
	get_map.emplace("ExcIEEEST5B.tuc1", &get_ExcIEEEST5B_tuc1);
	get_map.emplace("ExcIEEEST5B.tuc2", &get_ExcIEEEST5B_tuc2);
	get_map.emplace("ExcIEEEST5B.vrmax", &get_ExcIEEEST5B_vrmax);
	get_map.emplace("ExcIEEEST5B.vrmin", &get_ExcIEEEST5B_vrmin);
}

void ExcIEEEST5B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST5B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEST5B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEST5B" &&
		dynamic_cast<ExcIEEEST5B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEST5B::declare()
{
	return BaseClassDefiner(ExcIEEEST5B::addConstructToMap, ExcIEEEST5B::addPrimitiveAssignFnsToMap, ExcIEEEST5B::addClassAssignFnsToMap, ExcIEEEST5B::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEST5B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEST5B_factory()
	{
		return new ExcIEEEST5B;
	}
}

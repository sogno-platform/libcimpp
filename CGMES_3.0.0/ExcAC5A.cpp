/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC5A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAC5A(),
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
		{ "ExcAC5A.a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.efd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.efd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.seefd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.seefd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.tf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.tf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.tf3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC5A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAC5A::ExcAC5A() {}
ExcAC5A::~ExcAC5A() {}

const std::list<std::string>& ExcAC5A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAC5A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAC5A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAC5A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAC5A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAC5A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAC5A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAC5A_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_tf3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC5A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool assign_ExcAC5A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_tf3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC5A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

bool get_ExcAC5A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC5A* element = dynamic_cast<const ExcAC5A*>(BaseClass_ptr1);
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

const char ExcAC5A::debugName[] = "ExcAC5A";
const char* ExcAC5A::debugString() const
{
	return ExcAC5A::debugName;
}

void ExcAC5A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAC5A", &ExcAC5A_factory);
}

void ExcAC5A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAC5A.a", &assign_ExcAC5A_a);
	assign_map.emplace("ExcAC5A.efd1", &assign_ExcAC5A_efd1);
	assign_map.emplace("ExcAC5A.efd2", &assign_ExcAC5A_efd2);
	assign_map.emplace("ExcAC5A.ka", &assign_ExcAC5A_ka);
	assign_map.emplace("ExcAC5A.ke", &assign_ExcAC5A_ke);
	assign_map.emplace("ExcAC5A.kf", &assign_ExcAC5A_kf);
	assign_map.emplace("ExcAC5A.ks", &assign_ExcAC5A_ks);
	assign_map.emplace("ExcAC5A.seefd1", &assign_ExcAC5A_seefd1);
	assign_map.emplace("ExcAC5A.seefd2", &assign_ExcAC5A_seefd2);
	assign_map.emplace("ExcAC5A.ta", &assign_ExcAC5A_ta);
	assign_map.emplace("ExcAC5A.tb", &assign_ExcAC5A_tb);
	assign_map.emplace("ExcAC5A.tc", &assign_ExcAC5A_tc);
	assign_map.emplace("ExcAC5A.te", &assign_ExcAC5A_te);
	assign_map.emplace("ExcAC5A.tf1", &assign_ExcAC5A_tf1);
	assign_map.emplace("ExcAC5A.tf2", &assign_ExcAC5A_tf2);
	assign_map.emplace("ExcAC5A.tf3", &assign_ExcAC5A_tf3);
	assign_map.emplace("ExcAC5A.vrmax", &assign_ExcAC5A_vrmax);
	assign_map.emplace("ExcAC5A.vrmin", &assign_ExcAC5A_vrmin);
}

void ExcAC5A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC5A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAC5A.a", &get_ExcAC5A_a);
	get_map.emplace("ExcAC5A.efd1", &get_ExcAC5A_efd1);
	get_map.emplace("ExcAC5A.efd2", &get_ExcAC5A_efd2);
	get_map.emplace("ExcAC5A.ka", &get_ExcAC5A_ka);
	get_map.emplace("ExcAC5A.ke", &get_ExcAC5A_ke);
	get_map.emplace("ExcAC5A.kf", &get_ExcAC5A_kf);
	get_map.emplace("ExcAC5A.ks", &get_ExcAC5A_ks);
	get_map.emplace("ExcAC5A.seefd1", &get_ExcAC5A_seefd1);
	get_map.emplace("ExcAC5A.seefd2", &get_ExcAC5A_seefd2);
	get_map.emplace("ExcAC5A.ta", &get_ExcAC5A_ta);
	get_map.emplace("ExcAC5A.tb", &get_ExcAC5A_tb);
	get_map.emplace("ExcAC5A.tc", &get_ExcAC5A_tc);
	get_map.emplace("ExcAC5A.te", &get_ExcAC5A_te);
	get_map.emplace("ExcAC5A.tf1", &get_ExcAC5A_tf1);
	get_map.emplace("ExcAC5A.tf2", &get_ExcAC5A_tf2);
	get_map.emplace("ExcAC5A.tf3", &get_ExcAC5A_tf3);
	get_map.emplace("ExcAC5A.vrmax", &get_ExcAC5A_vrmax);
	get_map.emplace("ExcAC5A.vrmin", &get_ExcAC5A_vrmin);
}

void ExcAC5A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC5A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAC5A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAC5A" &&
		dynamic_cast<ExcAC5A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAC5A::declare()
{
	return BaseClassDefiner(ExcAC5A::addConstructToMap, ExcAC5A::addPrimitiveAssignFnsToMap, ExcAC5A::addClassAssignFnsToMap, ExcAC5A::debugName);
}

std::map<std::string, AttrDetails> ExcAC5A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAC5A_factory()
	{
		return new ExcAC5A;
	}
}

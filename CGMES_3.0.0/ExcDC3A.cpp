/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcDC3A(),
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
		{ "ExcDC3A.efd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.efd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.efdlim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.efdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.efdmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.exclim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.kr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.kv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.seefd1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.seefd2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.trh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcDC3A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcDC3A::ExcDC3A() {}
ExcDC3A::~ExcDC3A() {}

const std::list<std::string>& ExcDC3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcDC3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcDC3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcDC3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcDC3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcDC3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcDC3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcDC3A_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_efdlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_exclim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->exclim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_kr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_kv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_trh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcDC3A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool assign_ExcDC3A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_efdlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_exclim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->exclim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_kv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_trh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->trh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcDC3A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

bool get_ExcDC3A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcDC3A* element = dynamic_cast<const ExcDC3A*>(BaseClass_ptr1);
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

const char ExcDC3A::debugName[] = "ExcDC3A";
const char* ExcDC3A::debugString() const
{
	return ExcDC3A::debugName;
}

void ExcDC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcDC3A", &ExcDC3A_factory);
}

void ExcDC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcDC3A.efd1", &assign_ExcDC3A_efd1);
	assign_map.emplace("ExcDC3A.efd2", &assign_ExcDC3A_efd2);
	assign_map.emplace("ExcDC3A.efdlim", &assign_ExcDC3A_efdlim);
	assign_map.emplace("ExcDC3A.efdmax", &assign_ExcDC3A_efdmax);
	assign_map.emplace("ExcDC3A.efdmin", &assign_ExcDC3A_efdmin);
	assign_map.emplace("ExcDC3A.exclim", &assign_ExcDC3A_exclim);
	assign_map.emplace("ExcDC3A.ke", &assign_ExcDC3A_ke);
	assign_map.emplace("ExcDC3A.kr", &assign_ExcDC3A_kr);
	assign_map.emplace("ExcDC3A.ks", &assign_ExcDC3A_ks);
	assign_map.emplace("ExcDC3A.kv", &assign_ExcDC3A_kv);
	assign_map.emplace("ExcDC3A.seefd1", &assign_ExcDC3A_seefd1);
	assign_map.emplace("ExcDC3A.seefd2", &assign_ExcDC3A_seefd2);
	assign_map.emplace("ExcDC3A.te", &assign_ExcDC3A_te);
	assign_map.emplace("ExcDC3A.trh", &assign_ExcDC3A_trh);
	assign_map.emplace("ExcDC3A.vrmax", &assign_ExcDC3A_vrmax);
	assign_map.emplace("ExcDC3A.vrmin", &assign_ExcDC3A_vrmin);
}

void ExcDC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcDC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcDC3A.efd1", &get_ExcDC3A_efd1);
	get_map.emplace("ExcDC3A.efd2", &get_ExcDC3A_efd2);
	get_map.emplace("ExcDC3A.efdlim", &get_ExcDC3A_efdlim);
	get_map.emplace("ExcDC3A.efdmax", &get_ExcDC3A_efdmax);
	get_map.emplace("ExcDC3A.efdmin", &get_ExcDC3A_efdmin);
	get_map.emplace("ExcDC3A.exclim", &get_ExcDC3A_exclim);
	get_map.emplace("ExcDC3A.ke", &get_ExcDC3A_ke);
	get_map.emplace("ExcDC3A.kr", &get_ExcDC3A_kr);
	get_map.emplace("ExcDC3A.ks", &get_ExcDC3A_ks);
	get_map.emplace("ExcDC3A.kv", &get_ExcDC3A_kv);
	get_map.emplace("ExcDC3A.seefd1", &get_ExcDC3A_seefd1);
	get_map.emplace("ExcDC3A.seefd2", &get_ExcDC3A_seefd2);
	get_map.emplace("ExcDC3A.te", &get_ExcDC3A_te);
	get_map.emplace("ExcDC3A.trh", &get_ExcDC3A_trh);
	get_map.emplace("ExcDC3A.vrmax", &get_ExcDC3A_vrmax);
	get_map.emplace("ExcDC3A.vrmin", &get_ExcDC3A_vrmin);
}

void ExcDC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcDC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcDC3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcDC3A" &&
		dynamic_cast<ExcDC3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcDC3A::declare()
{
	return BaseClassDefiner(ExcDC3A::addConstructToMap, ExcDC3A::addPrimitiveAssignFnsToMap, ExcDC3A::addClassAssignFnsToMap, ExcDC3A::debugName);
}

std::map<std::string, AttrDetails> ExcDC3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcDC3A_factory()
	{
		return new ExcDC3A;
	}
}

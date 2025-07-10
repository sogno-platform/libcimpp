/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE3B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssIEEE3B(),
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
		{ "PssIEEE3B.a1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.a8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.ks1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.ks2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.tw1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.tw2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.tw3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.vstmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssIEEE3B.vstmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssIEEE3B::PssIEEE3B() {}
PssIEEE3B::~PssIEEE3B() {}

const std::list<std::string>& PssIEEE3B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssIEEE3B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssIEEE3B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssIEEE3B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssIEEE3B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssIEEE3B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssIEEE3B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssIEEE3B_a1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_a8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_ks1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_ks2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
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

bool assign_PssIEEE3B_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
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

bool assign_PssIEEE3B_tw1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_tw2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_tw3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_vstmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssIEEE3B_vstmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssIEEE3B* element = dynamic_cast<PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vstmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssIEEE3B_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_a8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_ks2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
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

bool get_PssIEEE3B_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
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

bool get_PssIEEE3B_tw1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_tw2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_tw3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_vstmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssIEEE3B_vstmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssIEEE3B* element = dynamic_cast<const PssIEEE3B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vstmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssIEEE3B::debugName[] = "PssIEEE3B";
const char* PssIEEE3B::debugString() const
{
	return PssIEEE3B::debugName;
}

void PssIEEE3B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssIEEE3B", &PssIEEE3B_factory);
}

void PssIEEE3B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssIEEE3B.a1", &assign_PssIEEE3B_a1);
	assign_map.emplace("PssIEEE3B.a2", &assign_PssIEEE3B_a2);
	assign_map.emplace("PssIEEE3B.a3", &assign_PssIEEE3B_a3);
	assign_map.emplace("PssIEEE3B.a4", &assign_PssIEEE3B_a4);
	assign_map.emplace("PssIEEE3B.a5", &assign_PssIEEE3B_a5);
	assign_map.emplace("PssIEEE3B.a6", &assign_PssIEEE3B_a6);
	assign_map.emplace("PssIEEE3B.a7", &assign_PssIEEE3B_a7);
	assign_map.emplace("PssIEEE3B.a8", &assign_PssIEEE3B_a8);
	assign_map.emplace("PssIEEE3B.ks1", &assign_PssIEEE3B_ks1);
	assign_map.emplace("PssIEEE3B.ks2", &assign_PssIEEE3B_ks2);
	assign_map.emplace("PssIEEE3B.t1", &assign_PssIEEE3B_t1);
	assign_map.emplace("PssIEEE3B.t2", &assign_PssIEEE3B_t2);
	assign_map.emplace("PssIEEE3B.tw1", &assign_PssIEEE3B_tw1);
	assign_map.emplace("PssIEEE3B.tw2", &assign_PssIEEE3B_tw2);
	assign_map.emplace("PssIEEE3B.tw3", &assign_PssIEEE3B_tw3);
	assign_map.emplace("PssIEEE3B.vstmax", &assign_PssIEEE3B_vstmax);
	assign_map.emplace("PssIEEE3B.vstmin", &assign_PssIEEE3B_vstmin);
}

void PssIEEE3B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssIEEE3B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssIEEE3B.a1", &get_PssIEEE3B_a1);
	get_map.emplace("PssIEEE3B.a2", &get_PssIEEE3B_a2);
	get_map.emplace("PssIEEE3B.a3", &get_PssIEEE3B_a3);
	get_map.emplace("PssIEEE3B.a4", &get_PssIEEE3B_a4);
	get_map.emplace("PssIEEE3B.a5", &get_PssIEEE3B_a5);
	get_map.emplace("PssIEEE3B.a6", &get_PssIEEE3B_a6);
	get_map.emplace("PssIEEE3B.a7", &get_PssIEEE3B_a7);
	get_map.emplace("PssIEEE3B.a8", &get_PssIEEE3B_a8);
	get_map.emplace("PssIEEE3B.ks1", &get_PssIEEE3B_ks1);
	get_map.emplace("PssIEEE3B.ks2", &get_PssIEEE3B_ks2);
	get_map.emplace("PssIEEE3B.t1", &get_PssIEEE3B_t1);
	get_map.emplace("PssIEEE3B.t2", &get_PssIEEE3B_t2);
	get_map.emplace("PssIEEE3B.tw1", &get_PssIEEE3B_tw1);
	get_map.emplace("PssIEEE3B.tw2", &get_PssIEEE3B_tw2);
	get_map.emplace("PssIEEE3B.tw3", &get_PssIEEE3B_tw3);
	get_map.emplace("PssIEEE3B.vstmax", &get_PssIEEE3B_vstmax);
	get_map.emplace("PssIEEE3B.vstmin", &get_PssIEEE3B_vstmin);
}

void PssIEEE3B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssIEEE3B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssIEEE3B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssIEEE3B" &&
		dynamic_cast<PssIEEE3B*>(otherObject) != nullptr;
}

const BaseClassDefiner PssIEEE3B::declare()
{
	return BaseClassDefiner(PssIEEE3B::addConstructToMap, PssIEEE3B::addPrimitiveAssignFnsToMap, PssIEEE3B::addClassAssignFnsToMap, PssIEEE3B::debugName);
}

std::map<std::string, AttrDetails> PssIEEE3B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssIEEE3B_factory()
	{
		return new PssIEEE3B;
	}
}

/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentBranch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquivalentBranch(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquivalentBranch.negativeR12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.negativeR21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.negativeX12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.negativeX21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.positiveR12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.positiveR21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.positiveX12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.positiveX21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.r21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.x", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.x21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.zeroR12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.zeroR21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.zeroX12", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EquivalentBranch.zeroX21", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EquivalentBranch::EquivalentBranch() {}
EquivalentBranch::~EquivalentBranch() {}

const std::list<std::string>& EquivalentBranch::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquivalentBranch::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquivalentBranch::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquivalentBranch::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquivalentBranch::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquivalentBranch::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquivalentBranch::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EquivalentBranch_negativeR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_negativeX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->negativeX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_positiveX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
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

bool assign_EquivalentBranch_r21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_x21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroR12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroR12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroR21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroR21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroX12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroX12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentBranch_zeroX21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentBranch* element = dynamic_cast<EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeroX21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EquivalentBranch_negativeR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_negativeX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->negativeX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_positiveX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
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

bool get_EquivalentBranch_r21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_x21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroR12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroR12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroR21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroR21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroX12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroX12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentBranch_zeroX21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentBranch* element = dynamic_cast<const EquivalentBranch*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeroX21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EquivalentBranch::debugName[] = "EquivalentBranch";
const char* EquivalentBranch::debugString() const
{
	return EquivalentBranch::debugName;
}

void EquivalentBranch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EquivalentBranch", &EquivalentBranch_factory);
}

void EquivalentBranch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EquivalentBranch.negativeR12", &assign_EquivalentBranch_negativeR12);
	assign_map.emplace("EquivalentBranch.negativeR21", &assign_EquivalentBranch_negativeR21);
	assign_map.emplace("EquivalentBranch.negativeX12", &assign_EquivalentBranch_negativeX12);
	assign_map.emplace("EquivalentBranch.negativeX21", &assign_EquivalentBranch_negativeX21);
	assign_map.emplace("EquivalentBranch.positiveR12", &assign_EquivalentBranch_positiveR12);
	assign_map.emplace("EquivalentBranch.positiveR21", &assign_EquivalentBranch_positiveR21);
	assign_map.emplace("EquivalentBranch.positiveX12", &assign_EquivalentBranch_positiveX12);
	assign_map.emplace("EquivalentBranch.positiveX21", &assign_EquivalentBranch_positiveX21);
	assign_map.emplace("EquivalentBranch.r", &assign_EquivalentBranch_r);
	assign_map.emplace("EquivalentBranch.r21", &assign_EquivalentBranch_r21);
	assign_map.emplace("EquivalentBranch.x", &assign_EquivalentBranch_x);
	assign_map.emplace("EquivalentBranch.x21", &assign_EquivalentBranch_x21);
	assign_map.emplace("EquivalentBranch.zeroR12", &assign_EquivalentBranch_zeroR12);
	assign_map.emplace("EquivalentBranch.zeroR21", &assign_EquivalentBranch_zeroR21);
	assign_map.emplace("EquivalentBranch.zeroX12", &assign_EquivalentBranch_zeroX12);
	assign_map.emplace("EquivalentBranch.zeroX21", &assign_EquivalentBranch_zeroX21);
}

void EquivalentBranch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void EquivalentBranch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EquivalentBranch.negativeR12", &get_EquivalentBranch_negativeR12);
	get_map.emplace("EquivalentBranch.negativeR21", &get_EquivalentBranch_negativeR21);
	get_map.emplace("EquivalentBranch.negativeX12", &get_EquivalentBranch_negativeX12);
	get_map.emplace("EquivalentBranch.negativeX21", &get_EquivalentBranch_negativeX21);
	get_map.emplace("EquivalentBranch.positiveR12", &get_EquivalentBranch_positiveR12);
	get_map.emplace("EquivalentBranch.positiveR21", &get_EquivalentBranch_positiveR21);
	get_map.emplace("EquivalentBranch.positiveX12", &get_EquivalentBranch_positiveX12);
	get_map.emplace("EquivalentBranch.positiveX21", &get_EquivalentBranch_positiveX21);
	get_map.emplace("EquivalentBranch.r", &get_EquivalentBranch_r);
	get_map.emplace("EquivalentBranch.r21", &get_EquivalentBranch_r21);
	get_map.emplace("EquivalentBranch.x", &get_EquivalentBranch_x);
	get_map.emplace("EquivalentBranch.x21", &get_EquivalentBranch_x21);
	get_map.emplace("EquivalentBranch.zeroR12", &get_EquivalentBranch_zeroR12);
	get_map.emplace("EquivalentBranch.zeroR21", &get_EquivalentBranch_zeroR21);
	get_map.emplace("EquivalentBranch.zeroX12", &get_EquivalentBranch_zeroX12);
	get_map.emplace("EquivalentBranch.zeroX21", &get_EquivalentBranch_zeroX21);
}

void EquivalentBranch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
}

void EquivalentBranch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

bool EquivalentBranch::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquivalentBranch" &&
		dynamic_cast<EquivalentBranch*>(otherObject) != nullptr;
}

const BaseClassDefiner EquivalentBranch::declare()
{
	return BaseClassDefiner(EquivalentBranch::addConstructToMap, EquivalentBranch::addPrimitiveAssignFnsToMap, EquivalentBranch::addClassAssignFnsToMap, EquivalentBranch::debugName);
}

std::map<std::string, AttrDetails> EquivalentBranch::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquivalentEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquivalentBranch_factory()
	{
		return new EquivalentBranch;
	}
}

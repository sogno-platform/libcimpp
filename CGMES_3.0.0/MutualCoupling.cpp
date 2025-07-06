/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MutualCoupling.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		MutualCoupling(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::SC,
		},
		CGMESProfile::SC
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "MutualCoupling.First_Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.Second_Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.b0ch", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.distance11", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.distance12", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.distance21", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.distance22", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.g0ch", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.r0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "MutualCoupling.x0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

MutualCoupling::MutualCoupling() : First_Terminal(nullptr), Second_Terminal(nullptr) {}
MutualCoupling::~MutualCoupling() {}

const std::list<std::string>& MutualCoupling::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& MutualCoupling::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& MutualCoupling::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& MutualCoupling::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& MutualCoupling::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& MutualCoupling::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& MutualCoupling::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_Terminal_HasFirstMutualCoupling(BaseClass*, BaseClass*);
bool assign_MutualCoupling_First_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->First_Terminal != element2)
		{
			element->First_Terminal = element2;
			return assign_Terminal_HasFirstMutualCoupling(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_HasSecondMutualCoupling(BaseClass*, BaseClass*);
bool assign_MutualCoupling_Second_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Second_Terminal != element2)
		{
			element->Second_Terminal = element2;
			return assign_Terminal_HasSecondMutualCoupling(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MutualCoupling_b0ch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0ch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_distance11(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->distance11;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_distance12(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->distance12;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_distance21(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->distance21;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_distance22(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->distance22;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_g0ch(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g0ch;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_MutualCoupling_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_MutualCoupling_First_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->First_Terminal != 0)
		{
			BaseClass_list.push_back(element->First_Terminal);
			return true;
		}
	}
	return false;
}

bool get_MutualCoupling_Second_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Second_Terminal != 0)
		{
			BaseClass_list.push_back(element->Second_Terminal);
			return true;
		}
	}
	return false;
}

bool get_MutualCoupling_b0ch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0ch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_distance11(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->distance11;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_distance12(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->distance12;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_distance21(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->distance21;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_distance22(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->distance22;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_g0ch(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g0ch;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_MutualCoupling_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const MutualCoupling* element = dynamic_cast<const MutualCoupling*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char MutualCoupling::debugName[] = "MutualCoupling";
const char* MutualCoupling::debugString() const
{
	return MutualCoupling::debugName;
}

void MutualCoupling::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("MutualCoupling", &MutualCoupling_factory);
}

void MutualCoupling::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("MutualCoupling.b0ch", &assign_MutualCoupling_b0ch);
	assign_map.emplace("MutualCoupling.distance11", &assign_MutualCoupling_distance11);
	assign_map.emplace("MutualCoupling.distance12", &assign_MutualCoupling_distance12);
	assign_map.emplace("MutualCoupling.distance21", &assign_MutualCoupling_distance21);
	assign_map.emplace("MutualCoupling.distance22", &assign_MutualCoupling_distance22);
	assign_map.emplace("MutualCoupling.g0ch", &assign_MutualCoupling_g0ch);
	assign_map.emplace("MutualCoupling.r0", &assign_MutualCoupling_r0);
	assign_map.emplace("MutualCoupling.x0", &assign_MutualCoupling_x0);
}

void MutualCoupling::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("MutualCoupling.First_Terminal", &assign_MutualCoupling_First_Terminal);
	assign_map.emplace("MutualCoupling.Second_Terminal", &assign_MutualCoupling_Second_Terminal);
}

void MutualCoupling::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("MutualCoupling.b0ch", &get_MutualCoupling_b0ch);
	get_map.emplace("MutualCoupling.distance11", &get_MutualCoupling_distance11);
	get_map.emplace("MutualCoupling.distance12", &get_MutualCoupling_distance12);
	get_map.emplace("MutualCoupling.distance21", &get_MutualCoupling_distance21);
	get_map.emplace("MutualCoupling.distance22", &get_MutualCoupling_distance22);
	get_map.emplace("MutualCoupling.g0ch", &get_MutualCoupling_g0ch);
	get_map.emplace("MutualCoupling.r0", &get_MutualCoupling_r0);
	get_map.emplace("MutualCoupling.x0", &get_MutualCoupling_x0);
}

void MutualCoupling::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("MutualCoupling.First_Terminal", &get_MutualCoupling_First_Terminal);
	get_map.emplace("MutualCoupling.Second_Terminal", &get_MutualCoupling_Second_Terminal);
}

void MutualCoupling::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool MutualCoupling::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "MutualCoupling" &&
		dynamic_cast<MutualCoupling*>(otherObject) != nullptr;
}

const BaseClassDefiner MutualCoupling::declare()
{
	return BaseClassDefiner(MutualCoupling::addConstructToMap, MutualCoupling::addPrimitiveAssignFnsToMap, MutualCoupling::addClassAssignFnsToMap, MutualCoupling::debugName);
}

std::map<std::string, AttrDetails> MutualCoupling::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* MutualCoupling_factory()
	{
		return new MutualCoupling;
	}
}

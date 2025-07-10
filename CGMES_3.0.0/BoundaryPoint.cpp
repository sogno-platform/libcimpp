/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BoundaryPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConnectivityNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		BoundaryPoint(),
		"http://iec.ch/TC57/CIM100-European#",
		{
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "BoundaryPoint.ConnectivityNode", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.fromEndIsoCode", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.fromEndName", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.fromEndNameTso", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.isDirectCurrent", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.isExcludedFromAreaInterchange", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.toEndIsoCode", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.toEndName", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "BoundaryPoint.toEndNameTso", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

BoundaryPoint::BoundaryPoint() : ConnectivityNode(nullptr) {}
BoundaryPoint::~BoundaryPoint() {}

const std::list<std::string>& BoundaryPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& BoundaryPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& BoundaryPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& BoundaryPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& BoundaryPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& BoundaryPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& BoundaryPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ConnectivityNode_BoundaryPoint(BaseClass*, BaseClass*);
bool assign_BoundaryPoint_ConnectivityNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	ConnectivityNode* element2 = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConnectivityNode != element2)
		{
			element->ConnectivityNode = element2;
			return assign_ConnectivityNode_BoundaryPoint(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_BoundaryPoint_fromEndIsoCode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndIsoCode = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_fromEndName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_fromEndNameTso(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndNameTso = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_isDirectCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isDirectCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_isExcludedFromAreaInterchange(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isExcludedFromAreaInterchange;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_toEndIsoCode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndIsoCode = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_toEndName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_BoundaryPoint_toEndNameTso(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndNameTso = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_BoundaryPoint_ConnectivityNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ConnectivityNode != 0)
		{
			BaseClass_list.push_back(element->ConnectivityNode);
			return true;
		}
	}
	return false;
}

bool get_BoundaryPoint_fromEndIsoCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fromEndIsoCode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_fromEndName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fromEndName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_fromEndNameTso(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fromEndNameTso;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_isDirectCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isDirectCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_isExcludedFromAreaInterchange(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isExcludedFromAreaInterchange;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_toEndIsoCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toEndIsoCode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_toEndName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toEndName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BoundaryPoint_toEndNameTso(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toEndNameTso;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char BoundaryPoint::debugName[] = "BoundaryPoint";
const char* BoundaryPoint::debugString() const
{
	return BoundaryPoint::debugName;
}

void BoundaryPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("BoundaryPoint", &BoundaryPoint_factory);
}

void BoundaryPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("BoundaryPoint.fromEndIsoCode", &assign_BoundaryPoint_fromEndIsoCode);
	assign_map.emplace("BoundaryPoint.fromEndName", &assign_BoundaryPoint_fromEndName);
	assign_map.emplace("BoundaryPoint.fromEndNameTso", &assign_BoundaryPoint_fromEndNameTso);
	assign_map.emplace("BoundaryPoint.isDirectCurrent", &assign_BoundaryPoint_isDirectCurrent);
	assign_map.emplace("BoundaryPoint.isExcludedFromAreaInterchange", &assign_BoundaryPoint_isExcludedFromAreaInterchange);
	assign_map.emplace("BoundaryPoint.toEndIsoCode", &assign_BoundaryPoint_toEndIsoCode);
	assign_map.emplace("BoundaryPoint.toEndName", &assign_BoundaryPoint_toEndName);
	assign_map.emplace("BoundaryPoint.toEndNameTso", &assign_BoundaryPoint_toEndNameTso);
}

void BoundaryPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("BoundaryPoint.ConnectivityNode", &assign_BoundaryPoint_ConnectivityNode);
}

void BoundaryPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("BoundaryPoint.fromEndIsoCode", &get_BoundaryPoint_fromEndIsoCode);
	get_map.emplace("BoundaryPoint.fromEndName", &get_BoundaryPoint_fromEndName);
	get_map.emplace("BoundaryPoint.fromEndNameTso", &get_BoundaryPoint_fromEndNameTso);
	get_map.emplace("BoundaryPoint.isDirectCurrent", &get_BoundaryPoint_isDirectCurrent);
	get_map.emplace("BoundaryPoint.isExcludedFromAreaInterchange", &get_BoundaryPoint_isExcludedFromAreaInterchange);
	get_map.emplace("BoundaryPoint.toEndIsoCode", &get_BoundaryPoint_toEndIsoCode);
	get_map.emplace("BoundaryPoint.toEndName", &get_BoundaryPoint_toEndName);
	get_map.emplace("BoundaryPoint.toEndNameTso", &get_BoundaryPoint_toEndNameTso);
}

void BoundaryPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("BoundaryPoint.ConnectivityNode", &get_BoundaryPoint_ConnectivityNode);
}

void BoundaryPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool BoundaryPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "BoundaryPoint" &&
		dynamic_cast<BoundaryPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner BoundaryPoint::declare()
{
	return BaseClassDefiner(BoundaryPoint::addConstructToMap, BoundaryPoint::addPrimitiveAssignFnsToMap, BoundaryPoint::addClassAssignFnsToMap, BoundaryPoint::debugName);
}

std::map<std::string, AttrDetails> BoundaryPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* BoundaryPoint_factory()
	{
		return new BoundaryPoint;
	}
}

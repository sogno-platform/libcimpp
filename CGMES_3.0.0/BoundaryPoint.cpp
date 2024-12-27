/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BoundaryPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConnectivityNode.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

BoundaryPoint::BoundaryPoint() : ConnectivityNode(nullptr) {};
BoundaryPoint::~BoundaryPoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BoundaryPoint.ConnectivityNode", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.fromEndIsoCode", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.fromEndName", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.fromEndNameTso", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.isDirectCurrent", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.isExcludedFromAreaInterchange", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.toEndIsoCode", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.toEndName", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:BoundaryPoint.toEndNameTso", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
BoundaryPoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BoundaryPoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_BoundaryPoint_fromEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndIsoCode = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_fromEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_fromEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->fromEndNameTso = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_isDirectCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		buffer >> element->isDirectCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_isExcludedFromAreaInterchange(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		buffer >> element->isExcludedFromAreaInterchange;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndIsoCode = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndName = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BoundaryPoint_toEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BoundaryPoint* element = dynamic_cast<BoundaryPoint*>(BaseClass_ptr1))
	{
		element->toEndNameTso = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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

bool get_BoundaryPoint_fromEndIsoCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
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


bool get_BoundaryPoint_ConnectivityNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const BoundaryPoint* element = dynamic_cast<const BoundaryPoint*>(BaseClass_ptr1))
	{
		if (element->ConnectivityNode != 0)
		{
			BaseClass_list.push_back(element->ConnectivityNode);
			return true;
		}
	}
	return false;
}


const char BoundaryPoint::debugName[] = "BoundaryPoint";
const char* BoundaryPoint::debugString() const
{
	return BoundaryPoint::debugName;
}

void BoundaryPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BoundaryPoint"), &BoundaryPoint_factory));
}

void BoundaryPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndIsoCode"), &assign_BoundaryPoint_fromEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndName"), &assign_BoundaryPoint_fromEndName));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.fromEndNameTso"), &assign_BoundaryPoint_fromEndNameTso));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.isDirectCurrent"), &assign_BoundaryPoint_isDirectCurrent));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.isExcludedFromAreaInterchange"), &assign_BoundaryPoint_isExcludedFromAreaInterchange));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndIsoCode"), &assign_BoundaryPoint_toEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndName"), &assign_BoundaryPoint_toEndName));
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.toEndNameTso"), &assign_BoundaryPoint_toEndNameTso));
}

void BoundaryPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BoundaryPoint.ConnectivityNode"), &assign_BoundaryPoint_ConnectivityNode));
}

void BoundaryPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BoundaryPoint.fromEndIsoCode", &get_BoundaryPoint_fromEndIsoCode);
	get_map.emplace("cim:BoundaryPoint.fromEndName", &get_BoundaryPoint_fromEndName);
	get_map.emplace("cim:BoundaryPoint.fromEndNameTso", &get_BoundaryPoint_fromEndNameTso);
	get_map.emplace("cim:BoundaryPoint.isDirectCurrent", &get_BoundaryPoint_isDirectCurrent);
	get_map.emplace("cim:BoundaryPoint.isExcludedFromAreaInterchange", &get_BoundaryPoint_isExcludedFromAreaInterchange);
	get_map.emplace("cim:BoundaryPoint.toEndIsoCode", &get_BoundaryPoint_toEndIsoCode);
	get_map.emplace("cim:BoundaryPoint.toEndName", &get_BoundaryPoint_toEndName);
	get_map.emplace("cim:BoundaryPoint.toEndNameTso", &get_BoundaryPoint_toEndNameTso);
}

void BoundaryPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:BoundaryPoint.ConnectivityNode", &get_BoundaryPoint_ConnectivityNode);
}

void BoundaryPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner BoundaryPoint::declare()
{
	return BaseClassDefiner(BoundaryPoint::addConstructToMap, BoundaryPoint::addPrimitiveAssignFnsToMap, BoundaryPoint::addClassAssignFnsToMap, BoundaryPoint::debugName);
}

namespace CIMPP
{
	BaseClass* BoundaryPoint_factory()
	{
		return new BoundaryPoint;
	}
}

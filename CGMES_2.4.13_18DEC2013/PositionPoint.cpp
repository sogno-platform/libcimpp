/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PositionPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Location.hpp"
#include "Integer.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

PositionPoint::PositionPoint() : Location(nullptr) {};
PositionPoint::~PositionPoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PositionPoint.Location", { CGMESProfile::GL, } },
	{ "cim:PositionPoint.sequenceNumber", { CGMESProfile::GL, } },
	{ "cim:PositionPoint.xPosition", { CGMESProfile::GL, } },
	{ "cim:PositionPoint.yPosition", { CGMESProfile::GL, } },
	{ "cim:PositionPoint.zPosition", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
PositionPoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PositionPoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_PositionPoint_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		buffer >> element->sequenceNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_xPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		element->xPosition = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_yPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		element->yPosition = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PositionPoint_zPosition(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1))
	{
		element->zPosition = buffer.str();
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Location_PositionPoints(BaseClass*, BaseClass*);
bool assign_PositionPoint_Location(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PositionPoint* element = dynamic_cast<PositionPoint*>(BaseClass_ptr1);
	Location* element2 = dynamic_cast<Location*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Location != element2)
		{
			element->Location = element2;
			return assign_Location_PositionPoints(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PositionPoint_sequenceNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1))
	{
		buffer << element->sequenceNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PositionPoint_xPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1))
	{
		buffer << element->xPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PositionPoint_yPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1))
	{
		buffer << element->yPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PositionPoint_zPosition(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1))
	{
		buffer << element->zPosition;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_PositionPoint_Location(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const PositionPoint* element = dynamic_cast<const PositionPoint*>(BaseClass_ptr1))
	{
		if (element->Location != 0)
		{
			BaseClass_list.push_back(element->Location);
			return true;
		}
	}
	return false;
}


const char PositionPoint::debugName[] = "PositionPoint";
const char* PositionPoint::debugString() const
{
	return PositionPoint::debugName;
}

void PositionPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PositionPoint"), &PositionPoint_factory));
}

void PositionPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.sequenceNumber"), &assign_PositionPoint_sequenceNumber));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.xPosition"), &assign_PositionPoint_xPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.yPosition"), &assign_PositionPoint_yPosition));
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.zPosition"), &assign_PositionPoint_zPosition));
}

void PositionPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PositionPoint.Location"), &assign_PositionPoint_Location));
}

void PositionPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PositionPoint.sequenceNumber", &get_PositionPoint_sequenceNumber);
	get_map.emplace("cim:PositionPoint.xPosition", &get_PositionPoint_xPosition);
	get_map.emplace("cim:PositionPoint.yPosition", &get_PositionPoint_yPosition);
	get_map.emplace("cim:PositionPoint.zPosition", &get_PositionPoint_zPosition);
}

void PositionPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PositionPoint.Location", &get_PositionPoint_Location);
}

void PositionPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PositionPoint::declare()
{
	return BaseClassDefiner(PositionPoint::addConstructToMap, PositionPoint::addPrimitiveAssignFnsToMap, PositionPoint::addClassAssignFnsToMap, PositionPoint::debugName);
}

namespace CIMPP
{
	BaseClass* PositionPoint_factory()
	{
		return new PositionPoint;
	}
}

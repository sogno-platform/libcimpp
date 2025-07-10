/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChangerTablePoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TapChangerTablePoint(),
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
		{ "TapChangerTablePoint.b", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChangerTablePoint.g", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChangerTablePoint.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChangerTablePoint.ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChangerTablePoint.step", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChangerTablePoint.x", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

TapChangerTablePoint::TapChangerTablePoint() {}
TapChangerTablePoint::~TapChangerTablePoint() {}

const std::list<std::string>& TapChangerTablePoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TapChangerTablePoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TapChangerTablePoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TapChangerTablePoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TapChangerTablePoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TapChangerTablePoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TapChangerTablePoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TapChangerTablePoint_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChangerTablePoint_g(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->g;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChangerTablePoint_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
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

bool assign_TapChangerTablePoint_ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChangerTablePoint_step(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->step;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChangerTablePoint_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChangerTablePoint* element = dynamic_cast<TapChangerTablePoint*>(BaseClass_ptr1);
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

bool get_TapChangerTablePoint_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_g(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->g;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
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

bool get_TapChangerTablePoint_ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_step(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->step;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChangerTablePoint_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChangerTablePoint* element = dynamic_cast<const TapChangerTablePoint*>(BaseClass_ptr1);
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

const char TapChangerTablePoint::debugName[] = "TapChangerTablePoint";
const char* TapChangerTablePoint::debugString() const
{
	return TapChangerTablePoint::debugName;
}

void TapChangerTablePoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TapChangerTablePoint", &TapChangerTablePoint_factory);
}

void TapChangerTablePoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TapChangerTablePoint.b", &assign_TapChangerTablePoint_b);
	assign_map.emplace("TapChangerTablePoint.g", &assign_TapChangerTablePoint_g);
	assign_map.emplace("TapChangerTablePoint.r", &assign_TapChangerTablePoint_r);
	assign_map.emplace("TapChangerTablePoint.ratio", &assign_TapChangerTablePoint_ratio);
	assign_map.emplace("TapChangerTablePoint.step", &assign_TapChangerTablePoint_step);
	assign_map.emplace("TapChangerTablePoint.x", &assign_TapChangerTablePoint_x);
}

void TapChangerTablePoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TapChangerTablePoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TapChangerTablePoint.b", &get_TapChangerTablePoint_b);
	get_map.emplace("TapChangerTablePoint.g", &get_TapChangerTablePoint_g);
	get_map.emplace("TapChangerTablePoint.r", &get_TapChangerTablePoint_r);
	get_map.emplace("TapChangerTablePoint.ratio", &get_TapChangerTablePoint_ratio);
	get_map.emplace("TapChangerTablePoint.step", &get_TapChangerTablePoint_step);
	get_map.emplace("TapChangerTablePoint.x", &get_TapChangerTablePoint_x);
}

void TapChangerTablePoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void TapChangerTablePoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool TapChangerTablePoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TapChangerTablePoint" &&
		dynamic_cast<TapChangerTablePoint*>(otherObject) != nullptr;
}

const BaseClassDefiner TapChangerTablePoint::declare()
{
	return BaseClassDefiner(TapChangerTablePoint::addConstructToMap, TapChangerTablePoint::addPrimitiveAssignFnsToMap, TapChangerTablePoint::addClassAssignFnsToMap, TapChangerTablePoint::debugName);
}

std::map<std::string, AttrDetails> TapChangerTablePoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TapChangerTablePoint_factory()
	{
		return new TapChangerTablePoint;
	}
}

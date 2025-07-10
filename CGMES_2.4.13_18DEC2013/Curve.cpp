/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Curve.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CurveData.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Curve(),
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
		{ "Curve.CurveDatas", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Curve.curveStyle", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Curve.xUnit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Curve.y1Unit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Curve.y2Unit", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Curve::Curve() {}
Curve::~Curve() {}

const std::list<std::string>& Curve::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Curve::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Curve::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Curve::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Curve::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Curve::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Curve::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CurveData_Curve(BaseClass*, BaseClass*);
bool assign_Curve_CurveDatas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1);
	CurveData* element2 = dynamic_cast<CurveData*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->CurveDatas.begin(), element->CurveDatas.end(), element2) == element->CurveDatas.end())
		{
			element->CurveDatas.push_back(element2);
			return assign_CurveData_Curve(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Curve_curveStyle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->curveStyle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Curve_xUnit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xUnit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Curve_y1Unit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y1Unit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Curve_y2Unit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Curve* element = dynamic_cast<Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y2Unit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_Curve_curveStyle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Curve* element = dynamic_cast<const Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->curveStyle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Curve_xUnit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Curve* element = dynamic_cast<const Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xUnit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Curve_y1Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Curve* element = dynamic_cast<const Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->y1Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Curve_y2Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Curve* element = dynamic_cast<const Curve*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->y2Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Curve::debugName[] = "Curve";
const char* Curve::debugString() const
{
	return Curve::debugName;
}

void Curve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Curve", &Curve_factory);
}

void Curve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Curve.curveStyle", &assign_Curve_curveStyle);
	assign_map.emplace("Curve.xUnit", &assign_Curve_xUnit);
	assign_map.emplace("Curve.y1Unit", &assign_Curve_y1Unit);
	assign_map.emplace("Curve.y2Unit", &assign_Curve_y2Unit);
}

void Curve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Curve.CurveDatas", &assign_Curve_CurveDatas);
}

void Curve::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void Curve::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void Curve::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("Curve.curveStyle", &get_Curve_curveStyle);
	get_map.emplace("Curve.xUnit", &get_Curve_xUnit);
	get_map.emplace("Curve.y1Unit", &get_Curve_y1Unit);
	get_map.emplace("Curve.y2Unit", &get_Curve_y2Unit);
}

bool Curve::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Curve" &&
		dynamic_cast<Curve*>(otherObject) != nullptr;
}

const BaseClassDefiner Curve::declare()
{
	return BaseClassDefiner(Curve::addConstructToMap, Curve::addPrimitiveAssignFnsToMap, Curve::addClassAssignFnsToMap, Curve::debugName);
}

std::map<std::string, AttrDetails> Curve::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Curve_factory()
	{
		return new Curve;
	}
}

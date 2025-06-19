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

Curve::Curve() {}
Curve::~Curve() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Curve.CurveDatas", { CGMESProfile::EQ, } },
	{ "cim:Curve.curveStyle", { CGMESProfile::EQ, } },
	{ "cim:Curve.xUnit", { CGMESProfile::EQ, } },
	{ "cim:Curve.y1Unit", { CGMESProfile::EQ, } },
	{ "cim:Curve.y2Unit", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Curve::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Curve::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:Curve", &Curve_factory);
}

void Curve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Curve.curveStyle", &assign_Curve_curveStyle);
	assign_map.emplace("cim:Curve.xUnit", &assign_Curve_xUnit);
	assign_map.emplace("cim:Curve.y1Unit", &assign_Curve_y1Unit);
	assign_map.emplace("cim:Curve.y2Unit", &assign_Curve_y2Unit);
}

void Curve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Curve.CurveDatas", &assign_Curve_CurveDatas);
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
	get_map.emplace("cim:Curve.curveStyle", &get_Curve_curveStyle);
	get_map.emplace("cim:Curve.xUnit", &get_Curve_xUnit);
	get_map.emplace("cim:Curve.y1Unit", &get_Curve_y1Unit);
	get_map.emplace("cim:Curve.y2Unit", &get_Curve_y2Unit);
}

const BaseClassDefiner Curve::declare()
{
	return BaseClassDefiner(Curve::addConstructToMap, Curve::addPrimitiveAssignFnsToMap, Curve::addClassAssignFnsToMap, Curve::debugName);
}

namespace CIMPP
{
	BaseClass* Curve_factory()
	{
		return new Curve;
	}
}

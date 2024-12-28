/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurveData.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Curve.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

CurveData::CurveData() : Curve(nullptr) {};
CurveData::~CurveData() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CurveData.Curve", { CGMESProfile::EQ, } },
	{ "cim:CurveData.xvalue", { CGMESProfile::EQ, } },
	{ "cim:CurveData.y1value", { CGMESProfile::EQ, } },
	{ "cim:CurveData.y2value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
CurveData::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CurveData::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_CurveData_xvalue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1))
	{
		buffer >> element->xvalue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CurveData_y1value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1))
	{
		buffer >> element->y1value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CurveData_y2value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1))
	{
		buffer >> element->y2value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Curve_CurveDatas(BaseClass*, BaseClass*);
bool assign_CurveData_Curve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1);
	Curve* element2 = dynamic_cast<Curve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Curve != element2)
		{
			element->Curve = element2;
			return assign_Curve_CurveDatas(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_CurveData_xvalue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1))
	{
		buffer << element->xvalue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CurveData_y1value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1))
	{
		buffer << element->y1value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CurveData_y2value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1))
	{
		buffer << element->y2value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_CurveData_Curve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1))
	{
		if (element->Curve != 0)
		{
			BaseClass_list.push_back(element->Curve);
			return true;
		}
	}
	return false;
}


const char CurveData::debugName[] = "CurveData";
const char* CurveData::debugString() const
{
	return CurveData::debugName;
}

void CurveData::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CurveData"), &CurveData_factory));
}

void CurveData::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CurveData.xvalue"), &assign_CurveData_xvalue));
	assign_map.insert(std::make_pair(std::string("cim:CurveData.y1value"), &assign_CurveData_y1value));
	assign_map.insert(std::make_pair(std::string("cim:CurveData.y2value"), &assign_CurveData_y2value));
}

void CurveData::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CurveData.Curve"), &assign_CurveData_Curve));
}

void CurveData::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:CurveData.xvalue", &get_CurveData_xvalue);
	get_map.emplace("cim:CurveData.y1value", &get_CurveData_y1value);
	get_map.emplace("cim:CurveData.y2value", &get_CurveData_y2value);
}

void CurveData::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:CurveData.Curve", &get_CurveData_Curve);
}

void CurveData::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner CurveData::declare()
{
	return BaseClassDefiner(CurveData::addConstructToMap, CurveData::addPrimitiveAssignFnsToMap, CurveData::addClassAssignFnsToMap, CurveData::debugName);
}

namespace CIMPP
{
	BaseClass* CurveData_factory()
	{
		return new CurveData;
	}
}

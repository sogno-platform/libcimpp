/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurveData.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Curve.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CurveData(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "CurveData.Curve", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "CurveData.xvalue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "CurveData.y1value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "CurveData.y2value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

CurveData::CurveData() : Curve(nullptr) {}
CurveData::~CurveData() {}

const std::list<std::string>& CurveData::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CurveData::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CurveData::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CurveData::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CurveData::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CurveData::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CurveData::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_CurveData_xvalue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xvalue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CurveData_y1value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y1value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_CurveData_y2value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CurveData* element = dynamic_cast<CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y2value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_CurveData_Curve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Curve != 0)
		{
			BaseClass_list.push_back(element->Curve);
			return true;
		}
	}
	return false;
}

bool get_CurveData_xvalue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const CurveData* element = dynamic_cast<const CurveData*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char CurveData::debugName[] = "CurveData";
const char* CurveData::debugString() const
{
	return CurveData::debugName;
}

void CurveData::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CurveData", &CurveData_factory);
}

void CurveData::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("CurveData.xvalue", &assign_CurveData_xvalue);
	assign_map.emplace("CurveData.y1value", &assign_CurveData_y1value);
	assign_map.emplace("CurveData.y2value", &assign_CurveData_y2value);
}

void CurveData::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CurveData.Curve", &assign_CurveData_Curve);
}

void CurveData::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("CurveData.xvalue", &get_CurveData_xvalue);
	get_map.emplace("CurveData.y1value", &get_CurveData_y1value);
	get_map.emplace("CurveData.y2value", &get_CurveData_y2value);
}

void CurveData::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("CurveData.Curve", &get_CurveData_Curve);
}

void CurveData::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool CurveData::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CurveData" &&
		dynamic_cast<CurveData*>(otherObject) != nullptr;
}

const BaseClassDefiner CurveData::declare()
{
	return BaseClassDefiner(CurveData::addConstructToMap, CurveData::addPrimitiveAssignFnsToMap, CurveData::addClassAssignFnsToMap, CurveData::debugName);
}

std::map<std::string, AttrDetails> CurveData::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CurveData_factory()
	{
		return new CurveData;
	}
}

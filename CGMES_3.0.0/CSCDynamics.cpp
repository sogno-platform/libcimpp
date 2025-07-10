/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CSCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CsConverter.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CSCDynamics(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "CSCDynamics.CSConverter", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

CSCDynamics::CSCDynamics() : CSConverter(nullptr) {}
CSCDynamics::~CSCDynamics() {}

const std::list<std::string>& CSCDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CSCDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CSCDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CSCDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CSCDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CSCDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CSCDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CsConverter_CSCDynamics(BaseClass*, BaseClass*);
bool assign_CSCDynamics_CSConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CSCDynamics* element = dynamic_cast<CSCDynamics*>(BaseClass_ptr1);
	CsConverter* element2 = dynamic_cast<CsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CSConverter != element2)
		{
			element->CSConverter = element2;
			return assign_CsConverter_CSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_CSCDynamics_CSConverter(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const CSCDynamics* element = dynamic_cast<const CSCDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CSConverter != 0)
		{
			BaseClass_list.push_back(element->CSConverter);
			return true;
		}
	}
	return false;
}

const char CSCDynamics::debugName[] = "CSCDynamics";
const char* CSCDynamics::debugString() const
{
	return CSCDynamics::debugName;
}

void CSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CSCDynamics", &CSCDynamics_factory);
}

void CSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CSCDynamics.CSConverter", &assign_CSCDynamics_CSConverter);
}

void CSCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addPrimitiveGetFnsToMap(get_map);
}

void CSCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	HVDCDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("CSCDynamics.CSConverter", &get_CSCDynamics_CSConverter);
}

void CSCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addEnumGetFnsToMap(get_map);
}

bool CSCDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CSCDynamics" &&
		dynamic_cast<CSCDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner CSCDynamics::declare()
{
	return BaseClassDefiner(CSCDynamics::addConstructToMap, CSCDynamics::addPrimitiveAssignFnsToMap, CSCDynamics::addClassAssignFnsToMap, CSCDynamics::debugName);
}

std::map<std::string, AttrDetails> CSCDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = HVDCDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CSCDynamics_factory()
	{
		return new CSCDynamics;
	}
}

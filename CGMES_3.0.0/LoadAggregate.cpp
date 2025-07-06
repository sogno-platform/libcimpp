/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadAggregate.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadMotor.hpp"
#include "LoadStatic.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadAggregate(),
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
		{ "LoadAggregate.LoadMotor", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "LoadAggregate.LoadStatic", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

LoadAggregate::LoadAggregate() : LoadMotor(nullptr), LoadStatic(nullptr) {}
LoadAggregate::~LoadAggregate() {}

const std::list<std::string>& LoadAggregate::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadAggregate::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadAggregate::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadAggregate::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadAggregate::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadAggregate::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadAggregate::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_LoadMotor_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadMotor(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadMotor* element2 = dynamic_cast<LoadMotor*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadMotor != element2)
		{
			element->LoadMotor = element2;
			return assign_LoadMotor_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadStatic_LoadAggregate(BaseClass*, BaseClass*);
bool assign_LoadAggregate_LoadStatic(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadAggregate* element = dynamic_cast<LoadAggregate*>(BaseClass_ptr1);
	LoadStatic* element2 = dynamic_cast<LoadStatic*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadStatic != element2)
		{
			element->LoadStatic = element2;
			return assign_LoadStatic_LoadAggregate(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char LoadAggregate::debugName[] = "LoadAggregate";
const char* LoadAggregate::debugString() const
{
	return LoadAggregate::debugName;
}

void LoadAggregate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadAggregate", &LoadAggregate_factory);
}

void LoadAggregate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadAggregate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("LoadAggregate.LoadMotor", &assign_LoadAggregate_LoadMotor);
	assign_map.emplace("LoadAggregate.LoadStatic", &assign_LoadAggregate_LoadStatic);
}

void LoadAggregate::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addPrimitiveGetFnsToMap(get_map);
}

void LoadAggregate::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadDynamics::addClassGetFnsToMap(get_map);
}

void LoadAggregate::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadDynamics::addEnumGetFnsToMap(get_map);
}

bool LoadAggregate::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadAggregate" &&
		dynamic_cast<LoadAggregate*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadAggregate::declare()
{
	return BaseClassDefiner(LoadAggregate::addConstructToMap, LoadAggregate::addPrimitiveAssignFnsToMap, LoadAggregate::addClassAssignFnsToMap, LoadAggregate::debugName);
}

std::map<std::string, AttrDetails> LoadAggregate::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = LoadDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadAggregate_factory()
	{
		return new LoadAggregate;
	}
}

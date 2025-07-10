/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GenICompensationForGenJ.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"
#include "VCompIEEEType2.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GenICompensationForGenJ(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "GenICompensationForGenJ.SynchronousMachineDynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GenICompensationForGenJ.VcompIEEEType2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GenICompensationForGenJ.rcij", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GenICompensationForGenJ.xcij", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GenICompensationForGenJ::GenICompensationForGenJ() : SynchronousMachineDynamics(nullptr), VcompIEEEType2(nullptr) {}
GenICompensationForGenJ::~GenICompensationForGenJ() {}

const std::list<std::string>& GenICompensationForGenJ::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GenICompensationForGenJ::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GenICompensationForGenJ::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GenICompensationForGenJ::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GenICompensationForGenJ::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GenICompensationForGenJ::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GenICompensationForGenJ::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass*, BaseClass*);
bool assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass*, BaseClass*);
bool assign_GenICompensationForGenJ_VcompIEEEType2(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	VCompIEEEType2* element2 = dynamic_cast<VCompIEEEType2*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VcompIEEEType2 != element2)
		{
			element->VcompIEEEType2 = element2;
			return assign_VCompIEEEType2_GenICompensationForGenJ(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_rcij(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rcij;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GenICompensationForGenJ_xcij(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GenICompensationForGenJ* element = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xcij;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GenICompensationForGenJ_SynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_GenICompensationForGenJ_VcompIEEEType2(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VcompIEEEType2 != 0)
		{
			BaseClass_list.push_back(element->VcompIEEEType2);
			return true;
		}
	}
	return false;
}

bool get_GenICompensationForGenJ_rcij(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rcij;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GenICompensationForGenJ_xcij(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GenICompensationForGenJ* element = dynamic_cast<const GenICompensationForGenJ*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xcij;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GenICompensationForGenJ::debugName[] = "GenICompensationForGenJ";
const char* GenICompensationForGenJ::debugString() const
{
	return GenICompensationForGenJ::debugName;
}

void GenICompensationForGenJ::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GenICompensationForGenJ", &GenICompensationForGenJ_factory);
}

void GenICompensationForGenJ::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GenICompensationForGenJ.rcij", &assign_GenICompensationForGenJ_rcij);
	assign_map.emplace("GenICompensationForGenJ.xcij", &assign_GenICompensationForGenJ_xcij);
}

void GenICompensationForGenJ::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("GenICompensationForGenJ.SynchronousMachineDynamics", &assign_GenICompensationForGenJ_SynchronousMachineDynamics);
	assign_map.emplace("GenICompensationForGenJ.VcompIEEEType2", &assign_GenICompensationForGenJ_VcompIEEEType2);
}

void GenICompensationForGenJ::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GenICompensationForGenJ.rcij", &get_GenICompensationForGenJ_rcij);
	get_map.emplace("GenICompensationForGenJ.xcij", &get_GenICompensationForGenJ_xcij);
}

void GenICompensationForGenJ::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("GenICompensationForGenJ.SynchronousMachineDynamics", &get_GenICompensationForGenJ_SynchronousMachineDynamics);
	get_map.emplace("GenICompensationForGenJ.VcompIEEEType2", &get_GenICompensationForGenJ_VcompIEEEType2);
}

void GenICompensationForGenJ::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool GenICompensationForGenJ::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GenICompensationForGenJ" &&
		dynamic_cast<GenICompensationForGenJ*>(otherObject) != nullptr;
}

const BaseClassDefiner GenICompensationForGenJ::declare()
{
	return BaseClassDefiner(GenICompensationForGenJ::addConstructToMap, GenICompensationForGenJ::addPrimitiveAssignFnsToMap, GenICompensationForGenJ::addClassAssignFnsToMap, GenICompensationForGenJ::debugName);
}

std::map<std::string, AttrDetails> GenICompensationForGenJ::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GenICompensationForGenJ_factory()
	{
		return new GenICompensationForGenJ;
	}
}

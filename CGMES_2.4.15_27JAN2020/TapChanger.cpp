/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapChanger.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SvTapStep.hpp"
#include "TapChangerControl.hpp"
#include "TapSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TapChanger(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SV,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TapChanger.SvTapStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "TapChanger.TapChangerControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.TapSchedules", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.controlEnabled", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "TapChanger.highStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.lowStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.ltcFlag", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.neutralStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.neutralU", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.normalStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "TapChanger.step", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

TapChanger::TapChanger() : SvTapStep(nullptr), TapChangerControl(nullptr) {}
TapChanger::~TapChanger() {}

const std::list<std::string>& TapChanger::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TapChanger::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TapChanger::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TapChanger::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TapChanger::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TapChanger::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TapChanger::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SvTapStep_TapChanger(BaseClass*, BaseClass*);
bool assign_TapChanger_SvTapStep(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	SvTapStep* element2 = dynamic_cast<SvTapStep*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvTapStep != element2)
		{
			element->SvTapStep = element2;
			return assign_SvTapStep_TapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TapChangerControl_TapChanger(BaseClass*, BaseClass*);
bool assign_TapChanger_TapChangerControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	TapChangerControl* element2 = dynamic_cast<TapChangerControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TapChangerControl != element2)
		{
			element->TapChangerControl = element2;
			return assign_TapChangerControl_TapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TapSchedule_TapChanger(BaseClass*, BaseClass*);
bool assign_TapChanger_TapSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	TapSchedule* element2 = dynamic_cast<TapSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TapSchedules.begin(), element->TapSchedules.end(), element2) == element->TapSchedules.end())
		{
			element->TapSchedules.push_back(element2);
			return assign_TapSchedule_TapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TapChanger_controlEnabled(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->controlEnabled;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_highStep(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->highStep;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_lowStep(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lowStep;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_ltcFlag(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ltcFlag;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_neutralStep(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->neutralStep;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_neutralU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->neutralU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_normalStep(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalStep;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TapChanger_step(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1);
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


bool get_TapChanger_TapChangerControl(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TapChangerControl != 0)
		{
			BaseClass_list.push_back(element->TapChangerControl);
			return true;
		}
	}
	return false;
}


bool get_TapChanger_controlEnabled(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->controlEnabled;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_highStep(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->highStep;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_lowStep(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lowStep;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_ltcFlag(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ltcFlag;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_neutralStep(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->neutralStep;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_neutralU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->neutralU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_normalStep(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalStep;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TapChanger_step(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TapChanger* element = dynamic_cast<const TapChanger*>(BaseClass_ptr1);
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

const char TapChanger::debugName[] = "TapChanger";
const char* TapChanger::debugString() const
{
	return TapChanger::debugName;
}

void TapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TapChanger", &TapChanger_factory);
}

void TapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TapChanger.controlEnabled", &assign_TapChanger_controlEnabled);
	assign_map.emplace("TapChanger.highStep", &assign_TapChanger_highStep);
	assign_map.emplace("TapChanger.lowStep", &assign_TapChanger_lowStep);
	assign_map.emplace("TapChanger.ltcFlag", &assign_TapChanger_ltcFlag);
	assign_map.emplace("TapChanger.neutralStep", &assign_TapChanger_neutralStep);
	assign_map.emplace("TapChanger.neutralU", &assign_TapChanger_neutralU);
	assign_map.emplace("TapChanger.normalStep", &assign_TapChanger_normalStep);
	assign_map.emplace("TapChanger.step", &assign_TapChanger_step);
}

void TapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TapChanger.SvTapStep", &assign_TapChanger_SvTapStep);
	assign_map.emplace("TapChanger.TapChangerControl", &assign_TapChanger_TapChangerControl);
	assign_map.emplace("TapChanger.TapSchedules", &assign_TapChanger_TapSchedules);
}

void TapChanger::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TapChanger.controlEnabled", &get_TapChanger_controlEnabled);
	get_map.emplace("TapChanger.highStep", &get_TapChanger_highStep);
	get_map.emplace("TapChanger.lowStep", &get_TapChanger_lowStep);
	get_map.emplace("TapChanger.ltcFlag", &get_TapChanger_ltcFlag);
	get_map.emplace("TapChanger.neutralStep", &get_TapChanger_neutralStep);
	get_map.emplace("TapChanger.neutralU", &get_TapChanger_neutralU);
	get_map.emplace("TapChanger.normalStep", &get_TapChanger_normalStep);
	get_map.emplace("TapChanger.step", &get_TapChanger_step);
}

void TapChanger::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("TapChanger.TapChangerControl", &get_TapChanger_TapChangerControl);
}

void TapChanger::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool TapChanger::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TapChanger" &&
		dynamic_cast<TapChanger*>(otherObject) != nullptr;
}

const BaseClassDefiner TapChanger::declare()
{
	return BaseClassDefiner(TapChanger::addConstructToMap, TapChanger::addPrimitiveAssignFnsToMap, TapChanger::addClassAssignFnsToMap, TapChanger::debugName);
}

std::map<std::string, AttrDetails> TapChanger::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TapChanger_factory()
	{
		return new TapChanger;
	}
}

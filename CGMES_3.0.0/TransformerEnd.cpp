/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TransformerEnd.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BaseVoltage.hpp"
#include "PhaseTapChanger.hpp"
#include "RatioTapChanger.hpp"
#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TransformerEnd(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TransformerEnd.BaseVoltage", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "TransformerEnd.PhaseTapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "TransformerEnd.RatioTapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "TransformerEnd.Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "TransformerEnd.endNumber", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "TransformerEnd.grounded", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "TransformerEnd.rground", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "TransformerEnd.xground", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

TransformerEnd::TransformerEnd() : BaseVoltage(nullptr), PhaseTapChanger(nullptr), RatioTapChanger(nullptr), Terminal(nullptr) {}
TransformerEnd::~TransformerEnd() {}

const std::list<std::string>& TransformerEnd::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TransformerEnd::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TransformerEnd::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TransformerEnd::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TransformerEnd::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TransformerEnd::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TransformerEnd::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BaseVoltage_TransformerEnds(BaseClass*, BaseClass*);
bool assign_TransformerEnd_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_TransformerEnds(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PhaseTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_PhaseTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	PhaseTapChanger* element2 = dynamic_cast<PhaseTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChanger != element2)
		{
			element->PhaseTapChanger = element2;
			return assign_PhaseTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RatioTapChanger_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_RatioTapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	RatioTapChanger* element2 = dynamic_cast<RatioTapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChanger != element2)
		{
			element->RatioTapChanger = element2;
			return assign_RatioTapChanger_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_TransformerEnd(BaseClass*, BaseClass*);
bool assign_TransformerEnd_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_TransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TransformerEnd_endNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->endNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TransformerEnd_grounded(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->grounded;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TransformerEnd_rground(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rground;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TransformerEnd_xground(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TransformerEnd* element = dynamic_cast<TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xground;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TransformerEnd_BaseVoltage(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->BaseVoltage != 0)
		{
			BaseClass_list.push_back(element->BaseVoltage);
			return true;
		}
	}
	return false;
}



bool get_TransformerEnd_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}

bool get_TransformerEnd_endNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->endNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_grounded(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->grounded;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_rground(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rground;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TransformerEnd_xground(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TransformerEnd* element = dynamic_cast<const TransformerEnd*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xground;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TransformerEnd::debugName[] = "TransformerEnd";
const char* TransformerEnd::debugString() const
{
	return TransformerEnd::debugName;
}

void TransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TransformerEnd", &TransformerEnd_factory);
}

void TransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TransformerEnd.endNumber", &assign_TransformerEnd_endNumber);
	assign_map.emplace("TransformerEnd.grounded", &assign_TransformerEnd_grounded);
	assign_map.emplace("TransformerEnd.rground", &assign_TransformerEnd_rground);
	assign_map.emplace("TransformerEnd.xground", &assign_TransformerEnd_xground);
}

void TransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TransformerEnd.BaseVoltage", &assign_TransformerEnd_BaseVoltage);
	assign_map.emplace("TransformerEnd.PhaseTapChanger", &assign_TransformerEnd_PhaseTapChanger);
	assign_map.emplace("TransformerEnd.RatioTapChanger", &assign_TransformerEnd_RatioTapChanger);
	assign_map.emplace("TransformerEnd.Terminal", &assign_TransformerEnd_Terminal);
}

void TransformerEnd::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TransformerEnd.endNumber", &get_TransformerEnd_endNumber);
	get_map.emplace("TransformerEnd.grounded", &get_TransformerEnd_grounded);
	get_map.emplace("TransformerEnd.rground", &get_TransformerEnd_rground);
	get_map.emplace("TransformerEnd.xground", &get_TransformerEnd_xground);
}

void TransformerEnd::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("TransformerEnd.BaseVoltage", &get_TransformerEnd_BaseVoltage);
	get_map.emplace("TransformerEnd.Terminal", &get_TransformerEnd_Terminal);
}

void TransformerEnd::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool TransformerEnd::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TransformerEnd" &&
		dynamic_cast<TransformerEnd*>(otherObject) != nullptr;
}

const BaseClassDefiner TransformerEnd::declare()
{
	return BaseClassDefiner(TransformerEnd::addConstructToMap, TransformerEnd::addPrimitiveAssignFnsToMap, TransformerEnd::addClassAssignFnsToMap, TransformerEnd::debugName);
}

std::map<std::string, AttrDetails> TransformerEnd::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TransformerEnd_factory()
	{
		return new TransformerEnd;
	}
}

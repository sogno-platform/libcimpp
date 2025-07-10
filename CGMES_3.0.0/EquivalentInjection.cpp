/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquivalentInjection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ReactiveCapabilityCurve.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquivalentInjection(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SC,
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
		{ "EquivalentInjection.ReactiveCapabilityCurve", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.maxP", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.maxQ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.minP", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.minQ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.p", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "EquivalentInjection.q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "EquivalentInjection.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "EquivalentInjection.r0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "EquivalentInjection.r2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "EquivalentInjection.regulationCapability", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "EquivalentInjection.regulationStatus", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "EquivalentInjection.regulationTarget", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "EquivalentInjection.x", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "EquivalentInjection.x0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
		{ "EquivalentInjection.x2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SC, } } },
	};
    return ClassAttrDetailsMap;
}

EquivalentInjection::EquivalentInjection() : ReactiveCapabilityCurve(nullptr) {}
EquivalentInjection::~EquivalentInjection() {}

const std::list<std::string>& EquivalentInjection::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquivalentInjection::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquivalentInjection::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquivalentInjection::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquivalentInjection::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquivalentInjection::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquivalentInjection::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass*, BaseClass*);
bool assign_EquivalentInjection_ReactiveCapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	ReactiveCapabilityCurve* element2 = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReactiveCapabilityCurve != element2)
		{
			element->ReactiveCapabilityCurve = element2;
			return assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_EquivalentInjection_maxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_maxQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxQ;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_minP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_minQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minQ;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
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

bool assign_EquivalentInjection_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_r2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_regulationCapability(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->regulationCapability;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_regulationStatus(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->regulationStatus;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_regulationTarget(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->regulationTarget;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
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

bool assign_EquivalentInjection_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EquivalentInjection_x2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EquivalentInjection* element = dynamic_cast<EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EquivalentInjection_ReactiveCapabilityCurve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ReactiveCapabilityCurve != 0)
		{
			BaseClass_list.push_back(element->ReactiveCapabilityCurve);
			return true;
		}
	}
	return false;
}

bool get_EquivalentInjection_maxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_maxQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_minP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_minQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minQ;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
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

bool get_EquivalentInjection_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_r2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationCapability(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->regulationCapability;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationStatus(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->regulationStatus;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_regulationTarget(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->regulationTarget;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
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

bool get_EquivalentInjection_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EquivalentInjection_x2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EquivalentInjection* element = dynamic_cast<const EquivalentInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EquivalentInjection::debugName[] = "EquivalentInjection";
const char* EquivalentInjection::debugString() const
{
	return EquivalentInjection::debugName;
}

void EquivalentInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EquivalentInjection", &EquivalentInjection_factory);
}

void EquivalentInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EquivalentInjection.maxP", &assign_EquivalentInjection_maxP);
	assign_map.emplace("EquivalentInjection.maxQ", &assign_EquivalentInjection_maxQ);
	assign_map.emplace("EquivalentInjection.minP", &assign_EquivalentInjection_minP);
	assign_map.emplace("EquivalentInjection.minQ", &assign_EquivalentInjection_minQ);
	assign_map.emplace("EquivalentInjection.p", &assign_EquivalentInjection_p);
	assign_map.emplace("EquivalentInjection.q", &assign_EquivalentInjection_q);
	assign_map.emplace("EquivalentInjection.r", &assign_EquivalentInjection_r);
	assign_map.emplace("EquivalentInjection.r0", &assign_EquivalentInjection_r0);
	assign_map.emplace("EquivalentInjection.r2", &assign_EquivalentInjection_r2);
	assign_map.emplace("EquivalentInjection.regulationCapability", &assign_EquivalentInjection_regulationCapability);
	assign_map.emplace("EquivalentInjection.regulationStatus", &assign_EquivalentInjection_regulationStatus);
	assign_map.emplace("EquivalentInjection.regulationTarget", &assign_EquivalentInjection_regulationTarget);
	assign_map.emplace("EquivalentInjection.x", &assign_EquivalentInjection_x);
	assign_map.emplace("EquivalentInjection.x0", &assign_EquivalentInjection_x0);
	assign_map.emplace("EquivalentInjection.x2", &assign_EquivalentInjection_x2);
}

void EquivalentInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EquivalentInjection.ReactiveCapabilityCurve", &assign_EquivalentInjection_ReactiveCapabilityCurve);
}

void EquivalentInjection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EquivalentInjection.maxP", &get_EquivalentInjection_maxP);
	get_map.emplace("EquivalentInjection.maxQ", &get_EquivalentInjection_maxQ);
	get_map.emplace("EquivalentInjection.minP", &get_EquivalentInjection_minP);
	get_map.emplace("EquivalentInjection.minQ", &get_EquivalentInjection_minQ);
	get_map.emplace("EquivalentInjection.p", &get_EquivalentInjection_p);
	get_map.emplace("EquivalentInjection.q", &get_EquivalentInjection_q);
	get_map.emplace("EquivalentInjection.r", &get_EquivalentInjection_r);
	get_map.emplace("EquivalentInjection.r0", &get_EquivalentInjection_r0);
	get_map.emplace("EquivalentInjection.r2", &get_EquivalentInjection_r2);
	get_map.emplace("EquivalentInjection.regulationCapability", &get_EquivalentInjection_regulationCapability);
	get_map.emplace("EquivalentInjection.regulationStatus", &get_EquivalentInjection_regulationStatus);
	get_map.emplace("EquivalentInjection.regulationTarget", &get_EquivalentInjection_regulationTarget);
	get_map.emplace("EquivalentInjection.x", &get_EquivalentInjection_x);
	get_map.emplace("EquivalentInjection.x0", &get_EquivalentInjection_x0);
	get_map.emplace("EquivalentInjection.x2", &get_EquivalentInjection_x2);
}

void EquivalentInjection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquivalentEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("EquivalentInjection.ReactiveCapabilityCurve", &get_EquivalentInjection_ReactiveCapabilityCurve);
}

void EquivalentInjection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquivalentEquipment::addEnumGetFnsToMap(get_map);
}

bool EquivalentInjection::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquivalentInjection" &&
		dynamic_cast<EquivalentInjection*>(otherObject) != nullptr;
}

const BaseClassDefiner EquivalentInjection::declare()
{
	return BaseClassDefiner(EquivalentInjection::addConstructToMap, EquivalentInjection::addPrimitiveAssignFnsToMap, EquivalentInjection::addClassAssignFnsToMap, EquivalentInjection::debugName);
}

std::map<std::string, AttrDetails> EquivalentInjection::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquivalentEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquivalentInjection_factory()
	{
		return new EquivalentInjection;
	}
}

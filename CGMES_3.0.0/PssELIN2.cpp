/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssELIN2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssELIN2(),
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
		{ "PssELIN2.apss", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ks1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ks2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ppss", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.psslim", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssELIN2.ts6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssELIN2::PssELIN2() {}
PssELIN2::~PssELIN2() {}

const std::list<std::string>& PssELIN2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssELIN2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssELIN2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssELIN2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssELIN2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssELIN2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssELIN2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PssELIN2_apss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->apss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ks1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ks2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ppss(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ppss;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_psslim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->psslim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssELIN2_ts6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssELIN2* element = dynamic_cast<PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PssELIN2_apss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->apss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ks1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ks2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ppss(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ppss;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_psslim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->psslim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssELIN2_ts6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssELIN2* element = dynamic_cast<const PssELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PssELIN2::debugName[] = "PssELIN2";
const char* PssELIN2::debugString() const
{
	return PssELIN2::debugName;
}

void PssELIN2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PssELIN2", &PssELIN2_factory);
}

void PssELIN2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssELIN2.apss", &assign_PssELIN2_apss);
	assign_map.emplace("PssELIN2.ks1", &assign_PssELIN2_ks1);
	assign_map.emplace("PssELIN2.ks2", &assign_PssELIN2_ks2);
	assign_map.emplace("PssELIN2.ppss", &assign_PssELIN2_ppss);
	assign_map.emplace("PssELIN2.psslim", &assign_PssELIN2_psslim);
	assign_map.emplace("PssELIN2.ts1", &assign_PssELIN2_ts1);
	assign_map.emplace("PssELIN2.ts2", &assign_PssELIN2_ts2);
	assign_map.emplace("PssELIN2.ts3", &assign_PssELIN2_ts3);
	assign_map.emplace("PssELIN2.ts4", &assign_PssELIN2_ts4);
	assign_map.emplace("PssELIN2.ts5", &assign_PssELIN2_ts5);
	assign_map.emplace("PssELIN2.ts6", &assign_PssELIN2_ts6);
}

void PssELIN2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssELIN2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssELIN2.apss", &get_PssELIN2_apss);
	get_map.emplace("PssELIN2.ks1", &get_PssELIN2_ks1);
	get_map.emplace("PssELIN2.ks2", &get_PssELIN2_ks2);
	get_map.emplace("PssELIN2.ppss", &get_PssELIN2_ppss);
	get_map.emplace("PssELIN2.psslim", &get_PssELIN2_psslim);
	get_map.emplace("PssELIN2.ts1", &get_PssELIN2_ts1);
	get_map.emplace("PssELIN2.ts2", &get_PssELIN2_ts2);
	get_map.emplace("PssELIN2.ts3", &get_PssELIN2_ts3);
	get_map.emplace("PssELIN2.ts4", &get_PssELIN2_ts4);
	get_map.emplace("PssELIN2.ts5", &get_PssELIN2_ts5);
	get_map.emplace("PssELIN2.ts6", &get_PssELIN2_ts6);
}

void PssELIN2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssELIN2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssELIN2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssELIN2" &&
		dynamic_cast<PssELIN2*>(otherObject) != nullptr;
}

const BaseClassDefiner PssELIN2::declare()
{
	return BaseClassDefiner(PssELIN2::addConstructToMap, PssELIN2::addPrimitiveAssignFnsToMap, PssELIN2::addClassAssignFnsToMap, PssELIN2::debugName);
}

std::map<std::string, AttrDetails> PssELIN2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssELIN2_factory()
	{
		return new PssELIN2;
	}
}

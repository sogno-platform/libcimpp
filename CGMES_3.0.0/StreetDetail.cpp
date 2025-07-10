/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StreetDetail.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StreetDetail(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "StreetDetail.addressGeneral", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.addressGeneral2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.addressGeneral3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.buildingName", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.code", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.floorIdentification", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.name", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.number", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.prefix", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.suffix", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.suiteNumber", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.type", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
		{ "StreetDetail.withinTownLimits", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::GL, } } },
	};
    return ClassAttrDetailsMap;
}

StreetDetail::StreetDetail() {}
StreetDetail::~StreetDetail() {}

const std::list<std::string>& StreetDetail::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StreetDetail::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StreetDetail::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StreetDetail::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StreetDetail::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StreetDetail::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StreetDetail::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StreetDetail_addressGeneral(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->addressGeneral = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_addressGeneral2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->addressGeneral2 = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_addressGeneral3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->addressGeneral3 = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_buildingName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->buildingName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_code(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->code = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_floorIdentification(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->floorIdentification = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_name(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->name = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_number(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->number = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_prefix(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->prefix = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_suffix(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->suffix = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_suiteNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->suiteNumber = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_type(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->type = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_StreetDetail_withinTownLimits(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StreetDetail* element = dynamic_cast<StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->withinTownLimits;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_StreetDetail_addressGeneral(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->addressGeneral;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_addressGeneral2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->addressGeneral2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_addressGeneral3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->addressGeneral3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_buildingName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->buildingName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_code(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->code;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_floorIdentification(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->floorIdentification;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_name(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->name;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_number(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->number;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_prefix(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->prefix;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_suffix(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->suffix;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_suiteNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->suiteNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_StreetDetail_withinTownLimits(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StreetDetail* element = dynamic_cast<const StreetDetail*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->withinTownLimits;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char StreetDetail::debugName[] = "StreetDetail";
const char* StreetDetail::debugString() const
{
	return StreetDetail::debugName;
}

void StreetDetail::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StreetDetail", &StreetDetail_factory);
}

void StreetDetail::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("StreetDetail.addressGeneral", &assign_StreetDetail_addressGeneral);
	assign_map.emplace("StreetDetail.addressGeneral2", &assign_StreetDetail_addressGeneral2);
	assign_map.emplace("StreetDetail.addressGeneral3", &assign_StreetDetail_addressGeneral3);
	assign_map.emplace("StreetDetail.buildingName", &assign_StreetDetail_buildingName);
	assign_map.emplace("StreetDetail.code", &assign_StreetDetail_code);
	assign_map.emplace("StreetDetail.floorIdentification", &assign_StreetDetail_floorIdentification);
	assign_map.emplace("StreetDetail.name", &assign_StreetDetail_name);
	assign_map.emplace("StreetDetail.number", &assign_StreetDetail_number);
	assign_map.emplace("StreetDetail.prefix", &assign_StreetDetail_prefix);
	assign_map.emplace("StreetDetail.suffix", &assign_StreetDetail_suffix);
	assign_map.emplace("StreetDetail.suiteNumber", &assign_StreetDetail_suiteNumber);
	assign_map.emplace("StreetDetail.type", &assign_StreetDetail_type);
	assign_map.emplace("StreetDetail.withinTownLimits", &assign_StreetDetail_withinTownLimits);
}

void StreetDetail::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StreetDetail::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("StreetDetail.addressGeneral", &get_StreetDetail_addressGeneral);
	get_map.emplace("StreetDetail.addressGeneral2", &get_StreetDetail_addressGeneral2);
	get_map.emplace("StreetDetail.addressGeneral3", &get_StreetDetail_addressGeneral3);
	get_map.emplace("StreetDetail.buildingName", &get_StreetDetail_buildingName);
	get_map.emplace("StreetDetail.code", &get_StreetDetail_code);
	get_map.emplace("StreetDetail.floorIdentification", &get_StreetDetail_floorIdentification);
	get_map.emplace("StreetDetail.name", &get_StreetDetail_name);
	get_map.emplace("StreetDetail.number", &get_StreetDetail_number);
	get_map.emplace("StreetDetail.prefix", &get_StreetDetail_prefix);
	get_map.emplace("StreetDetail.suffix", &get_StreetDetail_suffix);
	get_map.emplace("StreetDetail.suiteNumber", &get_StreetDetail_suiteNumber);
	get_map.emplace("StreetDetail.type", &get_StreetDetail_type);
	get_map.emplace("StreetDetail.withinTownLimits", &get_StreetDetail_withinTownLimits);
}

void StreetDetail::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void StreetDetail::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

bool StreetDetail::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StreetDetail" &&
		dynamic_cast<StreetDetail*>(otherObject) != nullptr;
}

const BaseClassDefiner StreetDetail::declare()
{
	return BaseClassDefiner(StreetDetail::addConstructToMap, StreetDetail::addPrimitiveAssignFnsToMap, StreetDetail::addClassAssignFnsToMap, StreetDetail::debugName);
}

std::map<std::string, AttrDetails> StreetDetail::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BaseClass::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StreetDetail_factory()
	{
		return new StreetDetail;
	}
}

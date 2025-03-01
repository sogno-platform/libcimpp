/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StreetDetail.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

StreetDetail::StreetDetail() {}
StreetDetail::~StreetDetail() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StreetDetail.addressGeneral", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.addressGeneral2", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.addressGeneral3", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.buildingName", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.code", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.floorIdentification", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.name", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.number", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.prefix", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.suffix", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.suiteNumber", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.type", { CGMESProfile::GL, } },
	{ "cim:StreetDetail.withinTownLimits", { CGMESProfile::GL, } },
};

std::list<CGMESProfile>
StreetDetail::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StreetDetail::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:StreetDetail", &StreetDetail_factory);
}

void StreetDetail::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:StreetDetail.addressGeneral", &assign_StreetDetail_addressGeneral);
	assign_map.emplace("cim:StreetDetail.addressGeneral2", &assign_StreetDetail_addressGeneral2);
	assign_map.emplace("cim:StreetDetail.addressGeneral3", &assign_StreetDetail_addressGeneral3);
	assign_map.emplace("cim:StreetDetail.buildingName", &assign_StreetDetail_buildingName);
	assign_map.emplace("cim:StreetDetail.code", &assign_StreetDetail_code);
	assign_map.emplace("cim:StreetDetail.floorIdentification", &assign_StreetDetail_floorIdentification);
	assign_map.emplace("cim:StreetDetail.name", &assign_StreetDetail_name);
	assign_map.emplace("cim:StreetDetail.number", &assign_StreetDetail_number);
	assign_map.emplace("cim:StreetDetail.prefix", &assign_StreetDetail_prefix);
	assign_map.emplace("cim:StreetDetail.suffix", &assign_StreetDetail_suffix);
	assign_map.emplace("cim:StreetDetail.suiteNumber", &assign_StreetDetail_suiteNumber);
	assign_map.emplace("cim:StreetDetail.type", &assign_StreetDetail_type);
	assign_map.emplace("cim:StreetDetail.withinTownLimits", &assign_StreetDetail_withinTownLimits);
}

void StreetDetail::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StreetDetail::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:StreetDetail.addressGeneral", &get_StreetDetail_addressGeneral);
	get_map.emplace("cim:StreetDetail.addressGeneral2", &get_StreetDetail_addressGeneral2);
	get_map.emplace("cim:StreetDetail.addressGeneral3", &get_StreetDetail_addressGeneral3);
	get_map.emplace("cim:StreetDetail.buildingName", &get_StreetDetail_buildingName);
	get_map.emplace("cim:StreetDetail.code", &get_StreetDetail_code);
	get_map.emplace("cim:StreetDetail.floorIdentification", &get_StreetDetail_floorIdentification);
	get_map.emplace("cim:StreetDetail.name", &get_StreetDetail_name);
	get_map.emplace("cim:StreetDetail.number", &get_StreetDetail_number);
	get_map.emplace("cim:StreetDetail.prefix", &get_StreetDetail_prefix);
	get_map.emplace("cim:StreetDetail.suffix", &get_StreetDetail_suffix);
	get_map.emplace("cim:StreetDetail.suiteNumber", &get_StreetDetail_suiteNumber);
	get_map.emplace("cim:StreetDetail.type", &get_StreetDetail_type);
	get_map.emplace("cim:StreetDetail.withinTownLimits", &get_StreetDetail_withinTownLimits);
}

void StreetDetail::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
}

void StreetDetail::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StreetDetail::declare()
{
	return BaseClassDefiner(StreetDetail::addConstructToMap, StreetDetail::addPrimitiveAssignFnsToMap, StreetDetail::addClassAssignFnsToMap, StreetDetail::debugName);
}

namespace CIMPP
{
	BaseClass* StreetDetail_factory()
	{
		return new StreetDetail;
	}
}

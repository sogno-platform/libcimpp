/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantReactiveControlIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindPlantIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantReactiveControlIEC(),
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
		{ "WindPlantReactiveControlIEC.WindPlantIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kiwpx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kpwpx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.kwpqu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.mwppf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.mwpu", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twppfilt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twpqfilt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.twpufilt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.txft", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.txfv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.uwpqdip", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.xrefmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPlantReactiveControlIEC.xrefmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantReactiveControlIEC::WindPlantReactiveControlIEC() : WindPlantIEC(nullptr) {}
WindPlantReactiveControlIEC::~WindPlantReactiveControlIEC() {}

const std::list<std::string>& WindPlantReactiveControlIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantReactiveControlIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantReactiveControlIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantReactiveControlIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantReactiveControlIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass*, BaseClass*);
bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	WindPlantIEC* element2 = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantIEC != element2)
		{
			element->WindPlantIEC = element2;
			return assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kiwpx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwpx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kpwpx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpwpx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_kwpqu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kwpqu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_mwppf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwppf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_mwpu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwpu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twppfilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twppfilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpqfilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twpqfilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_twpufilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twpufilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txft(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->txft;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_txfv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->txfv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_uwpqdip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uwpqdip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xrefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_xrefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantReactiveControlIEC* element = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xrefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindPlantReactiveControlIEC_kiwpx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwpx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kpwpx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpwpx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_kwpqu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kwpqu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_mwppf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwppf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_mwpu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwpu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twppfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twppfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twpqfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twpqfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_twpufilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twpufilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_txft(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->txft;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_txfv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->txfv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_uwpqdip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uwpqdip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_xrefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xrefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantReactiveControlIEC_xrefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantReactiveControlIEC* element = dynamic_cast<const WindPlantReactiveControlIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xrefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindPlantReactiveControlIEC::debugName[] = "WindPlantReactiveControlIEC";
const char* WindPlantReactiveControlIEC::debugString() const
{
	return WindPlantReactiveControlIEC::debugName;
}

void WindPlantReactiveControlIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPlantReactiveControlIEC", &WindPlantReactiveControlIEC_factory);
}

void WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindPlantReactiveControlIEC.kiwpx", &assign_WindPlantReactiveControlIEC_kiwpx);
	assign_map.emplace("WindPlantReactiveControlIEC.kpwpx", &assign_WindPlantReactiveControlIEC_kpwpx);
	assign_map.emplace("WindPlantReactiveControlIEC.kwpqu", &assign_WindPlantReactiveControlIEC_kwpqu);
	assign_map.emplace("WindPlantReactiveControlIEC.mwppf", &assign_WindPlantReactiveControlIEC_mwppf);
	assign_map.emplace("WindPlantReactiveControlIEC.mwpu", &assign_WindPlantReactiveControlIEC_mwpu);
	assign_map.emplace("WindPlantReactiveControlIEC.twppfilt", &assign_WindPlantReactiveControlIEC_twppfilt);
	assign_map.emplace("WindPlantReactiveControlIEC.twpqfilt", &assign_WindPlantReactiveControlIEC_twpqfilt);
	assign_map.emplace("WindPlantReactiveControlIEC.twpufilt", &assign_WindPlantReactiveControlIEC_twpufilt);
	assign_map.emplace("WindPlantReactiveControlIEC.txft", &assign_WindPlantReactiveControlIEC_txft);
	assign_map.emplace("WindPlantReactiveControlIEC.txfv", &assign_WindPlantReactiveControlIEC_txfv);
	assign_map.emplace("WindPlantReactiveControlIEC.uwpqdip", &assign_WindPlantReactiveControlIEC_uwpqdip);
	assign_map.emplace("WindPlantReactiveControlIEC.xrefmax", &assign_WindPlantReactiveControlIEC_xrefmax);
	assign_map.emplace("WindPlantReactiveControlIEC.xrefmin", &assign_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantReactiveControlIEC.WindPlantIEC", &assign_WindPlantReactiveControlIEC_WindPlantIEC);
}

void WindPlantReactiveControlIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindPlantReactiveControlIEC.kiwpx", &get_WindPlantReactiveControlIEC_kiwpx);
	get_map.emplace("WindPlantReactiveControlIEC.kpwpx", &get_WindPlantReactiveControlIEC_kpwpx);
	get_map.emplace("WindPlantReactiveControlIEC.kwpqu", &get_WindPlantReactiveControlIEC_kwpqu);
	get_map.emplace("WindPlantReactiveControlIEC.mwppf", &get_WindPlantReactiveControlIEC_mwppf);
	get_map.emplace("WindPlantReactiveControlIEC.mwpu", &get_WindPlantReactiveControlIEC_mwpu);
	get_map.emplace("WindPlantReactiveControlIEC.twppfilt", &get_WindPlantReactiveControlIEC_twppfilt);
	get_map.emplace("WindPlantReactiveControlIEC.twpqfilt", &get_WindPlantReactiveControlIEC_twpqfilt);
	get_map.emplace("WindPlantReactiveControlIEC.twpufilt", &get_WindPlantReactiveControlIEC_twpufilt);
	get_map.emplace("WindPlantReactiveControlIEC.txft", &get_WindPlantReactiveControlIEC_txft);
	get_map.emplace("WindPlantReactiveControlIEC.txfv", &get_WindPlantReactiveControlIEC_txfv);
	get_map.emplace("WindPlantReactiveControlIEC.uwpqdip", &get_WindPlantReactiveControlIEC_uwpqdip);
	get_map.emplace("WindPlantReactiveControlIEC.xrefmax", &get_WindPlantReactiveControlIEC_xrefmax);
	get_map.emplace("WindPlantReactiveControlIEC.xrefmin", &get_WindPlantReactiveControlIEC_xrefmin);
}

void WindPlantReactiveControlIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPlantReactiveControlIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindPlantReactiveControlIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantReactiveControlIEC" &&
		dynamic_cast<WindPlantReactiveControlIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantReactiveControlIEC::declare()
{
	return BaseClassDefiner(WindPlantReactiveControlIEC::addConstructToMap, WindPlantReactiveControlIEC::addPrimitiveAssignFnsToMap, WindPlantReactiveControlIEC::addClassAssignFnsToMap, WindPlantReactiveControlIEC::debugName);
}

std::map<std::string, AttrDetails> WindPlantReactiveControlIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantReactiveControlIEC_factory()
	{
		return new WindPlantReactiveControlIEC;
	}
}

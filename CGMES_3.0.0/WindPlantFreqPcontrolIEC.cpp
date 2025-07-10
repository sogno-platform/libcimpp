/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantFreqPcontrolIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindPlantIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantFreqPcontrolIEC(),
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
		{ "WindPlantFreqPcontrolIEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.WindPlantIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.dprefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.dprefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.dpwprefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.dpwprefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.kiwpp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.kiwppmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.kiwppmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.kpwpp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.kwppref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.prefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.prefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.tpft", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.tpfv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.twpffiltp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantFreqPcontrolIEC.twppfiltp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantFreqPcontrolIEC::WindPlantFreqPcontrolIEC() : WindPlantIEC(nullptr) {}
WindPlantFreqPcontrolIEC::~WindPlantFreqPcontrolIEC() {}

const std::list<std::string>& WindPlantFreqPcontrolIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantFreqPcontrolIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantFreqPcontrolIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantFreqPcontrolIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantFreqPcontrolIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantFreqPcontrolIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantFreqPcontrolIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass*, BaseClass*);
bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass*, BaseClass*);
bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	WindPlantIEC* element2 = dynamic_cast<WindPlantIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantIEC != element2)
		{
			element->WindPlantIEC = element2;
			return assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dprefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dprefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dprefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dprefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dpwprefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpwprefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_dpwprefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpwprefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwppmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwppmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kiwppmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiwppmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kpwpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpwpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_kwppref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kwppref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->prefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_prefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->prefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpft(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpft;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_tpfv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpfv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_twpffiltp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twpffiltp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_twppfiltp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPlantFreqPcontrolIEC* element = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twppfiltp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindPlantFreqPcontrolIEC_dprefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dprefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dprefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dprefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dpwprefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpwprefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_dpwprefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpwprefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwppmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwppmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kiwppmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiwppmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kpwpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpwpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_kwppref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kwppref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_prefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->prefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_prefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->prefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_tpft(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpft;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_tpfv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpfv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_twpffiltp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twpffiltp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPlantFreqPcontrolIEC_twppfiltp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPlantFreqPcontrolIEC* element = dynamic_cast<const WindPlantFreqPcontrolIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twppfiltp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindPlantFreqPcontrolIEC::debugName[] = "WindPlantFreqPcontrolIEC";
const char* WindPlantFreqPcontrolIEC::debugString() const
{
	return WindPlantFreqPcontrolIEC::debugName;
}

void WindPlantFreqPcontrolIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPlantFreqPcontrolIEC", &WindPlantFreqPcontrolIEC_factory);
}

void WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindPlantFreqPcontrolIEC.dprefmax", &assign_WindPlantFreqPcontrolIEC_dprefmax);
	assign_map.emplace("WindPlantFreqPcontrolIEC.dprefmin", &assign_WindPlantFreqPcontrolIEC_dprefmin);
	assign_map.emplace("WindPlantFreqPcontrolIEC.dpwprefmax", &assign_WindPlantFreqPcontrolIEC_dpwprefmax);
	assign_map.emplace("WindPlantFreqPcontrolIEC.dpwprefmin", &assign_WindPlantFreqPcontrolIEC_dpwprefmin);
	assign_map.emplace("WindPlantFreqPcontrolIEC.kiwpp", &assign_WindPlantFreqPcontrolIEC_kiwpp);
	assign_map.emplace("WindPlantFreqPcontrolIEC.kiwppmax", &assign_WindPlantFreqPcontrolIEC_kiwppmax);
	assign_map.emplace("WindPlantFreqPcontrolIEC.kiwppmin", &assign_WindPlantFreqPcontrolIEC_kiwppmin);
	assign_map.emplace("WindPlantFreqPcontrolIEC.kpwpp", &assign_WindPlantFreqPcontrolIEC_kpwpp);
	assign_map.emplace("WindPlantFreqPcontrolIEC.kwppref", &assign_WindPlantFreqPcontrolIEC_kwppref);
	assign_map.emplace("WindPlantFreqPcontrolIEC.prefmax", &assign_WindPlantFreqPcontrolIEC_prefmax);
	assign_map.emplace("WindPlantFreqPcontrolIEC.prefmin", &assign_WindPlantFreqPcontrolIEC_prefmin);
	assign_map.emplace("WindPlantFreqPcontrolIEC.tpft", &assign_WindPlantFreqPcontrolIEC_tpft);
	assign_map.emplace("WindPlantFreqPcontrolIEC.tpfv", &assign_WindPlantFreqPcontrolIEC_tpfv);
	assign_map.emplace("WindPlantFreqPcontrolIEC.twpffiltp", &assign_WindPlantFreqPcontrolIEC_twpffiltp);
	assign_map.emplace("WindPlantFreqPcontrolIEC.twppfiltp", &assign_WindPlantFreqPcontrolIEC_twppfiltp);
}

void WindPlantFreqPcontrolIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantFreqPcontrolIEC.WindDynamicsLookupTable", &assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable);
	assign_map.emplace("WindPlantFreqPcontrolIEC.WindPlantIEC", &assign_WindPlantFreqPcontrolIEC_WindPlantIEC);
}

void WindPlantFreqPcontrolIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindPlantFreqPcontrolIEC.dprefmax", &get_WindPlantFreqPcontrolIEC_dprefmax);
	get_map.emplace("WindPlantFreqPcontrolIEC.dprefmin", &get_WindPlantFreqPcontrolIEC_dprefmin);
	get_map.emplace("WindPlantFreqPcontrolIEC.dpwprefmax", &get_WindPlantFreqPcontrolIEC_dpwprefmax);
	get_map.emplace("WindPlantFreqPcontrolIEC.dpwprefmin", &get_WindPlantFreqPcontrolIEC_dpwprefmin);
	get_map.emplace("WindPlantFreqPcontrolIEC.kiwpp", &get_WindPlantFreqPcontrolIEC_kiwpp);
	get_map.emplace("WindPlantFreqPcontrolIEC.kiwppmax", &get_WindPlantFreqPcontrolIEC_kiwppmax);
	get_map.emplace("WindPlantFreqPcontrolIEC.kiwppmin", &get_WindPlantFreqPcontrolIEC_kiwppmin);
	get_map.emplace("WindPlantFreqPcontrolIEC.kpwpp", &get_WindPlantFreqPcontrolIEC_kpwpp);
	get_map.emplace("WindPlantFreqPcontrolIEC.kwppref", &get_WindPlantFreqPcontrolIEC_kwppref);
	get_map.emplace("WindPlantFreqPcontrolIEC.prefmax", &get_WindPlantFreqPcontrolIEC_prefmax);
	get_map.emplace("WindPlantFreqPcontrolIEC.prefmin", &get_WindPlantFreqPcontrolIEC_prefmin);
	get_map.emplace("WindPlantFreqPcontrolIEC.tpft", &get_WindPlantFreqPcontrolIEC_tpft);
	get_map.emplace("WindPlantFreqPcontrolIEC.tpfv", &get_WindPlantFreqPcontrolIEC_tpfv);
	get_map.emplace("WindPlantFreqPcontrolIEC.twpffiltp", &get_WindPlantFreqPcontrolIEC_twpffiltp);
	get_map.emplace("WindPlantFreqPcontrolIEC.twppfiltp", &get_WindPlantFreqPcontrolIEC_twppfiltp);
}

void WindPlantFreqPcontrolIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPlantFreqPcontrolIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindPlantFreqPcontrolIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantFreqPcontrolIEC" &&
		dynamic_cast<WindPlantFreqPcontrolIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantFreqPcontrolIEC::declare()
{
	return BaseClassDefiner(WindPlantFreqPcontrolIEC::addConstructToMap, WindPlantFreqPcontrolIEC::addPrimitiveAssignFnsToMap, WindPlantFreqPcontrolIEC::addClassAssignFnsToMap, WindPlantFreqPcontrolIEC::debugName);
}

std::map<std::string, AttrDetails> WindPlantFreqPcontrolIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantFreqPcontrolIEC_factory()
	{
		return new WindPlantFreqPcontrolIEC;
	}
}

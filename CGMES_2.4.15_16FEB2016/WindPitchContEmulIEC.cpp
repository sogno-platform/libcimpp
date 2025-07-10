/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPitchContEmulIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType2IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPitchContEmulIEC(),
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
		{ "WindPitchContEmulIEC.WindGenTurbineType2IEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.kdroop", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.kipce", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.komegaaero", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.kppce", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.omegaref", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.pimax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.pimin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindPitchContEmulIEC.tpe", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPitchContEmulIEC::WindPitchContEmulIEC() : WindGenTurbineType2IEC(nullptr) {}
WindPitchContEmulIEC::~WindPitchContEmulIEC() {}

const std::list<std::string>& WindPitchContEmulIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPitchContEmulIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPitchContEmulIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPitchContEmulIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPitchContEmulIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPitchContEmulIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPitchContEmulIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType2IEC_WindPitchContEmulIEC(BaseClass*, BaseClass*);
bool assign_WindPitchContEmulIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	WindGenTurbineType2IEC* element2 = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType2IEC != element2)
		{
			element->WindGenTurbineType2IEC = element2;
			return assign_WindGenTurbineType2IEC_WindPitchContEmulIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContEmulIEC_kdroop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdroop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_kipce(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kipce;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_komegaaero(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->komegaaero;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_kppce(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kppce;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_omegaref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->omegaref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_pimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_pimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindPitchContEmulIEC_tpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindPitchContEmulIEC* element = dynamic_cast<WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindPitchContEmulIEC_kdroop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdroop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_kipce(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kipce;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_komegaaero(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->komegaaero;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_kppce(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kppce;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_omegaref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->omegaref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_pimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_pimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindPitchContEmulIEC_tpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindPitchContEmulIEC* element = dynamic_cast<const WindPitchContEmulIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindPitchContEmulIEC::debugName[] = "WindPitchContEmulIEC";
const char* WindPitchContEmulIEC::debugString() const
{
	return WindPitchContEmulIEC::debugName;
}

void WindPitchContEmulIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPitchContEmulIEC", &WindPitchContEmulIEC_factory);
}

void WindPitchContEmulIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindPitchContEmulIEC.kdroop", &assign_WindPitchContEmulIEC_kdroop);
	assign_map.emplace("WindPitchContEmulIEC.kipce", &assign_WindPitchContEmulIEC_kipce);
	assign_map.emplace("WindPitchContEmulIEC.komegaaero", &assign_WindPitchContEmulIEC_komegaaero);
	assign_map.emplace("WindPitchContEmulIEC.kppce", &assign_WindPitchContEmulIEC_kppce);
	assign_map.emplace("WindPitchContEmulIEC.omegaref", &assign_WindPitchContEmulIEC_omegaref);
	assign_map.emplace("WindPitchContEmulIEC.pimax", &assign_WindPitchContEmulIEC_pimax);
	assign_map.emplace("WindPitchContEmulIEC.pimin", &assign_WindPitchContEmulIEC_pimin);
	assign_map.emplace("WindPitchContEmulIEC.t1", &assign_WindPitchContEmulIEC_t1);
	assign_map.emplace("WindPitchContEmulIEC.t2", &assign_WindPitchContEmulIEC_t2);
	assign_map.emplace("WindPitchContEmulIEC.tpe", &assign_WindPitchContEmulIEC_tpe);
}

void WindPitchContEmulIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPitchContEmulIEC.WindGenTurbineType2IEC", &assign_WindPitchContEmulIEC_WindGenTurbineType2IEC);
}

void WindPitchContEmulIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindPitchContEmulIEC.kdroop", &get_WindPitchContEmulIEC_kdroop);
	get_map.emplace("WindPitchContEmulIEC.kipce", &get_WindPitchContEmulIEC_kipce);
	get_map.emplace("WindPitchContEmulIEC.komegaaero", &get_WindPitchContEmulIEC_komegaaero);
	get_map.emplace("WindPitchContEmulIEC.kppce", &get_WindPitchContEmulIEC_kppce);
	get_map.emplace("WindPitchContEmulIEC.omegaref", &get_WindPitchContEmulIEC_omegaref);
	get_map.emplace("WindPitchContEmulIEC.pimax", &get_WindPitchContEmulIEC_pimax);
	get_map.emplace("WindPitchContEmulIEC.pimin", &get_WindPitchContEmulIEC_pimin);
	get_map.emplace("WindPitchContEmulIEC.t1", &get_WindPitchContEmulIEC_t1);
	get_map.emplace("WindPitchContEmulIEC.t2", &get_WindPitchContEmulIEC_t2);
	get_map.emplace("WindPitchContEmulIEC.tpe", &get_WindPitchContEmulIEC_tpe);
}

void WindPitchContEmulIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindPitchContEmulIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindPitchContEmulIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPitchContEmulIEC" &&
		dynamic_cast<WindPitchContEmulIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPitchContEmulIEC::declare()
{
	return BaseClassDefiner(WindPitchContEmulIEC::addConstructToMap, WindPitchContEmulIEC::addPrimitiveAssignFnsToMap, WindPitchContEmulIEC::addClassAssignFnsToMap, WindPitchContEmulIEC::debugName);
}

std::map<std::string, AttrDetails> WindPitchContEmulIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPitchContEmulIEC_factory()
	{
		return new WindPitchContEmulIEC;
	}
}

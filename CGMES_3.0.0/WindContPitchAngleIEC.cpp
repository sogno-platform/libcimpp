/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPitchAngleIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContPitchAngleIEC(),
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
		{ "WindContPitchAngleIEC.WindTurbineType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.dthetamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.dthetamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.kic", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.kiomega", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.kpc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.kpomega", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.kpx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.thetamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.thetamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPitchAngleIEC.ttheta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContPitchAngleIEC::WindContPitchAngleIEC() : WindTurbineType3IEC(nullptr) {}
WindContPitchAngleIEC::~WindContPitchAngleIEC() {}

const std::list<std::string>& WindContPitchAngleIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContPitchAngleIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContPitchAngleIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContPitchAngleIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContPitchAngleIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContPitchAngleIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContPitchAngleIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass*, BaseClass*);
bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_dthetamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dthetamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_dthetamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dthetamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kic;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kiomega(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiomega;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpomega(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpomega;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPitchAngleIEC_ttheta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ttheta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindContPitchAngleIEC_dthetamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dthetamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_dthetamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dthetamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_kic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_kiomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiomega;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_kpomega(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpomega;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_kpx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_thetamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_thetamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPitchAngleIEC_ttheta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ttheta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContPitchAngleIEC::debugName[] = "WindContPitchAngleIEC";
const char* WindContPitchAngleIEC::debugString() const
{
	return WindContPitchAngleIEC::debugName;
}

void WindContPitchAngleIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContPitchAngleIEC", &WindContPitchAngleIEC_factory);
}

void WindContPitchAngleIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContPitchAngleIEC.dthetamax", &assign_WindContPitchAngleIEC_dthetamax);
	assign_map.emplace("WindContPitchAngleIEC.dthetamin", &assign_WindContPitchAngleIEC_dthetamin);
	assign_map.emplace("WindContPitchAngleIEC.kic", &assign_WindContPitchAngleIEC_kic);
	assign_map.emplace("WindContPitchAngleIEC.kiomega", &assign_WindContPitchAngleIEC_kiomega);
	assign_map.emplace("WindContPitchAngleIEC.kpc", &assign_WindContPitchAngleIEC_kpc);
	assign_map.emplace("WindContPitchAngleIEC.kpomega", &assign_WindContPitchAngleIEC_kpomega);
	assign_map.emplace("WindContPitchAngleIEC.kpx", &assign_WindContPitchAngleIEC_kpx);
	assign_map.emplace("WindContPitchAngleIEC.thetamax", &assign_WindContPitchAngleIEC_thetamax);
	assign_map.emplace("WindContPitchAngleIEC.thetamin", &assign_WindContPitchAngleIEC_thetamin);
	assign_map.emplace("WindContPitchAngleIEC.ttheta", &assign_WindContPitchAngleIEC_ttheta);
}

void WindContPitchAngleIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContPitchAngleIEC.WindTurbineType3IEC", &assign_WindContPitchAngleIEC_WindTurbineType3IEC);
}

void WindContPitchAngleIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContPitchAngleIEC.dthetamax", &get_WindContPitchAngleIEC_dthetamax);
	get_map.emplace("WindContPitchAngleIEC.dthetamin", &get_WindContPitchAngleIEC_dthetamin);
	get_map.emplace("WindContPitchAngleIEC.kic", &get_WindContPitchAngleIEC_kic);
	get_map.emplace("WindContPitchAngleIEC.kiomega", &get_WindContPitchAngleIEC_kiomega);
	get_map.emplace("WindContPitchAngleIEC.kpc", &get_WindContPitchAngleIEC_kpc);
	get_map.emplace("WindContPitchAngleIEC.kpomega", &get_WindContPitchAngleIEC_kpomega);
	get_map.emplace("WindContPitchAngleIEC.kpx", &get_WindContPitchAngleIEC_kpx);
	get_map.emplace("WindContPitchAngleIEC.thetamax", &get_WindContPitchAngleIEC_thetamax);
	get_map.emplace("WindContPitchAngleIEC.thetamin", &get_WindContPitchAngleIEC_thetamin);
	get_map.emplace("WindContPitchAngleIEC.ttheta", &get_WindContPitchAngleIEC_ttheta);
}

void WindContPitchAngleIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPitchAngleIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContPitchAngleIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContPitchAngleIEC" &&
		dynamic_cast<WindContPitchAngleIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContPitchAngleIEC::declare()
{
	return BaseClassDefiner(WindContPitchAngleIEC::addConstructToMap, WindContPitchAngleIEC::addPrimitiveAssignFnsToMap, WindContPitchAngleIEC::addClassAssignFnsToMap, WindContPitchAngleIEC::debugName);
}

std::map<std::string, AttrDetails> WindContPitchAngleIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContPitchAngleIEC_factory()
	{
		return new WindContPitchAngleIEC;
	}
}

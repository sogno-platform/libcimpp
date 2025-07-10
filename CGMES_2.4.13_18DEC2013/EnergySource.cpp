/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergySource.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EnergySchedulingType.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EnergySource(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
			CGMESProfile::EQ,
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
		{ "EnergySource.EnergySchedulingType", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.WindTurbineType3or4Dynamics", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "EnergySource.activePower", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "EnergySource.nominalVoltage", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.r0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.reactivePower", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "EnergySource.rn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.voltageAngle", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.voltageMagnitude", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.x", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.x0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "EnergySource.xn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EnergySource::EnergySource() : EnergySchedulingType(nullptr), WindTurbineType3or4Dynamics(nullptr) {}
EnergySource::~EnergySource() {}

const std::list<std::string>& EnergySource::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EnergySource::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EnergySource::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EnergySource::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EnergySource::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EnergySource::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EnergySource::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_EnergySchedulingType_EnergySource(BaseClass*, BaseClass*);
bool assign_EnergySource_EnergySchedulingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	EnergySchedulingType* element2 = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EnergySchedulingType != element2)
		{
			element->EnergySchedulingType = element2;
			return assign_EnergySchedulingType_EnergySource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_EnergySource(BaseClass*, BaseClass*);
bool assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4Dynamics != element2)
		{
			element->WindTurbineType3or4Dynamics = element2;
			return assign_WindTurbineType3or4Dynamics_EnergySource(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_EnergySource_activePower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->activePower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_nominalVoltage(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalVoltage;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
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

bool assign_EnergySource_r0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
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

bool assign_EnergySource_reactivePower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->reactivePower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_rn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_voltageAngle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageAngle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_voltageMagnitude(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageMagnitude;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_EnergySource_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
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

bool assign_EnergySource_x0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
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

bool assign_EnergySource_xn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_EnergySource_EnergySchedulingType(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->EnergySchedulingType != 0)
		{
			BaseClass_list.push_back(element->EnergySchedulingType);
			return true;
		}
	}
	return false;
}


bool get_EnergySource_activePower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->activePower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_nominalVoltage(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalVoltage;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
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

bool get_EnergySource_r0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
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

bool get_EnergySource_reactivePower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->reactivePower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_rn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_voltageAngle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageAngle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_voltageMagnitude(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageMagnitude;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_EnergySource_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
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

bool get_EnergySource_x0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
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

bool get_EnergySource_xn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const EnergySource* element = dynamic_cast<const EnergySource*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char EnergySource::debugName[] = "EnergySource";
const char* EnergySource::debugString() const
{
	return EnergySource::debugName;
}

void EnergySource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EnergySource", &EnergySource_factory);
}

void EnergySource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("EnergySource.activePower", &assign_EnergySource_activePower);
	assign_map.emplace("EnergySource.nominalVoltage", &assign_EnergySource_nominalVoltage);
	assign_map.emplace("EnergySource.r", &assign_EnergySource_r);
	assign_map.emplace("EnergySource.r0", &assign_EnergySource_r0);
	assign_map.emplace("EnergySource.reactivePower", &assign_EnergySource_reactivePower);
	assign_map.emplace("EnergySource.rn", &assign_EnergySource_rn);
	assign_map.emplace("EnergySource.voltageAngle", &assign_EnergySource_voltageAngle);
	assign_map.emplace("EnergySource.voltageMagnitude", &assign_EnergySource_voltageMagnitude);
	assign_map.emplace("EnergySource.x", &assign_EnergySource_x);
	assign_map.emplace("EnergySource.x0", &assign_EnergySource_x0);
	assign_map.emplace("EnergySource.xn", &assign_EnergySource_xn);
}

void EnergySource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EnergySource.EnergySchedulingType", &assign_EnergySource_EnergySchedulingType);
	assign_map.emplace("EnergySource.WindTurbineType3or4Dynamics", &assign_EnergySource_WindTurbineType3or4Dynamics);
}

void EnergySource::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("EnergySource.activePower", &get_EnergySource_activePower);
	get_map.emplace("EnergySource.nominalVoltage", &get_EnergySource_nominalVoltage);
	get_map.emplace("EnergySource.r", &get_EnergySource_r);
	get_map.emplace("EnergySource.r0", &get_EnergySource_r0);
	get_map.emplace("EnergySource.reactivePower", &get_EnergySource_reactivePower);
	get_map.emplace("EnergySource.rn", &get_EnergySource_rn);
	get_map.emplace("EnergySource.voltageAngle", &get_EnergySource_voltageAngle);
	get_map.emplace("EnergySource.voltageMagnitude", &get_EnergySource_voltageMagnitude);
	get_map.emplace("EnergySource.x", &get_EnergySource_x);
	get_map.emplace("EnergySource.x0", &get_EnergySource_x0);
	get_map.emplace("EnergySource.xn", &get_EnergySource_xn);
}

void EnergySource::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
	get_map.emplace("EnergySource.EnergySchedulingType", &get_EnergySource_EnergySchedulingType);
}

void EnergySource::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool EnergySource::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EnergySource" &&
		dynamic_cast<EnergySource*>(otherObject) != nullptr;
}

const BaseClassDefiner EnergySource::declare()
{
	return BaseClassDefiner(EnergySource::addConstructToMap, EnergySource::addPrimitiveAssignFnsToMap, EnergySource::addClassAssignFnsToMap, EnergySource::debugName);
}

std::map<std::string, AttrDetails> EnergySource::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EnergySource_factory()
	{
		return new EnergySource;
	}
}

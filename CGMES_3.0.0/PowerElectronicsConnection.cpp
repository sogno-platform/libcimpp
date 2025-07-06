/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsConnection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerElectronicsUnit.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerElectronicsConnection(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "PowerElectronicsConnection.PowerElectronicsUnit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsConnection.WindTurbineType3or4Dynamics", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PowerElectronicsConnection.maxQ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsConnection.minQ", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsConnection.p", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "PowerElectronicsConnection.q", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
		{ "PowerElectronicsConnection.ratedS", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "PowerElectronicsConnection.ratedU", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

PowerElectronicsConnection::PowerElectronicsConnection() : PowerElectronicsUnit(nullptr), WindTurbineType3or4Dynamics(nullptr) {}
PowerElectronicsConnection::~PowerElectronicsConnection() {}

const std::list<std::string>& PowerElectronicsConnection::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerElectronicsConnection::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerElectronicsConnection::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsConnection::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerElectronicsConnection::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerElectronicsConnection::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsConnection::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_PowerElectronicsUnit_PowerElectronicsConnection(BaseClass*, BaseClass*);
bool assign_PowerElectronicsConnection_PowerElectronicsUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	PowerElectronicsUnit* element2 = dynamic_cast<PowerElectronicsUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerElectronicsUnit != element2)
		{
			element->PowerElectronicsUnit = element2;
			return assign_PowerElectronicsUnit_PowerElectronicsConnection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_PowerElectronicsConnection(BaseClass*, BaseClass*);
bool assign_PowerElectronicsConnection_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4Dynamics != element2)
		{
			element->WindTurbineType3or4Dynamics = element2;
			return assign_WindTurbineType3or4Dynamics_PowerElectronicsConnection(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerElectronicsConnection_maxQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool assign_PowerElectronicsConnection_minQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool assign_PowerElectronicsConnection_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool assign_PowerElectronicsConnection_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool assign_PowerElectronicsConnection_ratedS(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedS;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PowerElectronicsConnection_ratedU(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerElectronicsConnection* element = dynamic_cast<PowerElectronicsConnection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedU;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_PowerElectronicsConnection_PowerElectronicsUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerElectronicsUnit != 0)
		{
			BaseClass_list.push_back(element->PowerElectronicsUnit);
			return true;
		}
	}
	return false;
}


bool get_PowerElectronicsConnection_maxQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool get_PowerElectronicsConnection_minQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool get_PowerElectronicsConnection_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool get_PowerElectronicsConnection_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
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

bool get_PowerElectronicsConnection_ratedS(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedS;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PowerElectronicsConnection_ratedU(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerElectronicsConnection* element = dynamic_cast<const PowerElectronicsConnection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedU;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char PowerElectronicsConnection::debugName[] = "PowerElectronicsConnection";
const char* PowerElectronicsConnection::debugString() const
{
	return PowerElectronicsConnection::debugName;
}

void PowerElectronicsConnection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerElectronicsConnection", &PowerElectronicsConnection_factory);
}

void PowerElectronicsConnection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PowerElectronicsConnection.maxQ", &assign_PowerElectronicsConnection_maxQ);
	assign_map.emplace("PowerElectronicsConnection.minQ", &assign_PowerElectronicsConnection_minQ);
	assign_map.emplace("PowerElectronicsConnection.p", &assign_PowerElectronicsConnection_p);
	assign_map.emplace("PowerElectronicsConnection.q", &assign_PowerElectronicsConnection_q);
	assign_map.emplace("PowerElectronicsConnection.ratedS", &assign_PowerElectronicsConnection_ratedS);
	assign_map.emplace("PowerElectronicsConnection.ratedU", &assign_PowerElectronicsConnection_ratedU);
}

void PowerElectronicsConnection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("PowerElectronicsConnection.PowerElectronicsUnit", &assign_PowerElectronicsConnection_PowerElectronicsUnit);
	assign_map.emplace("PowerElectronicsConnection.WindTurbineType3or4Dynamics", &assign_PowerElectronicsConnection_WindTurbineType3or4Dynamics);
}

void PowerElectronicsConnection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PowerElectronicsConnection.maxQ", &get_PowerElectronicsConnection_maxQ);
	get_map.emplace("PowerElectronicsConnection.minQ", &get_PowerElectronicsConnection_minQ);
	get_map.emplace("PowerElectronicsConnection.p", &get_PowerElectronicsConnection_p);
	get_map.emplace("PowerElectronicsConnection.q", &get_PowerElectronicsConnection_q);
	get_map.emplace("PowerElectronicsConnection.ratedS", &get_PowerElectronicsConnection_ratedS);
	get_map.emplace("PowerElectronicsConnection.ratedU", &get_PowerElectronicsConnection_ratedU);
}

void PowerElectronicsConnection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
	get_map.emplace("PowerElectronicsConnection.PowerElectronicsUnit", &get_PowerElectronicsConnection_PowerElectronicsUnit);
}

void PowerElectronicsConnection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

bool PowerElectronicsConnection::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerElectronicsConnection" &&
		dynamic_cast<PowerElectronicsConnection*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerElectronicsConnection::declare()
{
	return BaseClassDefiner(PowerElectronicsConnection::addConstructToMap, PowerElectronicsConnection::addPrimitiveAssignFnsToMap, PowerElectronicsConnection::addClassAssignFnsToMap, PowerElectronicsConnection::debugName);
}

std::map<std::string, AttrDetails> PowerElectronicsConnection::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegulatingCondEq::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerElectronicsConnection_factory()
	{
		return new PowerElectronicsConnection;
	}
}

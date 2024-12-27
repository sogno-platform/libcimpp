/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPitchAngleIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType3IEC.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPitchAngleIEC::WindContPitchAngleIEC() : WindGenTurbineType3IEC(nullptr) {};
WindContPitchAngleIEC::~WindContPitchAngleIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindContPitchAngleIEC.WindGenTurbineType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.dthetamax", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.dthetamin", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.kic", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.kiomega", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.kpc", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.kpomega", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.kpx", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.thetamax", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.thetamin", { CGMESProfile::DY, } },
	{ "cim:WindContPitchAngleIEC.ttheta", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindContPitchAngleIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindContPitchAngleIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindContPitchAngleIEC_dthetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_dthetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->dthetamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kic;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kiomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kiomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpomega;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_kpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_thetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->thetamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_ttheta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1))
	{
		buffer >> element->ttheta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindGenTurbineType3IEC_WindContPitchAngleIEC(BaseClass*, BaseClass*);
bool assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1);
	WindGenTurbineType3IEC* element2 = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType3IEC != element2)
		{
			element->WindGenTurbineType3IEC = element2;
			return assign_WindGenTurbineType3IEC_WindContPitchAngleIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindContPitchAngleIEC_dthetamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	if (const WindContPitchAngleIEC* element = dynamic_cast<const WindContPitchAngleIEC*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC"), &WindContPitchAngleIEC_factory));
}

void WindContPitchAngleIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamax"), &assign_WindContPitchAngleIEC_dthetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamin"), &assign_WindContPitchAngleIEC_dthetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kic"), &assign_WindContPitchAngleIEC_kic));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kiomega"), &assign_WindContPitchAngleIEC_kiomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpc"), &assign_WindContPitchAngleIEC_kpc));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpomega"), &assign_WindContPitchAngleIEC_kpomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpx"), &assign_WindContPitchAngleIEC_kpx));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamax"), &assign_WindContPitchAngleIEC_thetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamin"), &assign_WindContPitchAngleIEC_thetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.ttheta"), &assign_WindContPitchAngleIEC_ttheta));
}

void WindContPitchAngleIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.WindGenTurbineType3IEC"), &assign_WindContPitchAngleIEC_WindGenTurbineType3IEC));
}

void WindContPitchAngleIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindContPitchAngleIEC.dthetamax", &get_WindContPitchAngleIEC_dthetamax);
	get_map.emplace("cim:WindContPitchAngleIEC.dthetamin", &get_WindContPitchAngleIEC_dthetamin);
	get_map.emplace("cim:WindContPitchAngleIEC.kic", &get_WindContPitchAngleIEC_kic);
	get_map.emplace("cim:WindContPitchAngleIEC.kiomega", &get_WindContPitchAngleIEC_kiomega);
	get_map.emplace("cim:WindContPitchAngleIEC.kpc", &get_WindContPitchAngleIEC_kpc);
	get_map.emplace("cim:WindContPitchAngleIEC.kpomega", &get_WindContPitchAngleIEC_kpomega);
	get_map.emplace("cim:WindContPitchAngleIEC.kpx", &get_WindContPitchAngleIEC_kpx);
	get_map.emplace("cim:WindContPitchAngleIEC.thetamax", &get_WindContPitchAngleIEC_thetamax);
	get_map.emplace("cim:WindContPitchAngleIEC.thetamin", &get_WindContPitchAngleIEC_thetamin);
	get_map.emplace("cim:WindContPitchAngleIEC.ttheta", &get_WindContPitchAngleIEC_ttheta);
}

void WindContPitchAngleIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPitchAngleIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindContPitchAngleIEC::declare()
{
	return BaseClassDefiner(WindContPitchAngleIEC::addConstructToMap, WindContPitchAngleIEC::addPrimitiveAssignFnsToMap, WindContPitchAngleIEC::addClassAssignFnsToMap, WindContPitchAngleIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContPitchAngleIEC_factory()
	{
		return new WindContPitchAngleIEC;
	}
}

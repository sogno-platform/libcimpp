/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VCompIEEEType1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

VCompIEEEType1::VCompIEEEType1() {};
VCompIEEEType1::~VCompIEEEType1() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VCompIEEEType1.rc", { CGMESProfile::DY, } },
	{ "cim:VCompIEEEType1.tr", { CGMESProfile::DY, } },
	{ "cim:VCompIEEEType1.xc", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VCompIEEEType1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VCompIEEEType1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = VoltageCompensatorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_VCompIEEEType1_rc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer >> element->rc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VCompIEEEType1_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VCompIEEEType1_xc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VCompIEEEType1* element = dynamic_cast<VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer >> element->xc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_VCompIEEEType1_rc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer << element->rc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VCompIEEEType1_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VCompIEEEType1_xc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VCompIEEEType1* element = dynamic_cast<const VCompIEEEType1*>(BaseClass_ptr1))
	{
		buffer << element->xc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char VCompIEEEType1::debugName[] = "VCompIEEEType1";
const char* VCompIEEEType1::debugString() const
{
	return VCompIEEEType1::debugName;
}

void VCompIEEEType1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VCompIEEEType1"), &VCompIEEEType1_factory));
}

void VCompIEEEType1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VCompIEEEType1.rc"), &assign_VCompIEEEType1_rc));
	assign_map.insert(std::make_pair(std::string("cim:VCompIEEEType1.tr"), &assign_VCompIEEEType1_tr));
	assign_map.insert(std::make_pair(std::string("cim:VCompIEEEType1.xc"), &assign_VCompIEEEType1_xc));
}

void VCompIEEEType1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VCompIEEEType1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VCompIEEEType1.rc", &get_VCompIEEEType1_rc);
	get_map.emplace("cim:VCompIEEEType1.tr", &get_VCompIEEEType1_tr);
	get_map.emplace("cim:VCompIEEEType1.xc", &get_VCompIEEEType1_xc);
}

void VCompIEEEType1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void VCompIEEEType1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VCompIEEEType1::declare()
{
	return BaseClassDefiner(VCompIEEEType1::addConstructToMap, VCompIEEEType1::addPrimitiveAssignFnsToMap, VCompIEEEType1::addClassAssignFnsToMap, VCompIEEEType1::debugName);
}

namespace CIMPP
{
	BaseClass* VCompIEEEType1_factory()
	{
		return new VCompIEEEType1;
	}
}

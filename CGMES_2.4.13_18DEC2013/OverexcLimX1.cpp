/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimX1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

OverexcLimX1::OverexcLimX1() {};
OverexcLimX1::~OverexcLimX1() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcLimX1.efd1", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.efd2", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.efd3", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.efddes", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.efdrated", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.kmx", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.t1", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.t2", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.t3", { CGMESProfile::DY, } },
	{ "cim:OverexcLimX1.vlow", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcLimX1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcLimX1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OverexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_OverexcLimX1_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_efd3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->efd3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_efddes(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->efddes;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_efdrated(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->efdrated;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_kmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->kmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX1_vlow(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX1* element = dynamic_cast<OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer >> element->vlow;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_OverexcLimX1_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_efd3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->efd3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_efddes(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->efddes;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_efdrated(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->efdrated;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_kmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->kmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
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

bool get_OverexcLimX1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
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

bool get_OverexcLimX1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_OverexcLimX1_vlow(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const OverexcLimX1* element = dynamic_cast<const OverexcLimX1*>(BaseClass_ptr1))
	{
		buffer << element->vlow;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char OverexcLimX1::debugName[] = "OverexcLimX1";
const char* OverexcLimX1::debugString() const
{
	return OverexcLimX1::debugName;
}

void OverexcLimX1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimX1"), &OverexcLimX1_factory));
}

void OverexcLimX1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd1"), &assign_OverexcLimX1_efd1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd2"), &assign_OverexcLimX1_efd2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efd3"), &assign_OverexcLimX1_efd3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efddes"), &assign_OverexcLimX1_efddes));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.efdrated"), &assign_OverexcLimX1_efdrated));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.kmx"), &assign_OverexcLimX1_kmx));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t1"), &assign_OverexcLimX1_t1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t2"), &assign_OverexcLimX1_t2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.t3"), &assign_OverexcLimX1_t3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX1.vlow"), &assign_OverexcLimX1_vlow));
}

void OverexcLimX1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void OverexcLimX1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcLimX1.efd1", &get_OverexcLimX1_efd1);
	get_map.emplace("cim:OverexcLimX1.efd2", &get_OverexcLimX1_efd2);
	get_map.emplace("cim:OverexcLimX1.efd3", &get_OverexcLimX1_efd3);
	get_map.emplace("cim:OverexcLimX1.efddes", &get_OverexcLimX1_efddes);
	get_map.emplace("cim:OverexcLimX1.efdrated", &get_OverexcLimX1_efdrated);
	get_map.emplace("cim:OverexcLimX1.kmx", &get_OverexcLimX1_kmx);
	get_map.emplace("cim:OverexcLimX1.t1", &get_OverexcLimX1_t1);
	get_map.emplace("cim:OverexcLimX1.t2", &get_OverexcLimX1_t2);
	get_map.emplace("cim:OverexcLimX1.t3", &get_OverexcLimX1_t3);
	get_map.emplace("cim:OverexcLimX1.vlow", &get_OverexcLimX1_vlow);
}

void OverexcLimX1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcLimX1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcLimX1::declare()
{
	return BaseClassDefiner(OverexcLimX1::addConstructToMap, OverexcLimX1::addPrimitiveAssignFnsToMap, OverexcLimX1::addClassAssignFnsToMap, OverexcLimX1::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLimX1_factory()
	{
		return new OverexcLimX1;
	}
}

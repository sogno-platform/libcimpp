/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Float.hpp"
#include "SynchronousMachineModelKind.hpp"
#include "RotorKind.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

SynchronousMachineTimeConstantReactance::SynchronousMachineTimeConstantReactance() {};
SynchronousMachineTimeConstantReactance::~SynchronousMachineTimeConstantReactance() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SynchronousMachineTimeConstantReactance.ks", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.modelType", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.rotorType", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.tc", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.tpdo", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.tppdo", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.tppqo", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.tpqo", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xDirectSync", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xDirectTrans", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xQuadSubtrans", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xQuadSync", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineTimeConstantReactance.xQuadTrans", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
SynchronousMachineTimeConstantReactance::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachineTimeConstantReactance::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SynchronousMachineDetailed::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SynchronousMachineTimeConstantReactance_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_modelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->modelType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_rotorType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->rotorType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpdo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tpdo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppdo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tppdo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppqo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tppqo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpqo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->tpqo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectSubtrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSync(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectSync;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectTrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xDirectTrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadSubtrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSync(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadSync;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadTrans(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer >> element->xQuadTrans;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_SynchronousMachineTimeConstantReactance_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_tpdo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tpdo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_tppdo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tppdo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_tppqo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tppqo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_tpqo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->tpqo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xDirectSubtrans(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xDirectSubtrans;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xDirectSync(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xDirectSync;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xDirectTrans(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xDirectTrans;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xQuadSubtrans(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xQuadSubtrans;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xQuadSync(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xQuadSync;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_xQuadTrans(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->xQuadTrans;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_SynchronousMachineTimeConstantReactance_modelType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->modelType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_rotorType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1))
	{
		buffer << element->rotorType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char SynchronousMachineTimeConstantReactance::debugName[] = "SynchronousMachineTimeConstantReactance";
const char* SynchronousMachineTimeConstantReactance::debugString() const
{
	return SynchronousMachineTimeConstantReactance::debugName;
}

void SynchronousMachineTimeConstantReactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance"), &SynchronousMachineTimeConstantReactance_factory));
}

void SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.ks"), &assign_SynchronousMachineTimeConstantReactance_ks));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.modelType"), &assign_SynchronousMachineTimeConstantReactance_modelType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.rotorType"), &assign_SynchronousMachineTimeConstantReactance_rotorType));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tc"), &assign_SynchronousMachineTimeConstantReactance_tc));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tpdo"), &assign_SynchronousMachineTimeConstantReactance_tpdo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tppdo"), &assign_SynchronousMachineTimeConstantReactance_tppdo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tppqo"), &assign_SynchronousMachineTimeConstantReactance_tppqo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.tpqo"), &assign_SynchronousMachineTimeConstantReactance_tpqo));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans"), &assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectSync"), &assign_SynchronousMachineTimeConstantReactance_xDirectSync));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xDirectTrans"), &assign_SynchronousMachineTimeConstantReactance_xDirectTrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadSubtrans"), &assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadSync"), &assign_SynchronousMachineTimeConstantReactance_xQuadSync));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineTimeConstantReactance.xQuadTrans"), &assign_SynchronousMachineTimeConstantReactance_xQuadTrans));
}

void SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineTimeConstantReactance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.ks", &get_SynchronousMachineTimeConstantReactance_ks);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.tc", &get_SynchronousMachineTimeConstantReactance_tc);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.tpdo", &get_SynchronousMachineTimeConstantReactance_tpdo);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.tppdo", &get_SynchronousMachineTimeConstantReactance_tppdo);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.tppqo", &get_SynchronousMachineTimeConstantReactance_tppqo);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.tpqo", &get_SynchronousMachineTimeConstantReactance_tpqo);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xDirectSubtrans", &get_SynchronousMachineTimeConstantReactance_xDirectSubtrans);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xDirectSync", &get_SynchronousMachineTimeConstantReactance_xDirectSync);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xDirectTrans", &get_SynchronousMachineTimeConstantReactance_xDirectTrans);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xQuadSubtrans", &get_SynchronousMachineTimeConstantReactance_xQuadSubtrans);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xQuadSync", &get_SynchronousMachineTimeConstantReactance_xQuadSync);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.xQuadTrans", &get_SynchronousMachineTimeConstantReactance_xQuadTrans);
}

void SynchronousMachineTimeConstantReactance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDetailed::addClassGetFnsToMap(get_map);
}

void SynchronousMachineTimeConstantReactance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.modelType", &get_SynchronousMachineTimeConstantReactance_modelType);
	get_map.emplace("cim:SynchronousMachineTimeConstantReactance.rotorType", &get_SynchronousMachineTimeConstantReactance_rotorType);
}

const BaseClassDefiner SynchronousMachineTimeConstantReactance::declare()
{
	return BaseClassDefiner(SynchronousMachineTimeConstantReactance::addConstructToMap, SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap, SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap, SynchronousMachineTimeConstantReactance::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineTimeConstantReactance_factory()
	{
		return new SynchronousMachineTimeConstantReactance;
	}
}

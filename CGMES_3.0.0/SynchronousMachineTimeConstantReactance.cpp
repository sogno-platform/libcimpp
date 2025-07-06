/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineTimeConstantReactance.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SynchronousMachineTimeConstantReactance(),
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
		{ "SynchronousMachineTimeConstantReactance.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.modelType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.rotorType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.tpdo", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.tppdo", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.tppqo", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.tpqo", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xDirectSubtrans", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xDirectSync", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xDirectTrans", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xQuadSubtrans", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xQuadSync", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "SynchronousMachineTimeConstantReactance.xQuadTrans", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

SynchronousMachineTimeConstantReactance::SynchronousMachineTimeConstantReactance() {}
SynchronousMachineTimeConstantReactance::~SynchronousMachineTimeConstantReactance() {}

const std::list<std::string>& SynchronousMachineTimeConstantReactance::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SynchronousMachineTimeConstantReactance::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SynchronousMachineTimeConstantReactance::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineTimeConstantReactance::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SynchronousMachineTimeConstantReactance::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SynchronousMachineTimeConstantReactance::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SynchronousMachineTimeConstantReactance::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SynchronousMachineTimeConstantReactance_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_modelType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->modelType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_rotorType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rotorType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpdo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpdo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppdo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tppdo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tppqo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tppqo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_tpqo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpqo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xDirectSubtrans;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectSync(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xDirectSync;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xDirectTrans(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xDirectTrans;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xQuadSubtrans;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadSync(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xQuadSync;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineTimeConstantReactance_xQuadTrans(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineTimeConstantReactance* element = dynamic_cast<SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xQuadTrans;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_SynchronousMachineTimeConstantReactance_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_SynchronousMachineTimeConstantReactance_modelType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_SynchronousMachineTimeConstantReactance_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const SynchronousMachineTimeConstantReactance* element = dynamic_cast<const SynchronousMachineTimeConstantReactance*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char SynchronousMachineTimeConstantReactance::debugName[] = "SynchronousMachineTimeConstantReactance";
const char* SynchronousMachineTimeConstantReactance::debugString() const
{
	return SynchronousMachineTimeConstantReactance::debugName;
}

void SynchronousMachineTimeConstantReactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SynchronousMachineTimeConstantReactance", &SynchronousMachineTimeConstantReactance_factory);
}

void SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SynchronousMachineTimeConstantReactance.ks", &assign_SynchronousMachineTimeConstantReactance_ks);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.modelType", &assign_SynchronousMachineTimeConstantReactance_modelType);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.rotorType", &assign_SynchronousMachineTimeConstantReactance_rotorType);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.tc", &assign_SynchronousMachineTimeConstantReactance_tc);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.tpdo", &assign_SynchronousMachineTimeConstantReactance_tpdo);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.tppdo", &assign_SynchronousMachineTimeConstantReactance_tppdo);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.tppqo", &assign_SynchronousMachineTimeConstantReactance_tppqo);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.tpqo", &assign_SynchronousMachineTimeConstantReactance_tpqo);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xDirectSubtrans", &assign_SynchronousMachineTimeConstantReactance_xDirectSubtrans);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xDirectSync", &assign_SynchronousMachineTimeConstantReactance_xDirectSync);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xDirectTrans", &assign_SynchronousMachineTimeConstantReactance_xDirectTrans);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xQuadSubtrans", &assign_SynchronousMachineTimeConstantReactance_xQuadSubtrans);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xQuadSync", &assign_SynchronousMachineTimeConstantReactance_xQuadSync);
	assign_map.emplace("SynchronousMachineTimeConstantReactance.xQuadTrans", &assign_SynchronousMachineTimeConstantReactance_xQuadTrans);
}

void SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SynchronousMachineTimeConstantReactance::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineTimeConstantReactance.ks", &get_SynchronousMachineTimeConstantReactance_ks);
	get_map.emplace("SynchronousMachineTimeConstantReactance.tc", &get_SynchronousMachineTimeConstantReactance_tc);
	get_map.emplace("SynchronousMachineTimeConstantReactance.tpdo", &get_SynchronousMachineTimeConstantReactance_tpdo);
	get_map.emplace("SynchronousMachineTimeConstantReactance.tppdo", &get_SynchronousMachineTimeConstantReactance_tppdo);
	get_map.emplace("SynchronousMachineTimeConstantReactance.tppqo", &get_SynchronousMachineTimeConstantReactance_tppqo);
	get_map.emplace("SynchronousMachineTimeConstantReactance.tpqo", &get_SynchronousMachineTimeConstantReactance_tpqo);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xDirectSubtrans", &get_SynchronousMachineTimeConstantReactance_xDirectSubtrans);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xDirectSync", &get_SynchronousMachineTimeConstantReactance_xDirectSync);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xDirectTrans", &get_SynchronousMachineTimeConstantReactance_xDirectTrans);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xQuadSubtrans", &get_SynchronousMachineTimeConstantReactance_xQuadSubtrans);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xQuadSync", &get_SynchronousMachineTimeConstantReactance_xQuadSync);
	get_map.emplace("SynchronousMachineTimeConstantReactance.xQuadTrans", &get_SynchronousMachineTimeConstantReactance_xQuadTrans);
}

void SynchronousMachineTimeConstantReactance::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDetailed::addClassGetFnsToMap(get_map);
}

void SynchronousMachineTimeConstantReactance::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDetailed::addEnumGetFnsToMap(get_map);
	get_map.emplace("SynchronousMachineTimeConstantReactance.modelType", &get_SynchronousMachineTimeConstantReactance_modelType);
	get_map.emplace("SynchronousMachineTimeConstantReactance.rotorType", &get_SynchronousMachineTimeConstantReactance_rotorType);
}

bool SynchronousMachineTimeConstantReactance::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SynchronousMachineTimeConstantReactance" &&
		dynamic_cast<SynchronousMachineTimeConstantReactance*>(otherObject) != nullptr;
}

const BaseClassDefiner SynchronousMachineTimeConstantReactance::declare()
{
	return BaseClassDefiner(SynchronousMachineTimeConstantReactance::addConstructToMap, SynchronousMachineTimeConstantReactance::addPrimitiveAssignFnsToMap, SynchronousMachineTimeConstantReactance::addClassAssignFnsToMap, SynchronousMachineTimeConstantReactance::debugName);
}

std::map<std::string, AttrDetails> SynchronousMachineTimeConstantReactance::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SynchronousMachineDetailed::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SynchronousMachineTimeConstantReactance_factory()
	{
		return new SynchronousMachineTimeConstantReactance;
	}
}

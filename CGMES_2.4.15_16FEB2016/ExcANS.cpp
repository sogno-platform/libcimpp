/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcANS.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcANS(),
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
		{ "ExcANS.blint", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.ifmn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.ifmx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.k2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.k3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.kce", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.krvecc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.kvfif", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.vrmn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcANS.vrmx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcANS::ExcANS() {}
ExcANS::~ExcANS() {}

const std::list<std::string>& ExcANS::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcANS::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcANS::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcANS::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcANS::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcANS::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcANS::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcANS_blint(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->blint;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_ifmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_ifmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ifmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_kce(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kce;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_krvecc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->krvecc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_kvfif(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kvfif;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
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

bool assign_ExcANS_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
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

bool assign_ExcANS_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_vrmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcANS_vrmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcANS_blint(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->blint;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_ifmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_ifmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ifmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_kce(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kce;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_krvecc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->krvecc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_kvfif(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kvfif;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
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

bool get_ExcANS_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
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

bool get_ExcANS_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_ExcANS_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_vrmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcANS_vrmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcANS* element = dynamic_cast<const ExcANS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcANS::debugName[] = "ExcANS";
const char* ExcANS::debugString() const
{
	return ExcANS::debugName;
}

void ExcANS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcANS", &ExcANS_factory);
}

void ExcANS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcANS.blint", &assign_ExcANS_blint);
	assign_map.emplace("ExcANS.ifmn", &assign_ExcANS_ifmn);
	assign_map.emplace("ExcANS.ifmx", &assign_ExcANS_ifmx);
	assign_map.emplace("ExcANS.k2", &assign_ExcANS_k2);
	assign_map.emplace("ExcANS.k3", &assign_ExcANS_k3);
	assign_map.emplace("ExcANS.kce", &assign_ExcANS_kce);
	assign_map.emplace("ExcANS.krvecc", &assign_ExcANS_krvecc);
	assign_map.emplace("ExcANS.kvfif", &assign_ExcANS_kvfif);
	assign_map.emplace("ExcANS.t1", &assign_ExcANS_t1);
	assign_map.emplace("ExcANS.t2", &assign_ExcANS_t2);
	assign_map.emplace("ExcANS.t3", &assign_ExcANS_t3);
	assign_map.emplace("ExcANS.tb", &assign_ExcANS_tb);
	assign_map.emplace("ExcANS.vrmn", &assign_ExcANS_vrmn);
	assign_map.emplace("ExcANS.vrmx", &assign_ExcANS_vrmx);
}

void ExcANS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcANS::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcANS.blint", &get_ExcANS_blint);
	get_map.emplace("ExcANS.ifmn", &get_ExcANS_ifmn);
	get_map.emplace("ExcANS.ifmx", &get_ExcANS_ifmx);
	get_map.emplace("ExcANS.k2", &get_ExcANS_k2);
	get_map.emplace("ExcANS.k3", &get_ExcANS_k3);
	get_map.emplace("ExcANS.kce", &get_ExcANS_kce);
	get_map.emplace("ExcANS.krvecc", &get_ExcANS_krvecc);
	get_map.emplace("ExcANS.kvfif", &get_ExcANS_kvfif);
	get_map.emplace("ExcANS.t1", &get_ExcANS_t1);
	get_map.emplace("ExcANS.t2", &get_ExcANS_t2);
	get_map.emplace("ExcANS.t3", &get_ExcANS_t3);
	get_map.emplace("ExcANS.tb", &get_ExcANS_tb);
	get_map.emplace("ExcANS.vrmn", &get_ExcANS_vrmn);
	get_map.emplace("ExcANS.vrmx", &get_ExcANS_vrmx);
}

void ExcANS::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcANS::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcANS::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcANS" &&
		dynamic_cast<ExcANS*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcANS::declare()
{
	return BaseClassDefiner(ExcANS::addConstructToMap, ExcANS::addPrimitiveAssignFnsToMap, ExcANS::addClassAssignFnsToMap, ExcANS::debugName);
}

std::map<std::string, AttrDetails> ExcANS::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcANS_factory()
	{
		return new ExcANS;
	}
}

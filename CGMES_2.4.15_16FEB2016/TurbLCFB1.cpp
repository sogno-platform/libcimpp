/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbLCFB1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TurbLCFB1(),
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
		{ "TurbLCFB1.db", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.emax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.fb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.fbf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.irmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.pbf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.pmwset", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.speedReferenceGovernor", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "TurbLCFB1.tpelec", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

TurbLCFB1::TurbLCFB1() {}
TurbLCFB1::~TurbLCFB1() {}

const std::list<std::string>& TurbLCFB1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TurbLCFB1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TurbLCFB1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TurbLCFB1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TurbLCFB1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TurbLCFB1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TurbLCFB1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TurbLCFB1_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_fb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_fbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_irmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->irmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_pbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_pmwset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmwset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_speedReferenceGovernor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->speedReferenceGovernor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_TurbLCFB1_tpelec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpelec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_TurbLCFB1_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->db;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_fb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_fbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_irmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->irmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_pbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_pmwset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmwset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_speedReferenceGovernor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->speedReferenceGovernor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_TurbLCFB1_tpelec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const TurbLCFB1* element = dynamic_cast<const TurbLCFB1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpelec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char TurbLCFB1::debugName[] = "TurbLCFB1";
const char* TurbLCFB1::debugString() const
{
	return TurbLCFB1::debugName;
}

void TurbLCFB1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TurbLCFB1", &TurbLCFB1_factory);
}

void TurbLCFB1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("TurbLCFB1.db", &assign_TurbLCFB1_db);
	assign_map.emplace("TurbLCFB1.emax", &assign_TurbLCFB1_emax);
	assign_map.emplace("TurbLCFB1.fb", &assign_TurbLCFB1_fb);
	assign_map.emplace("TurbLCFB1.fbf", &assign_TurbLCFB1_fbf);
	assign_map.emplace("TurbLCFB1.irmax", &assign_TurbLCFB1_irmax);
	assign_map.emplace("TurbLCFB1.ki", &assign_TurbLCFB1_ki);
	assign_map.emplace("TurbLCFB1.kp", &assign_TurbLCFB1_kp);
	assign_map.emplace("TurbLCFB1.mwbase", &assign_TurbLCFB1_mwbase);
	assign_map.emplace("TurbLCFB1.pbf", &assign_TurbLCFB1_pbf);
	assign_map.emplace("TurbLCFB1.pmwset", &assign_TurbLCFB1_pmwset);
	assign_map.emplace("TurbLCFB1.speedReferenceGovernor", &assign_TurbLCFB1_speedReferenceGovernor);
	assign_map.emplace("TurbLCFB1.tpelec", &assign_TurbLCFB1_tpelec);
}

void TurbLCFB1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void TurbLCFB1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("TurbLCFB1.db", &get_TurbLCFB1_db);
	get_map.emplace("TurbLCFB1.emax", &get_TurbLCFB1_emax);
	get_map.emplace("TurbLCFB1.fb", &get_TurbLCFB1_fb);
	get_map.emplace("TurbLCFB1.fbf", &get_TurbLCFB1_fbf);
	get_map.emplace("TurbLCFB1.irmax", &get_TurbLCFB1_irmax);
	get_map.emplace("TurbLCFB1.ki", &get_TurbLCFB1_ki);
	get_map.emplace("TurbLCFB1.kp", &get_TurbLCFB1_kp);
	get_map.emplace("TurbLCFB1.mwbase", &get_TurbLCFB1_mwbase);
	get_map.emplace("TurbLCFB1.pbf", &get_TurbLCFB1_pbf);
	get_map.emplace("TurbLCFB1.pmwset", &get_TurbLCFB1_pmwset);
	get_map.emplace("TurbLCFB1.speedReferenceGovernor", &get_TurbLCFB1_speedReferenceGovernor);
	get_map.emplace("TurbLCFB1.tpelec", &get_TurbLCFB1_tpelec);
}

void TurbLCFB1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addClassGetFnsToMap(get_map);
}

void TurbLCFB1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineLoadControllerDynamics::addEnumGetFnsToMap(get_map);
}

bool TurbLCFB1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TurbLCFB1" &&
		dynamic_cast<TurbLCFB1*>(otherObject) != nullptr;
}

const BaseClassDefiner TurbLCFB1::declare()
{
	return BaseClassDefiner(TurbLCFB1::addConstructToMap, TurbLCFB1::addPrimitiveAssignFnsToMap, TurbLCFB1::addClassAssignFnsToMap, TurbLCFB1::debugName);
}

std::map<std::string, AttrDetails> TurbLCFB1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineLoadControllerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TurbLCFB1_factory()
	{
		return new TurbLCFB1;
	}
}

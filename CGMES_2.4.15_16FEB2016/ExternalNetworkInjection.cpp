/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExternalNetworkInjection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExternalNetworkInjection(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
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
		{ "ExternalNetworkInjection.governorSCD", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.ikSecond", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxInitialSymShCCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxP", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxQ", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxR0ToX0Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxR1ToX1Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.maxZ0ToZ1Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minInitialSymShCCurrent", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minP", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minQ", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minR0ToX0Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minR1ToX1Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.minZ0ToZ1Ratio", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ExternalNetworkInjection.p", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ExternalNetworkInjection.q", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ExternalNetworkInjection.referencePriority", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SSH, } } },
		{ "ExternalNetworkInjection.voltageFactor", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ExternalNetworkInjection::ExternalNetworkInjection() {}
ExternalNetworkInjection::~ExternalNetworkInjection() {}

const std::list<std::string>& ExternalNetworkInjection::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExternalNetworkInjection::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExternalNetworkInjection::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExternalNetworkInjection::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExternalNetworkInjection::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExternalNetworkInjection::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExternalNetworkInjection::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExternalNetworkInjection_governorSCD(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->governorSCD;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_ikSecond(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ikSecond;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxInitialSymShCCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxInitialSymShCCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool assign_ExternalNetworkInjection_maxR0ToX0Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxR0ToX0Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxR1ToX1Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxR1ToX1Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxZ0ToZ1Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxZ0ToZ1Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_minInitialSymShCCurrent(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minInitialSymShCCurrent;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_minP(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minP;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_minQ(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool assign_ExternalNetworkInjection_minR0ToX0Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minR0ToX0Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_minR1ToX1Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minR1ToX1Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_minZ0ToZ1Ratio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minZ0ToZ1Ratio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_p(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool assign_ExternalNetworkInjection_q(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool assign_ExternalNetworkInjection_referencePriority(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->referencePriority;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExternalNetworkInjection_voltageFactor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->voltageFactor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExternalNetworkInjection_governorSCD(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->governorSCD;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_ikSecond(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ikSecond;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_maxInitialSymShCCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxInitialSymShCCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_maxP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_maxQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool get_ExternalNetworkInjection_maxR0ToX0Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxR0ToX0Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_maxR1ToX1Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxR1ToX1Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_maxZ0ToZ1Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxZ0ToZ1Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_minInitialSymShCCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minInitialSymShCCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_minP(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minP;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_minQ(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool get_ExternalNetworkInjection_minR0ToX0Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minR0ToX0Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_minR1ToX1Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minR1ToX1Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_minZ0ToZ1Ratio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minZ0ToZ1Ratio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_p(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool get_ExternalNetworkInjection_q(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
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

bool get_ExternalNetworkInjection_referencePriority(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->referencePriority;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExternalNetworkInjection_voltageFactor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->voltageFactor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExternalNetworkInjection::debugName[] = "ExternalNetworkInjection";
const char* ExternalNetworkInjection::debugString() const
{
	return ExternalNetworkInjection::debugName;
}

void ExternalNetworkInjection::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExternalNetworkInjection", &ExternalNetworkInjection_factory);
}

void ExternalNetworkInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExternalNetworkInjection.governorSCD", &assign_ExternalNetworkInjection_governorSCD);
	assign_map.emplace("ExternalNetworkInjection.ikSecond", &assign_ExternalNetworkInjection_ikSecond);
	assign_map.emplace("ExternalNetworkInjection.maxInitialSymShCCurrent", &assign_ExternalNetworkInjection_maxInitialSymShCCurrent);
	assign_map.emplace("ExternalNetworkInjection.maxP", &assign_ExternalNetworkInjection_maxP);
	assign_map.emplace("ExternalNetworkInjection.maxQ", &assign_ExternalNetworkInjection_maxQ);
	assign_map.emplace("ExternalNetworkInjection.maxR0ToX0Ratio", &assign_ExternalNetworkInjection_maxR0ToX0Ratio);
	assign_map.emplace("ExternalNetworkInjection.maxR1ToX1Ratio", &assign_ExternalNetworkInjection_maxR1ToX1Ratio);
	assign_map.emplace("ExternalNetworkInjection.maxZ0ToZ1Ratio", &assign_ExternalNetworkInjection_maxZ0ToZ1Ratio);
	assign_map.emplace("ExternalNetworkInjection.minInitialSymShCCurrent", &assign_ExternalNetworkInjection_minInitialSymShCCurrent);
	assign_map.emplace("ExternalNetworkInjection.minP", &assign_ExternalNetworkInjection_minP);
	assign_map.emplace("ExternalNetworkInjection.minQ", &assign_ExternalNetworkInjection_minQ);
	assign_map.emplace("ExternalNetworkInjection.minR0ToX0Ratio", &assign_ExternalNetworkInjection_minR0ToX0Ratio);
	assign_map.emplace("ExternalNetworkInjection.minR1ToX1Ratio", &assign_ExternalNetworkInjection_minR1ToX1Ratio);
	assign_map.emplace("ExternalNetworkInjection.minZ0ToZ1Ratio", &assign_ExternalNetworkInjection_minZ0ToZ1Ratio);
	assign_map.emplace("ExternalNetworkInjection.p", &assign_ExternalNetworkInjection_p);
	assign_map.emplace("ExternalNetworkInjection.q", &assign_ExternalNetworkInjection_q);
	assign_map.emplace("ExternalNetworkInjection.referencePriority", &assign_ExternalNetworkInjection_referencePriority);
	assign_map.emplace("ExternalNetworkInjection.voltageFactor", &assign_ExternalNetworkInjection_voltageFactor);
}

void ExternalNetworkInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExternalNetworkInjection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExternalNetworkInjection.governorSCD", &get_ExternalNetworkInjection_governorSCD);
	get_map.emplace("ExternalNetworkInjection.ikSecond", &get_ExternalNetworkInjection_ikSecond);
	get_map.emplace("ExternalNetworkInjection.maxInitialSymShCCurrent", &get_ExternalNetworkInjection_maxInitialSymShCCurrent);
	get_map.emplace("ExternalNetworkInjection.maxP", &get_ExternalNetworkInjection_maxP);
	get_map.emplace("ExternalNetworkInjection.maxQ", &get_ExternalNetworkInjection_maxQ);
	get_map.emplace("ExternalNetworkInjection.maxR0ToX0Ratio", &get_ExternalNetworkInjection_maxR0ToX0Ratio);
	get_map.emplace("ExternalNetworkInjection.maxR1ToX1Ratio", &get_ExternalNetworkInjection_maxR1ToX1Ratio);
	get_map.emplace("ExternalNetworkInjection.maxZ0ToZ1Ratio", &get_ExternalNetworkInjection_maxZ0ToZ1Ratio);
	get_map.emplace("ExternalNetworkInjection.minInitialSymShCCurrent", &get_ExternalNetworkInjection_minInitialSymShCCurrent);
	get_map.emplace("ExternalNetworkInjection.minP", &get_ExternalNetworkInjection_minP);
	get_map.emplace("ExternalNetworkInjection.minQ", &get_ExternalNetworkInjection_minQ);
	get_map.emplace("ExternalNetworkInjection.minR0ToX0Ratio", &get_ExternalNetworkInjection_minR0ToX0Ratio);
	get_map.emplace("ExternalNetworkInjection.minR1ToX1Ratio", &get_ExternalNetworkInjection_minR1ToX1Ratio);
	get_map.emplace("ExternalNetworkInjection.minZ0ToZ1Ratio", &get_ExternalNetworkInjection_minZ0ToZ1Ratio);
	get_map.emplace("ExternalNetworkInjection.p", &get_ExternalNetworkInjection_p);
	get_map.emplace("ExternalNetworkInjection.q", &get_ExternalNetworkInjection_q);
	get_map.emplace("ExternalNetworkInjection.referencePriority", &get_ExternalNetworkInjection_referencePriority);
	get_map.emplace("ExternalNetworkInjection.voltageFactor", &get_ExternalNetworkInjection_voltageFactor);
}

void ExternalNetworkInjection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void ExternalNetworkInjection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

bool ExternalNetworkInjection::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExternalNetworkInjection" &&
		dynamic_cast<ExternalNetworkInjection*>(otherObject) != nullptr;
}

const BaseClassDefiner ExternalNetworkInjection::declare()
{
	return BaseClassDefiner(ExternalNetworkInjection::addConstructToMap, ExternalNetworkInjection::addPrimitiveAssignFnsToMap, ExternalNetworkInjection::addClassAssignFnsToMap, ExternalNetworkInjection::debugName);
}

std::map<std::string, AttrDetails> ExternalNetworkInjection::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegulatingCondEq::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExternalNetworkInjection_factory()
	{
		return new ExternalNetworkInjection;
	}
}

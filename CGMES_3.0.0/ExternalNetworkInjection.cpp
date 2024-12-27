/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExternalNetworkInjection.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ActivePowerPerFrequency.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "CurrentFlow.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Integer.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExternalNetworkInjection::ExternalNetworkInjection() {};
ExternalNetworkInjection::~ExternalNetworkInjection() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExternalNetworkInjection.governorSCD", { CGMESProfile::EQ, } },
	{ "cim:ExternalNetworkInjection.ikSecond", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.maxInitialSymShCCurrent", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.maxP", { CGMESProfile::EQ, } },
	{ "cim:ExternalNetworkInjection.maxQ", { CGMESProfile::EQ, } },
	{ "cim:ExternalNetworkInjection.maxR0ToX0Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.maxR1ToX1Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.maxZ0ToZ1Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.minInitialSymShCCurrent", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.minP", { CGMESProfile::EQ, } },
	{ "cim:ExternalNetworkInjection.minQ", { CGMESProfile::EQ, } },
	{ "cim:ExternalNetworkInjection.minR0ToX0Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.minR1ToX1Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.minZ0ToZ1Ratio", { CGMESProfile::SC, } },
	{ "cim:ExternalNetworkInjection.p", { CGMESProfile::SSH, } },
	{ "cim:ExternalNetworkInjection.q", { CGMESProfile::SSH, } },
	{ "cim:ExternalNetworkInjection.referencePriority", { CGMESProfile::SSH, } },
	{ "cim:ExternalNetworkInjection.voltageFactor", { CGMESProfile::SC, } },
};

std::list<CGMESProfile>
ExternalNetworkInjection::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExternalNetworkInjection::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegulatingCondEq::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExternalNetworkInjection_governorSCD(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->governorSCD;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_ikSecond(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->ikSecond;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxInitialSymShCCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxInitialSymShCCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxR0ToX0Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxR0ToX0Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxR1ToX1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxR1ToX1Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_maxZ0ToZ1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->maxZ0ToZ1Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minInitialSymShCCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minInitialSymShCCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minP(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minP;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minQ(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minQ;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minR0ToX0Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minR0ToX0Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minR1ToX1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minR1ToX1Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_minZ0ToZ1Ratio(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->minZ0ToZ1Ratio;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_referencePriority(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->referencePriority;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExternalNetworkInjection_voltageFactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExternalNetworkInjection* element = dynamic_cast<ExternalNetworkInjection*>(BaseClass_ptr1))
	{
		buffer >> element->voltageFactor;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExternalNetworkInjection_governorSCD(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	if (const ExternalNetworkInjection* element = dynamic_cast<const ExternalNetworkInjection*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection"), &ExternalNetworkInjection_factory));
}

void ExternalNetworkInjection::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.governorSCD"), &assign_ExternalNetworkInjection_governorSCD));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.ikSecond"), &assign_ExternalNetworkInjection_ikSecond));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxInitialSymShCCurrent"), &assign_ExternalNetworkInjection_maxInitialSymShCCurrent));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxP"), &assign_ExternalNetworkInjection_maxP));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxQ"), &assign_ExternalNetworkInjection_maxQ));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxR0ToX0Ratio"), &assign_ExternalNetworkInjection_maxR0ToX0Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxR1ToX1Ratio"), &assign_ExternalNetworkInjection_maxR1ToX1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.maxZ0ToZ1Ratio"), &assign_ExternalNetworkInjection_maxZ0ToZ1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minInitialSymShCCurrent"), &assign_ExternalNetworkInjection_minInitialSymShCCurrent));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minP"), &assign_ExternalNetworkInjection_minP));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minQ"), &assign_ExternalNetworkInjection_minQ));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minR0ToX0Ratio"), &assign_ExternalNetworkInjection_minR0ToX0Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minR1ToX1Ratio"), &assign_ExternalNetworkInjection_minR1ToX1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.minZ0ToZ1Ratio"), &assign_ExternalNetworkInjection_minZ0ToZ1Ratio));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.p"), &assign_ExternalNetworkInjection_p));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.q"), &assign_ExternalNetworkInjection_q));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.referencePriority"), &assign_ExternalNetworkInjection_referencePriority));
	assign_map.insert(std::make_pair(std::string("cim:ExternalNetworkInjection.voltageFactor"), &assign_ExternalNetworkInjection_voltageFactor));
}

void ExternalNetworkInjection::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExternalNetworkInjection::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExternalNetworkInjection.governorSCD", &get_ExternalNetworkInjection_governorSCD);
	get_map.emplace("cim:ExternalNetworkInjection.ikSecond", &get_ExternalNetworkInjection_ikSecond);
	get_map.emplace("cim:ExternalNetworkInjection.maxInitialSymShCCurrent", &get_ExternalNetworkInjection_maxInitialSymShCCurrent);
	get_map.emplace("cim:ExternalNetworkInjection.maxP", &get_ExternalNetworkInjection_maxP);
	get_map.emplace("cim:ExternalNetworkInjection.maxQ", &get_ExternalNetworkInjection_maxQ);
	get_map.emplace("cim:ExternalNetworkInjection.maxR0ToX0Ratio", &get_ExternalNetworkInjection_maxR0ToX0Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.maxR1ToX1Ratio", &get_ExternalNetworkInjection_maxR1ToX1Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.maxZ0ToZ1Ratio", &get_ExternalNetworkInjection_maxZ0ToZ1Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.minInitialSymShCCurrent", &get_ExternalNetworkInjection_minInitialSymShCCurrent);
	get_map.emplace("cim:ExternalNetworkInjection.minP", &get_ExternalNetworkInjection_minP);
	get_map.emplace("cim:ExternalNetworkInjection.minQ", &get_ExternalNetworkInjection_minQ);
	get_map.emplace("cim:ExternalNetworkInjection.minR0ToX0Ratio", &get_ExternalNetworkInjection_minR0ToX0Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.minR1ToX1Ratio", &get_ExternalNetworkInjection_minR1ToX1Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.minZ0ToZ1Ratio", &get_ExternalNetworkInjection_minZ0ToZ1Ratio);
	get_map.emplace("cim:ExternalNetworkInjection.p", &get_ExternalNetworkInjection_p);
	get_map.emplace("cim:ExternalNetworkInjection.q", &get_ExternalNetworkInjection_q);
	get_map.emplace("cim:ExternalNetworkInjection.referencePriority", &get_ExternalNetworkInjection_referencePriority);
	get_map.emplace("cim:ExternalNetworkInjection.voltageFactor", &get_ExternalNetworkInjection_voltageFactor);
}

void ExternalNetworkInjection::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegulatingCondEq::addClassGetFnsToMap(get_map);
}

void ExternalNetworkInjection::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegulatingCondEq::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExternalNetworkInjection::declare()
{
	return BaseClassDefiner(ExternalNetworkInjection::addConstructToMap, ExternalNetworkInjection::addPrimitiveAssignFnsToMap, ExternalNetworkInjection::addClassAssignFnsToMap, ExternalNetworkInjection::debugName);
}

namespace CIMPP
{
	BaseClass* ExternalNetworkInjection_factory()
	{
		return new ExternalNetworkInjection;
	}
}
